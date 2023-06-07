class Solution {
public:
    int minFlips(int a, int b, int c) {
        int count=0;   
        for(int i=0;i<32;i++){
            int temp1 = a&1;
            int temp2 = b&1;
            int temp3 = c&1;
            
            a=a>>1;
            b=b>>1;
            c=c>>1;
                        
            if(temp3 == 0){
                if((temp1 || temp2) == 1){
                    if(temp1 && temp2)
                        count+=2;
                    else
                        count++;
                }
            }
            else{
                if((temp1 || temp2) == 0){
                    count++;
                }
                
            }
        }
        return count;
        
    }
};