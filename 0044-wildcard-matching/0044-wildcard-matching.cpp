class Solution {
public:
    bool isMatch(string s, string p) {
        int n=s.size();
        int m=p.size();
        vector<vector<bool>>dp(n+1,vector<bool>(m+1,false));
        for(int i=0;i<n+1;i++){
                dp[i][0]=false;
        }
        int j=1;
        for(;j<m+1;j++){
            if(p[j-1]=='*')
                dp[0][j]=true;
            else
                break;
        }
        while(j<m+1){
            dp[0][j]=false;
            j++;
        }
        dp[0][0]=true;        
        for(int i=1;i<n+1;i++)
            for(int j=1;j<m+1;j++){
                if(s[i-1]==p[j-1] || (p[j-1]=='?' && s[i-1])){
                    dp[i][j]=dp[i-1][j-1];
                }
                else if(p[j-1]=='*'){
                    dp[i][j]=dp[i][j-1] || dp[i-1][j];
                }
                else
                dp[i][j]=false;
            }
        return dp[n][m];  
    }
};