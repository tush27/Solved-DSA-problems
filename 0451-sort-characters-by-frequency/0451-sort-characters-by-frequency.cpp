class Solution {
public:
    string frequencySort(string s) {
      int hash[128]={0};
        for(char it:s)
            hash[it]++;
        sort(s.begin(),s.end(),[&](char a,char b){
            return hash[a] > hash[b] || (hash[a]==hash[b] && a<b);
        });
        return s;        
    }
};