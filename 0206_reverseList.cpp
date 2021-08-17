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

#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
static auto _ = [] ()
{ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);return 0;}();
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        // inside function
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
        if (head == nullptr || head->next == nullptr) {
            return head;
          }
        ListNode* temp;
        ListNode* reversed = head;
        ListNode* to_be_rev = head->next;
        reversed->next = nullptr;
        while(to_be_rev != nullptr) {
            /*
            previous logic:
            find out what's wrong with this
            temp = reversed;
            reversed = to_be_rev;
            reversed->next = temp;
            to_be_rev = to_be_rev->next;
            */
            temp = to_be_rev;
            to_be_rev = to_be_rev->next;
            temp->next = reversed;
            reversed = temp;
            cout << reversed->val;
        }
        return reversed;
    }
};


class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* p=head;
        ListNode* q=NULL;
        ListNode* r=NULL;
        while(p){
            r=q;
            q=p;
            p=p->next;
            q->next=r;
        }
        head=q;
        return head;
    }
};
