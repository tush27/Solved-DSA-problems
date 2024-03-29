class Solution {
public:
    bool bfs(vector<vector<int>>&graph,vector<int>&color,int i){
        color[i]=0;
        queue<pair<int,int>>q;
        q.push({i,0});
        while(!q.empty()){
            int node=q.front().first;
            int col=q.front().second;
            q.pop();
            for(auto it:graph[node]){
                if(color[it]==-1){
                    color[it]=!col;
                    q.push({it,!col});
                }
                else if(color[it]==col)
                    return false;
        }
        }//end while
     return true;  
    }
    bool isBipartite(vector<vector<int>>& graph) {
        int n=graph.size();
        vector<int>color(n,-1);
        for(int i=0;i<n;i++){
            if(color[i]==-1)
                if(!bfs(graph,color,i))
                    return false;
        }
        return true;
    }
};