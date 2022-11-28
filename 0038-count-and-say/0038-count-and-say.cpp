class Solution {
    string helper(int ind,int n,string op){
        if(ind>n)
            return op;
        string temp="";
        for(int i=0;i<op.size();i++){
            char num=op[i];
            int count=0;
            int j=i;
            while(j<op.size() && op[i]==op[j]){
                count++;
                j++;
            }
            temp+=to_string(count);
            temp+=num;
            i=j-1;
        }
        string ans=helper(ind+1,n,temp);
        return ans;
    }
public:
    string countAndSay(int n) {
        string op="1";
        return helper(2,n,op);          
    }
};