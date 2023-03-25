class Solution {
    int bfs(vector<int>adj[],vector<bool>&visited,int cur){
        queue<int>q;
        q.push(cur);
        visited[cur]=true;
        int count=0;
        while(!q.empty()){
            int front=q.front();
            q.pop();
            count++;
            for(auto it:adj[front]){
                if(!visited[it]){
                    q.push(it);
                    visited[it]=true;
                }                    
            }//end of for
        }
        return count;
    }
public:
    long long countPairs(int n, vector<vector<int>>& edges) {
        vector<int>adj[n];
        vector<bool>visited(n,false);
        for(auto it:edges){
            adj[it[0]].push_back(it[1]);
            adj[it[1]].push_back(it[0]);
        }
        long long ans=0;
        long long sum=0;
        for(int i=0;i<n;i++){
            if(!visited[i]){
                int temp=0;
                temp=bfs(adj,visited,i);
                ans=ans+(sum*temp);
                sum+=temp;
            }
        }//end of for
        return ans;
    }
};