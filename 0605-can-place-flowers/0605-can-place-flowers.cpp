class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int cnt) {
        int n=flowerbed.size();
        if(n==1){
            if((cnt==1 && flowerbed[0]==0) || cnt==0)
                return true;
            else
                return false;
        }
        if(flowerbed[0]==0 && flowerbed[1]==0){
            flowerbed[0]=1;
            cnt--;
        }
        for(int i=1;i<n-1;i++){
            if(cnt==0)
                return true;
            if(flowerbed[i]==0){
                if(flowerbed[i-1]==0 && flowerbed[i+1]==0){
                    cnt--;
                    flowerbed[i]=1;
                }
            }
        }//end for
        if(flowerbed[n-1]==0 && flowerbed[n-2]==0){
            cnt--;
        }
        if(cnt <= 0)
            return true;
        return false;
    }
};