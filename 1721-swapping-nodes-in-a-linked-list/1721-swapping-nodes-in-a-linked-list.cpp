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
        ListNode* first=dummy;
        int cnt=0;
        bool head_changed = false;
        while(cnt<k-1){
            fast=fast->next;
            cnt++;
        }
        first=fast;
        fast=fast->next;
        while(fast->next){
            second=second->next;
            fast=fast->next;
        }
        if(first->val == -1 || second->val == -1)
            head_changed = true;
        
        ListNode* first_n = first->next;
        ListNode* second_n = second->next;
        
//         first->next = second_n;
//         second->next = first_n;
        
//         swap(first_n->next,second_n->next);
        swap(first_n->val,second_n->val);
        
        //if(head_changed)
          //  return second_n;
        return head;
        
        
        
    }
};