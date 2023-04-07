class Solution {
    int bfs(vector<vector<int>>&grid,vector<vector<bool>>&visited,int x,int y,int n,int m){
        int ans=0;
        visited[x][y]=true;
        queue<pair<int,int>>q;
        q.push({x,y});
        while(!q.empty()){
            ans++;
            auto front=q.front();
            q.pop();
            int i=front.first;
            int j=front.second;
            
            if(i-1>=0 && grid[i-1][j] && !visited[i-1][j]){
                q.push({i-1,j});
                visited[i-1][j]=true;
            }
            if(j-1>=0 && grid[i][j-1] && !visited[i][j-1]){
                q.push({i,j-1});
                visited[i][j-1]=true;
            }
            if(i+1<n && grid[i+1][j] && !visited[i+1][j]){
                q.push({i+1,j});
                visited[i+1][j]=true;
            }
            if(j+1<m && grid[i][j+1] && !visited[i][j+1]){
                q.push({i,j+1});
                visited[i][j+1]=true;
            }
            
        }
        return ans;
    }
public:
    int numEnclaves(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int ans=0;
        int waste=0;
        vector<vector<bool>>visited(n,vector<bool>(m,false));
        
        for(int i=0;i<n;i++){
            if(grid[i][0]==1 && visited[i][0]==false)
                waste+=bfs(grid,visited,i,0,n,m);
            if(grid[i][m-1]==1 && visited[i][m-1]==false)
                waste+=bfs(grid,visited,i,m-1,n,m);
        }
        for(int j=0;j<m;j++){
            if(grid[0][j]==1 && visited[0][j]==false)
                waste+=bfs(grid,visited,0,j,n,m);
            if(grid[n-1][j]==1 && visited[n-1][j]==false)
                waste+=bfs(grid,visited,n-1,j,n,m);
        }
        
        for(int i=1;i<n-1;i++)
            for(int j=1;j<m-1;j++){
                if(grid[i][j]==1 && !visited[i][j])
                    ans+=bfs(grid,visited,i,j,n,m);
            }
        return ans;
        
            
    }
};