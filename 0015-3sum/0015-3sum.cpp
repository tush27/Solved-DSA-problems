class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        for(int i=0;i<nums.size()-2;i++){
            int rem=0-nums[i];
            int k=i+1,j=n-1;
            while(k<j){
                if(nums[k]+nums[j] > rem)
                    j--;
                else if(nums[k]+nums[j] < rem)
                    k++;
                else{
                    vector<int>temp(3);
                    temp[0]=nums[i];
                    temp[1]=nums[k];
                    temp[2]=nums[j];
                    ans.push_back(temp);
                    while(k<j && nums[k]==temp[1])
                        k++;
                    while(j>k && nums[j]==temp[2])
                        j--;
                }
            }
            while(i+1<n && nums[i]==nums[i+1])
                i++;     
        }
        return ans;          
    }
};