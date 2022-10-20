/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(NULL) {}

 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* curr=head;
        if(!head)return head;
        while(curr->next)
        {
            if(curr->val==curr->next->val)
            {
                ListNode* tmp=curr->next;
                curr->next=curr->next->next;
                delete tmp;
            }
            else{
                curr=curr->next;
            }
        }
        return head;
    }
};

