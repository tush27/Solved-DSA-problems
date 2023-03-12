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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        int n=lists.size();
        if(n==0)
            return NULL;
        int k=0;
        for(k=0;k<n;k++){
            if(lists[k])
                break;
        }
        if(k==n)
            return NULL;
        ListNode*ans=lists[k];
        for(int i=k+1;i<n;i++){
            if(!lists[i])
                continue;
            ListNode* l1=ans;
            ListNode* l2=lists[i];
            if(l1->val > l2->val){
                ans=l2;
                swap(l1,l2);
            }
            while(l1 && l2){
                ListNode*temp=NULL;
                while(l1 && l1->val <= l2->val){
                    temp=l1;
                    l1=l1->next;
                }
                temp->next=l2;
                swap(l1,l2);
            }
        }
        return ans;
        
    }
};