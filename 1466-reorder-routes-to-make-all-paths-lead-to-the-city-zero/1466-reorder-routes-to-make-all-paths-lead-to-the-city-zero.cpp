class Solution {
public:
    int minReorder(int n, vector<vector<int>>& connections) {
        set<pair<int,int>>s;
        vector<int>adj[n];
        for(auto it:connections){
            s.insert({it[0],it[1]});
            adj[it[0]].push_back(it[1]);
            adj[it[1]].push_back(it[0]);
        }
        queue<int>q;
        vector<bool>visited(n,false);
        int count=0;
        q.push(0);
        visited[0]=true;
        while(!q.empty()){
            int front=q.front();
            q.pop();
            for(auto it:adj[front]){
                if(!visited[it]){
                    q.push(it);
                    if(s.find({it,front})==s.end())
                    count++;    
                    visited[it]=true;
                }   
            }   
        }//end of while
        return count;        
    }
};