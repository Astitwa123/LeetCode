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
    bool hasCycle(ListNode *head) {
        if(!head || !head->next)return false;
        unordered_set<ListNode*>mp;
        int count=0;
        while(head)
        {
            mp.insert(head);
            head=head->next;
            count++;
            if(count>mp.size())return true;
        }
        return false;
    }
};