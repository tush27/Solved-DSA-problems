class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int total = n*n;
        vector<vector<int>>ans(n,vector<int>(n,1));
        int cnt=1;
        int minr=0,minc=0,maxr=n-1,maxc=n-1;
        while(cnt <= total){
            for(int i=minr,j=minc;cnt <= total && j<=maxc;j++){
                ans[i][j]=cnt;
                cnt++;
            }
            minr++;
            for(int i=minr,j=maxc;cnt <= total && i<=maxr;i++){
                ans[i][j]=cnt;
                cnt++;
            }
            maxc--;
            for(int i=maxr,j=maxc;cnt <= total && j>=minc;j--){
                ans[i][j]=cnt;
                cnt++;
            }
            maxr--;
            for(int i=maxr,j=minc;cnt <= total && i>=minr;i--){
                ans[i][j]=cnt;
                cnt++;
            }
            minc++;
        }
        return ans;
    }
};