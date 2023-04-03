class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int ans=0;
        int i=0,j=people.size()-1;
        while(i<=j){
            int sum=people[j] + people[i];
            if(sum<=limit){
                i++;
            }
            ans++;
            j--;
        }
        return ans;  
    }
};