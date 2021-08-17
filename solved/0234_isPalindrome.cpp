/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
#include <typeinfo>
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        // simple way: travese list store vals in arr and then check palindrome
        string list_items;
        while(head != nullptr) {
            // remember to convert int to string
            list_items += to_string(head->val);
            head = head->next;
        }
        cout << list_items;
        int left = 0, right = list_items.size() - 1;
        while(left < right) {
            if(list_items[left] != list_items[right])
                return false;
            left++;
            right--;
        }
        return true;
    }
};


class Solution {
public:
    bool isPalindrome(ListNode* head) {
        size_t sz = 0;
        for (ListNode* it = head; it != nullptr; it = it->next, ++sz);

        if (sz <= 1) {
            return true;
        }

        ListNode* curr_node = head;
        ListNode* prev_node = nullptr;
        ListNode* next_node = nullptr;
        for (int i = 0; curr_node != nullptr && i < sz / 2; ++i) {
            next_node = curr_node->next;
            curr_node->next = prev_node;
            prev_node = curr_node;
            if (i != sz / 2 - 1) {
                curr_node = next_node;
            }
        }

        if (sz % 2 != 0) {
            next_node = next_node->next;
        }

        while (curr_node != nullptr && next_node != nullptr) {
            if (curr_node->val != next_node->val) {
                return false;
            }
            curr_node = curr_node->next;
            next_node = next_node->next;
        }

        return true;
    }
}


class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if(!head -> next) return true;
        ListNode* s = head, * f = head, * tmp, * s2, * snxt, * prev;

        while(f && f -> next){
            f = f -> next -> next;
            s = s -> next;
        }

        prev = nullptr;
        s2 = head;

        while (s2 != s){
            snxt = s2 -> next;
            s2 -> next = prev;
            prev = s2;
            s2 = snxt;
        }
        s2 = prev;
        if (f){
            s = s -> next;
        }
        while(s){
            cout << s -> val << " " << s2 -> val << endl;
            if (s -> val != s2 -> val) return false;
            s = s -> next;
            s2 = s2 -> next;
        }
        return true;

    }
};



class Solution {
public:
    // bool check(ListNode *a,ListNode *b){
    //     if(a && b){
    //         if(a->val!=b->val)return false;
    //         return check(a->next,b->next);
    //     }else{
    //         return false;
    //     }
    // }
    bool isPalindrome(ListNode* head) {
        /*stack<int>st;
        ListNode*p=head;
        int sz=0;
        while(p)
        {
            sz++;
            p=p->next;
        }
        p=head;

        for(int i=0;i<sz/2;i++)
        {
            st.push(p->val);
            p=p->next;
        }
        if(sz&1)
        {
            p=p->next;
            for(int i=(sz/2)+1;i<sz;i++)
            {
                //cout<<sz/2<<st.top()<<p->val;
                if(st.top()==p->val)
                    st.pop();
                p=p->next;
            }
        }
        else
        {
            for(int i=sz/2;i<sz;i++)
            {
                if(st.top()==p->val)
                    st.pop();
                p=p->next;
            }
        }

        if(st.empty())
            return true;
        return false;*/
        auto q=head;
        auto r=head;
        q=NULL;
        r=NULL;
        if(!head)return false;
        if(head->next==NULL)return true;


        auto slow=head;
        auto fast=head;

        while(fast->next && fast->next->next){
            fast=fast->next->next;
            r=q;
            q=slow;
            slow=slow->next;
            q->next=r;
        }
        if(fast->next){
            r=q;
            q=slow;
            slow=slow->next;
            q->next=r;
            fast=slow;
            slow=q;
            //return check(slow,fast);
        }else{
            fast=slow->next;
            slow=q;
            //return check(slow,fast);
        }
        while(slow && fast){
            if(slow->val!=fast->val)return false;
            slow=slow->next;
            fast=fast->next;
        }
        return true;

    }
};


class Solution {
public:
    bool isPalindrome(ListNode* head)
    {
        if (head == NULL)
        {
            return false;
        }

        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* half1 = head;
        ListNode* half2 = NULL;

        while (fast && fast -> next)
        {
            slow = slow -> next;
            fast = fast -> next -> next;
        }

        ListNode* current;

        while(slow)
        {
            current = slow -> next;
            slow -> next = half2;
            half2 = slow;
            slow = current;
        }

        while(half2 && half1 -> val == half2 -> val)
        {
            half1 = half1 -> next;
            half2 = half2 -> next;
        }

        if (half2 != NULL)
        {
            return false;
        }

        return true;
    }
};
