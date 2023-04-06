class Solution {
    void dfs1(vector<vector<int>>&grid,vector<vector<int>>&visited,int x,int y,int n,int m){
         queue<pair<int,int>>q;
        q.push({x,y});
        visited[x][y]=-1;
        while(!q.empty()){
            auto front=q.front();
            q.pop();
            int i=front.first;
            int j=front.second;
        //top
            if(i-1 >=0 && grid[i-1][j]==0 && visited[i-1][j]==0){
                q.push({i-1,j});
                visited[i-1][j]=-1;
            }
            //bottom
            if(i+1 <n && grid[i+1][j]==0 && visited[i+1][j]==0){
                q.push({i+1,j});
                visited[i+1][j]=-1;
            }
            //left
            if(j-1 >=0 && grid[i][j-1]==0 && visited[i][j-1]==0){
                q.push({i,j-1});
                visited[i][j-1]=-1;
            }
            //right
            if(j+1 <m && grid[i][j+1]==0 && visited[i][j+1]==0){
                q.push({i,j+1});
                visited[i][j+1]=-1;
            }        
        }
    }
    void dfs(vector<vector<int>>&grid,vector<vector<int>>&visited,int x,int y,int n,int m){
        queue<pair<int,int>>q;
        q.push({x,y});
        visited[x][y]=true;
        while(!q.empty()){
            auto front=q.front();
            q.pop();
            int i=front.first;
            int j=front.second;
        //top
            if(i-1 >=0 && grid[i-1][j]==0 && visited[i-1][j]==0){
                q.push({i-1,j});
                visited[i-1][j]=1;
            }
            //bottom
            if(i+1 <n && grid[i+1][j]==0 && visited[i+1][j]==0){
                q.push({i+1,j});
                visited[i+1][j]=1;
            }
            //left
            if(j-1 >=0 && grid[i][j-1]==0 && visited[i][j-1]==0){
                q.push({i,j-1});
                visited[i][j-1]=1;
            }
            //right
            if(j+1 <m && grid[i][j+1]==0 && visited[i][j+1]==0){
                q.push({i,j+1});
                visited[i][j+1]=1;
            }        
        }
    }  
public:
    int closedIsland(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>>visited(n,vector<int>(m,0));
        int ans=0;
        //top-bottom
        for(int i=0;i<n;i++){
            if(grid[i][0] == 0 && visited[i][0]==0)
                dfs1(grid,visited,i,0,n,m);
            if(grid[i][m-1] == 0 && visited[i][m-1]==0)
                dfs1(grid,visited,i,m-1,n,m);
        }
        //left-right
        for(int i=0;i<m;i++){
            if(grid[0][i] == 0 && visited[0][i]==0)
                dfs1(grid,visited,0,i,n,m);
            if(grid[n-1][i] == 0 && visited[n-1][i]==0)
                dfs1(grid,visited,n-1,i,n,m);
        }
        for(int i=1;i<n-1;i++){
            for(int j=1;j<m-1;j++){
                if(grid[i][j]==0 && visited[i][j]==0){
                    dfs(grid,visited,i,j,n,m);
                    ans++;
                }
            }
        }
        return ans;
    }
};