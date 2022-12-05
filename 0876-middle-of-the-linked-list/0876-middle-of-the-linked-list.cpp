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
    ListNode* middleNode(ListNode* head) {
        ListNode *slow=head;
        ListNode *fast=head->next;
    
          if(head==NULL)return head;
    while(fast && fast->next)
    {
        
        fast=fast->next->next;
        slow=slow->next;
    }
        if(fast==NULL){
            return slow;
        }
        else return slow->next;
        
        
        }
};