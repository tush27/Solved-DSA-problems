class Solution {
    int helper(vector<int>&days,vector<int>&costs,int cur,int upto,vector<vector<int>>&dp){
        if(cur >= days.size())
            return 0;
        if(dp[cur][upto]!=-1)
            return dp[cur][upto];
        if(days[cur] <= upto)
            return helper(days,costs,cur+1,upto,dp);
        int a=costs[0] + helper(days,costs,cur,days[cur],dp);
        int b=costs[1] + helper(days,costs,cur,days[cur]+6,dp);
        int c=costs[2] + helper(days,costs,cur,days[cur]+29,dp);
        
        return dp[cur][upto]=min(a,min(b,c));
        
    }
public:
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        sort(days.begin(),days.end());
        int n=days.size();
        vector<vector<int>>dp(n+1,vector<int>(days[n-1]+30,-1));
        return helper(days,costs,0,0,dp);
    }
};