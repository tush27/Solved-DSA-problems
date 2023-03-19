class Solution {
public:
    int findSmallestInteger(vector<int>& nums, int value) {
        int n=nums.size();
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[((nums[i] % value) + value) % value]++;
        }
        for(int i=0;i<n+1;i++){
            int rem=i%value;
            if(mp.count(rem) && mp[rem] > 0)
                mp[rem]--;
            else
                return i;
        }
        return -1;
    }
};