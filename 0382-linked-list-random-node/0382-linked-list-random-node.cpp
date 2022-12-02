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
    int len=0;
    ListNode *headNode;
public:
    Solution(ListNode* head) {
        headNode=head;
        ListNode* tmp=headNode;
        while(tmp)
        {
            len++;
            tmp=tmp->next;
        }
    }
    
    int getRandom() {
        int rand1=rand()%len;
        ListNode* tmp=headNode;
        for(int i=0;i<rand1;i++)
        {
            tmp=tmp->next;    
        }
        return tmp->val;
    }
};
