class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        set<int>s1,s2;
        vector<int>a1,a2;
        for(int i=0;i<nums1.size();i++){
            s1.insert(nums1[i]);
        }
        for(int i=0;i<nums2.size();i++){
            s2.insert(nums2[i]);
        }
        for(auto it:s1){
            if(s2.find(it)!=s2.end()){
                s2.erase(it);
            }
            else
                a1.push_back(it);
        }
        for(auto it:s2){
            a2.push_back(it);
        }
        vector<vector<int>>ans;
        ans.push_back(a1);
        ans.push_back(a2);
        return ans;
        
    }
};