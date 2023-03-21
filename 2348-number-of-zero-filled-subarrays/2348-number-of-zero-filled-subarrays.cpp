class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long ans=0;
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(!nums[i])
                count++;
            else
                count=0;
            ans+=count;
        }
        return ans;
    }
};