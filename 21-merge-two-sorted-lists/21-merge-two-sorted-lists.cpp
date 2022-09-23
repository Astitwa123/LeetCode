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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* newhead=NULL;
        if(l1==NULL)return l2;
        if(l2==NULL)return l1;
        
        if(l1->val <l2->val)
        {
            newhead=l1;
            newhead->next=mergeTwoLists(l1->next,l2);
        }
        else
        {
            newhead=l2;
            newhead->next=mergeTwoLists(l1,l2->next);
        }
        return newhead;
        }
              
};