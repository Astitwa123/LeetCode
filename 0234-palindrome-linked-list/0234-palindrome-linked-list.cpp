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
    bool isPalindrome(ListNode* head) {
        if(head->next==NULL)return true;
        vector<int>a;
        ListNode *temp=head;
        while(temp)
        {
            a.push_back(temp->val);
            temp=temp->next;
        }
        int size=a.size();
        for(int i=0;i<size;i++)
        {
            if(a[i]!=a[size-i-1])
                return false;
        }
        return true;
    }
};