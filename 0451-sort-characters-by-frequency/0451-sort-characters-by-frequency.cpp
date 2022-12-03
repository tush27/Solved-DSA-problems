class Solution {
    static bool cmp(pair<char,int>&a,pair<char,int>&b){
        return a.second > b.second;
    }
public:
    string frequencySort(string s) {
        map<char,int>mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        
        vector<pair<char,int>>v;
        for(auto it:mp)
            v.push_back(it);
        sort(v.begin(),v.end(),cmp);
        
        string ans="";
        for(auto it:v){
            int i=it.second;
            while(i--){
                ans+=it.first;
            }
        }
        return ans;        
    }
};