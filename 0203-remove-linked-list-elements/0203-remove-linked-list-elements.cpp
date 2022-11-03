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
    ListNode* removeElements(ListNode* head, int val) {
       
        while(head && head->val==val)
        {
            head=head->next;
        }
        ListNode *c=head;
        while(c)
        {
            if(c->next && c->next->val==val)
                c->next=c->next->next;
            else
                c=c->next;
        }
        return head;
        
      
    }
};