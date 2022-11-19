class Solution {
public:
    int myAtoi(string s) {
        int sign=1;
        int i=0;
        int ans=0;
        bool of=false;
        while(i<s.size() && (s[i]==' '))
            i++;
        if(i==s.size())
            return ans;
        
        if(s[i]=='-'){
            sign=-1;
            i++;
        } 
        else if(s[i]=='+'){
            sign=1;
            i++;
        } 
        while(i<s.size()){
            char ch=s[i];
            if(ch>='0' && ch<='9'){
                int num=ch-'0';
                if(ans>INT_MAX/10 || (ans==INT_MAX/10 && num>7)){
                    ans=INT_MAX;
                    of=true;
                    break;
                }   
                ans=ans*10+num;     
            }
            else
                break;
            i++;            
        }
        if(sign==-1){
            ans=ans*sign;
            if(of)
                ans--;
        }
            
        return ans;
             
    }
};