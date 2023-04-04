class Solution {
public:
    int partitionString(string s) {
        int count=0;
        int i=0,j=0;
        unordered_map<char,int>mp;
        while(j<s.size()){
            mp[s[j]]++;
            if(mp.size()==j-i+1)
                j++;
            else{
                count++;
                i=j;
                mp.clear();
            }
        }
        return count+1;
    }
};