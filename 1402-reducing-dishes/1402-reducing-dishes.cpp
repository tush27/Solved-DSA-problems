class Solution {
public:
    int maxSatisfaction(vector<int>& sat) {
        sort(sat.begin(),sat.end());
        int ans=0;
        for(int i=0;i<sat.size();i++){
            int temp=0;
            int k=1;
            for(int j=i;j<sat.size();j++){
                temp+=sat[j]*k;
                k++;
            }
            ans=max(ans,temp);
        }
        return ans;
    }
};