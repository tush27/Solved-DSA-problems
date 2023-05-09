class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int min_col=0,min_row=0;
        int max_col=matrix[0].size()-1;
        int max_row=matrix.size()-1;
        long total = (max_row+1) * (max_col+1);
        vector<int>ans;
        int cnt=0;
        
        while(cnt<total){
            for(int i=min_col,j=min_row;cnt<total && i<=max_col;i++){
                ans.push_back(matrix[j][i]);
                cnt++;
            }
            min_row++;
            for(int i=max_col,j=min_row;cnt<total && j<=max_row;j++){
                ans.push_back(matrix[j][i]);
                cnt++;
            }
            max_col--;
            for(int i=max_col,j=max_row;cnt<total && i>=min_col;i--){
                ans.push_back(matrix[j][i]);
                cnt++;
            }
            max_row--;
            for(int i=min_col,j=max_row;cnt<total && j>=min_row;j--){
                ans.push_back(matrix[j][i]);
                cnt++;
            }
            min_col++; 
        }        
        return ans; 
        
    }
};