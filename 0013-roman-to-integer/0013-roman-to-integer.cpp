class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int>mp;
        mp['I']=1;
        mp['V']=5;
        mp['X']=10;
        mp['L']=50;
        mp['C']=100;
        mp['D']=500;
        mp['M']=1000;
        stack<int>st;
        for(int i=0;i<s.size();i++){
            if(st.empty() || st.top()>=mp[s[i]])
                st.push(mp[s[i]]);
            else
            {
                int temp=mp[s[i]]-st.top();
                st.pop();
                st.push(temp);
            }
        }
        int ans=0;
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        return ans;     
    }
};