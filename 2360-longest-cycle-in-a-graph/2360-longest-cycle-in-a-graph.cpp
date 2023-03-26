#include<bits/stdc++.h>
class Solution {
    void dfs(vector<int>&edges,int cur,vector<bool>&visited,vector<bool>&path_visited,vector<int>&dist,int cur_dis,int &ans){
        if(cur!=-1)
        {
            if(!visited[cur]){
                visited[cur]=true;
                path_visited[cur]=true;
                dist[cur]=cur_dis;
                dfs(edges,edges[cur],visited,path_visited,dist,cur_dis+1,ans);
            }
            else if(path_visited[cur])
                ans=max(ans,cur_dis-dist[cur]);
            path_visited[cur]=false;
        }
    }
public:
    int longestCycle(vector<int>& edges) {
        int n=edges.size();
        vector<int>dist(n,0);
        vector<bool>visited(n,false);
        vector<bool>path_visited(n,false);
        int ans=-1;
        for(int i=0;i<n;i++){
            if(!visited[i]){
                dfs(edges,i,visited,path_visited,dist,0,ans);
            }
        }
        return ans;
    }
};