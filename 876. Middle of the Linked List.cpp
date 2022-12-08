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
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        if(head==nullptr || head->next==nullptr)
            return head;
        ListNode *f=head, *s=head;
        while(f->next!=nullptr and f->next->next!=nullptr )
        {
            s = s->next;
            f = f->next->next;
        }
        if(f->next==nullptr)
            return s;
        else 
            return s->next;
    }
};