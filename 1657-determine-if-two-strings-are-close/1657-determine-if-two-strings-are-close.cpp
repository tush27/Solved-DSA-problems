class Solution {
public:
    bool closeStrings(string word1, string word2) {
        vector<int>freq1(26,0),freq2(26,0),ch1(26,0),ch2(26,0);
        
        for(auto it:word1) freq1[it-'a']++,ch1[it-'a']=1;
        for(auto it:word2) freq2[it-'a']++,ch2[it-'a']=1;
        
        sort(freq1.begin(),freq1.end());
        sort(freq2.begin(),freq2.end());
        
        return freq1==freq2 && ch1==ch2;        
    }
};