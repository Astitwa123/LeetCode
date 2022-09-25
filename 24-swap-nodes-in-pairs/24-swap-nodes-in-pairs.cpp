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
    ListNode* swapPairs(ListNode* head) {
        
        ListNode *first=head;
        ListNode *dummy=new ListNode(0);
        ListNode *prev=dummy;
     
        prev->next=head;
        while(first && first->next)
        {
            ListNode *second=first->next;
            ListNode *future=second->next;
            second->next=first;
            prev->next=second;
            first->next=future;
            prev=first;
            first=future;
        }
 return dummy->next;
        
    }
};