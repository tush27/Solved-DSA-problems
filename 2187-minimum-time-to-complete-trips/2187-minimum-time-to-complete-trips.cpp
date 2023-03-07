class Solution {
public:
    long long minimumTime(vector<int>& time, int totalTrips) {
        sort(time.begin(),time.end());
        long long low=0,high=1e14,ans=1e14;
        while(low<high){
            long long mid=(high+low)/2;
            long long temp=0;
            for(int i=0;i<time.size();i++){
                temp+=mid/(long long)time[i];
                if(temp > totalTrips){
                    break;
                }
            }
            if(temp >= totalTrips){
                ans=min(mid,ans);
                high=mid;
            }
            else
                low=mid+1;
        }//end of while
        return ans;
        
    }
};