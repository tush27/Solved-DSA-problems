class Solution {
public:
    string predictPartyVictory(string senate) {
        int r=0,d=0;
        int count_r=0,count_d=0;
        for(int i=0;i<senate.size();i++){
            if(senate[i]=='R')
                count_r++;
            else
                count_d++;
        }
        while(count_r && count_d){
            for(int i=0;i<senate.size();i++){
                if(senate[i]=='R'){
                    if(r){
                        r--;
                        count_r--;
                        senate[i]='A';
                    }
                    else{
                        d++;
                    }
                        
                }
                else if(senate[i]=='D'){
                    if(d){
                        d--;
                        count_d--;
                        senate[i]='A';
                    }
                    else{
                        r++;
                    }
                }
            }//end of for
            
            
        }//end of while
        if(count_r)
            return "Radiant";
        return "Dire";
        
    }
};