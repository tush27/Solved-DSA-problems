class Solution {
public:
    double average(vector<int>& salary) {
        int maxi=INT_MIN, mini=INT_MAX;
        int n=salary.size();
        double sum=0;
        for(int i=0;i<n;i++){
            sum+=salary[i];
            mini=min(mini,salary[i]);
            maxi=max(maxi,salary[i]);
        }
        sum=sum-mini-maxi;
        return sum/(n-2);
    }
};