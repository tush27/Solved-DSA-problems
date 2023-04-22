class Solution {
public:
    int minInsertions(string s1) {
        int n=s1.size();
        string s2=s1;
        reverse(s2.begin(),s2.end());
        int t[n+1][n+1];
        for(int i=0;i<n+1;++i)
        for(int j=0;j<n+1;++j){
            if(i==0 || j==0)
            t[i][j]=0;
        }
        for(int i=1;i<n+1;++i)
        for(int j=1;j<n+1;++j){
            if(s1[i-1]==s2[j-1])
            t[i][j]=1+t[i-1][j-1];
            else
            t[i][j]=max(t[i-1][j],t[i][j-1]);
        }
        return n-t[n][n];
    }
};