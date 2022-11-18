class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++)
            mp[nums[i]]=i;
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            if(mp.count(target-nums[i])>0 && i!=mp[target-nums[i]]){
                ans.push_back(i);
                ans.push_back(mp[target-nums[i]]);
                break;
            }
        }
        return ans;
    }
};