class Solution {
public:
    int reverse(int x) {
        bool neg=false;
        if(x<0){
            neg=true;
            x=abs(x);
        }
        int ans=0;
        while(x){
            int last=x%10;
            x=x/10;
            if(ans>INT_MAX/10 || (ans==INT_MAX/10) && last>7 )
                return 0;
            if(ans<INT_MIN/10 || (ans==INT_MIN/10) && last<-8 )
                return 0;
            ans=ans*10+last;
                    
        }
        if(neg)
            ans=ans*-1;
        return ans;       
        
    }
};