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
    int getDecimalValue(ListNode* head) {
        vector<int>a;
        while(head){
            a.push_back(head->val);
            head=head->next;
        }
        int size=a.size();
        int ans=0;
        int j=0;
        for(int i=size-1;i>=0;i--)
        {
            ans=pow(2,j)*a[i]+ans;
            j++;
        }
        return ans;
    }
};