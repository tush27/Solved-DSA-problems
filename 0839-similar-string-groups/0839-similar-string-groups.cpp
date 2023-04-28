class Solution {
public:
    int numSimilarGroups(vector<string>& strs) {
        int n=strs.size();
        vector<bool>vis(n,false);
        int ans=0;
        for(int i=0;i<n;i++){
            if(vis[i])
                continue;
            dfs(i,n,strs,vis);
            ans++;
        }
        return ans;
    }
    void dfs(int i,int n,vector<string>&strs,vector<bool>&vis){
        vis[i]=true;
        for(int j=0;j<n;j++){
            if(!vis[j]){
                if(similar(strs[i],strs[j]))
                    dfs(j,n,strs,vis);
            }
        }
        return;
    }
    bool similar(string a,string b){
        int count=0;
        for(int i=0;i<a.size();i++){
            if(a[i]!=b[i])
                count++;
        }
        return (count==0 || count==2);
    }
};