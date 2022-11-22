#include<bits/stdc++.h>
class Solution {
    void helper(string s,int ind,string ds,vector<string>&ans){
        if(ind==-1){
            ans.push_back(ds);
            return;
        }
        int num=s[ind]-'0';
        int range=3;
        int offset=0;
        if(num ==7){
            range=4;
        }
        else if(num==8){
            offset=1;
        }
        else if(num==9){
            range=4;
            offset=1;
        }
        for(int i=0;i<range;i++){
            char ch='a' + (num-2)*3 + i + offset;
            ds=ch+ds;
            helper(s,ind-1,ds,ans);
            ds.erase(ds.begin()+0);
        }
        return;
    }
public:
    vector<string> letterCombinations(string s) {
        vector<string>ans;
        if(s.size()==0)
            return ans;
        string ds="";
        helper(s,s.size()-1,ds,ans);      
        return ans;
    }
};