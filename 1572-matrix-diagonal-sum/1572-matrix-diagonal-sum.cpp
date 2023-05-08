class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum=0;
        int n=mat.size();
        for(int primary=0;primary<n;primary++){
            int secondary = n-primary - 1;
            sum+=mat[primary][primary] + mat[primary][secondary];
            if(primary == secondary)
                sum-=mat[primary][primary];
        }
        return sum;
        
    }
};