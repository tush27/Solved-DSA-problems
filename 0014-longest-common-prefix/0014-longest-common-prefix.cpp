class Solution {
    bool check(char ch,vector<string>&strs,int i){
        for(auto it:strs){
            if(it[i]!=ch)
                return false;
        }
        return true;
    }
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ref=strs[0];
        int i=0;
        for(;i<ref.size();i++){
            if(check(ref[i],strs,i))
                continue;
            break;
        }
        return ref.substr(0,i);
    }
};