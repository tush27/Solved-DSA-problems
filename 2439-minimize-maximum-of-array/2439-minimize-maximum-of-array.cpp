#include<bits/stdc++.h>
class Solution {
public:
    int minimizeArrayValue(vector<int>& nums) {
        long ans=INT_MIN;
        long sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            ans=max(ans,((sum+i)/(i+1)));
        }
        return ans;
    }
};