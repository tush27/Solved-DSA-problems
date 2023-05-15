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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* dummy = new ListNode(-1);
        dummy->next=head;
        ListNode* second=dummy;
        ListNode* fast=dummy;
        ListNode* first_n=dummy;
        int cnt=0;
        while(cnt<k){
            fast=fast->next;
            cnt++;
        }
        first_n=fast;
        while(fast->next){
            second=second->next;
            fast=fast->next;
        }
        
        ListNode* second_n = second->next;

        swap(first_n->val,second_n->val);
        
        return head;
        
        
        
    }
};