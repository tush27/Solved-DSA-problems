vector<bool>visited(n,false);
queue<int>q;
q.push(start);
visited[start]=true;
while(!q.empty()){
int front=q.front();
q.pop();
for(auto it:adj[front]){
if(!visited[it.first] && it.second < dis){
if(it.first == end){
flag=true;
break;
}
q.push(it.first);
visited[it.first]=true;
}
}
if(flag){
ans[i]=true;
break;
}
}//end while
i++;
}//end queries
return ans;
}
};