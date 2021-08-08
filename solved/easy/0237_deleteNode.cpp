/*
Instead of criticizing smfwuxiao, let's analyze why this problem isn't a good interview question.
The whole point of asking any candidates a linked list problem is to test if the candidates think about edge cases, including:

Dereferencing Null Pointer, usually targeting tail pointer
When given Head is None
When there are duplications in the list
This question specifically mentioned all the above edge cases and extracted them out for you
Someone who can solve this problem might not even think of all the edge cases, which can backfire on them in real interview settings
*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        auto next = node->next;
        *node = *next;
        delete next;
    }
};

// or


class Solution {
public:
    void deleteNode(ListNode* node) {
        auto next = node->next;
        *node = *next;
    }
};


