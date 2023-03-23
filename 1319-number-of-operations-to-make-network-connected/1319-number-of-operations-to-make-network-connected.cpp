class Solution {
    void bfs(vector<int>arr[],vector<bool>&visited,int curr){
        queue<int>q;
        q.push(curr);
        visited[curr]=true;
        while(!q.empty()){
            int front=q.front();
            q.pop();
            for(auto it:arr[front]){
                if(!visited[it]){
                    q.push(it);
                    visited[it]=true;
                }
            }
        }//end of while
    }
public:
    int makeConnected(int n, vector<vector<int>>& connections) {
        if(connections.size() < n-1)
            return -1;
        vector<int>arr[n];
        for(auto it : connections){
            arr[it[0]].push_back(it[1]);
            arr[it[1]].push_back(it[0]);
        }
        vector<bool>visited(n,false);
        int count=0;
        for(int i=0;i<n;i++){
            if(!visited[i]){
                count++;
                bfs(arr,visited,i);
            }
        }//end of for
        return count-1;
        
    }
};