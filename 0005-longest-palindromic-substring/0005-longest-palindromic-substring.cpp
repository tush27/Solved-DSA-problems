class Solution {
    int helper(string s,int i,int j){
        while(i>=0 && j<s.size()){
            if(s[i]!=s[j])
                break;
            i--;
            j++;
        }
        return j-i-1;
    }
public:
    string longestPalindrome(string s) {
        int maxi=0;
        int ind=0;
        for(int i=0;i<s.size();i++){
            int temp1=helper(s,i-1,i+1); // for odd len
            int temp2=helper(s,i,i+1); // for even len
            int len=max(temp1,temp2);
            if(maxi<len){
                maxi=len;
                ind=i-(len-1)/2;
            }
        }
        return s.substr(ind,maxi);
    }
};