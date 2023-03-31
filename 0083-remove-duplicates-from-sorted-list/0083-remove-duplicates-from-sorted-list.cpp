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
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head)
            return head;
        ListNode*node=head;
        while(node->next){
            if(node->next->val == node->val){
                ListNode* temp=node->next;
                while(temp && temp->val == node->val){
                    temp=temp->next;
                }
                node->next=temp;
            }
            else
                node=node->next;
        }
        return head;
    }
};