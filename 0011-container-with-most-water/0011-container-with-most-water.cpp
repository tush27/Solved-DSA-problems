class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int i=0,j=n-1;
        int maxi=0;
        while(i<j){
            int diff=j-i;
            int temp=0;
            if(height[i]<height[j]){
                temp=diff*height[i];
                i++;
            }
            else{
                temp=diff*height[j];
                j--;  
            }
            maxi=max(maxi,temp);
        }
        return maxi;
    }
};