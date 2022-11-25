class Solution {
public:
    int firstMissingPositive(vector<int>& arr) {
        int n=arr.size();
        // bool one=false;
        // for(int i=0;i<n;i++){
        //     if(nums[i]==1)
        //         one=true;
        //     if(nums[i] < 1 || nums[i] > n)
        //         nums[i]==1;
        // }
        // if(!one)
        //     return 1;
        // for(int i=0;i<n;i++){
        //     nums[nums[i]-1]=-1*nums[nums[i]-1];
        // }
        // for(int i=0;i<n;i++){
        //     if(nums[i] > 0)
        //         return i+1;
        // }
        // return 0;
        unordered_map<int,int>mymap;
        for(int i=0;i<n;++i)
        {
            mymap[arr[i]]++;
        }
        int ans;
        for(int i=0;i<n+1;++i){
            if(mymap.count(i+1)>0)
            continue;
            else
            {
                ans=i+1;
                break;
            }
        }
        return ans;
        
    }
};