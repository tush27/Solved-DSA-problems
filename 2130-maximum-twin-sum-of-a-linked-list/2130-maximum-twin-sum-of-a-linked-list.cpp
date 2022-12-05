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
    ListNode*reverse(ListNode*head){
        ListNode*prev,*curr,*nxt;
        prev=NULL;
        curr=head;
        nxt=head->next;
        while(nxt){
            curr->next=prev;
            prev=curr;
            curr=nxt;
            nxt=nxt->next;
        }
        curr->next=prev;
        return curr;
    }
public:
    int pairSum(ListNode* head) {
        ListNode*slow,*fast;
        slow=fast=head;
        while(fast && fast->next && fast->next->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        slow->next=reverse(slow->next);
        slow=slow->next;
        int maxi=INT_MIN;
        fast=head;
        while(slow){
            int temp=slow->val + fast->val;
            maxi=max(temp,maxi);
            slow=slow->next;
            fast=fast->next;
        }
        return maxi;
        
    }
};