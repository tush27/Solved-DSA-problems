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
    ListNode*prev=NULL;
public:
    ListNode* removeNodes(ListNode* head) {
        if(head==NULL || head->next==NULL){
            prev=head;
            return head;
        }
        ListNode*smallans=removeNodes(head->next);
        if(prev && prev->val <= head->val){
            prev=head;
            head->next=smallans;
            smallans=head;
        }
        return smallans;
    }
};