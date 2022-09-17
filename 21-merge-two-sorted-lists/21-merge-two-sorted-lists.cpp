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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        struct ListNode* tmp= new ListNode(0), *head= new ListNode(0);
        if(l1==NULL && l2==NULL)
            return NULL;
        if(l1==NULL)return l2;
        if(l2==NULL)return l1;
        int flag=0;
        while(l1!=NULL && l2!=NULL)
              {
                 if(l1->val<l2->val)
                 {
                     if(flag==0)
                     {      
                        head=l1;
                        tmp=head;
                     }
                 
                  else
                  {
                      tmp->next=l1;
                      tmp=tmp->next;
                  }
                     l1=l1->next;
                 }
                 else{ 
                     if(flag==0)
                     {
                         head=l2;
                         tmp=head;
                         
                     }
                    else
                    {
                        tmp->next=l2;
                        tmp=tmp->next;
                    }
                     l2=l2->next;
                    
                  
                  
                    }
                  flag=1;
              }
        while(l1!=NULL)
              {
                  tmp->next=l1;
                  tmp=tmp->next;
                  l1=l1->next;
              } 
               while(l2!=NULL)
              {
                  tmp->next=l2;
                  tmp=tmp->next;
                  l2=l2->next;
              } 
        return head;
        }
              
};