class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        vector<bool>indeg(n,false);
        for(auto it : edges){
            indeg[it[1]]=true;
        }
        vector<int>ans;
        for(int i=0;i<n;i++){
            if(!indeg[i])
                ans.push_back(i);
        }
        return ans;
    }
};