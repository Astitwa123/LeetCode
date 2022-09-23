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
   ListNode *MergeTwoList(ListNode *l1, ListNode *l2)
    {
        if(l1==NULL)return l2;
        if(l2==NULL)return l1;
        ListNode *finalhead=NULL;
        if(l1->val < l2->val)
        {
            finalhead=l1;
            l1=l1->next;
        }
       else
       {
           finalhead=l2;
           l2=l2->next;
       }
       ListNode *p=finalhead;
       while(l1 && l2)
       {
           if(l1->val<l2->val)
           {
               p->next=l1;
               l1=l1->next;
           }
           else{
               p->next=l2;
               l2=l2->next;
           }
           p=p->next;
       }
       if(l1)
       {
           p->next=l1;
       }
      else{
           p->next=l2;
       }
       return finalhead;
    }
    
    ListNode* sortList(ListNode* head) {
        if(head==NULL || head->next==NULL)return head;
        ListNode *slow=head;
        ListNode *fast=head->next;
        
        while(fast && fast->next)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode *n=slow->next;
        slow->next=NULL;
        ListNode *a=sortList(head);
        ListNode *b=sortList(n);
        head=MergeTwoList(a,b);
        return head;
    }
};