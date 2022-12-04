class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        long long left=0;
        long long right=0;
        for(int it:nums)
            left+=it;
        int ind=0;
        int mini=INT_MAX;
        int n=nums.size();
        for(int i=0;i<nums.size();i++){
            left=left-nums[i];
            right+=nums[i];
            int a = right/(i+1);
            int b = (i == n-1) ? 0 : left/(n-i-1);
            if(abs(a-b) < mini){
                mini=abs(a-b);
                ind=i;
            }
        }
        return ind;
    }
};