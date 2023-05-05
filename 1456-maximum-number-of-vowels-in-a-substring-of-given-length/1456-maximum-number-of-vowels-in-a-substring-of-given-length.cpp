class Solution {
public:
    int maxVowels(string str, int k) {
        int ans=INT_MIN;
        set<char>s;
        s.insert('u');
        s.insert('o');
        s.insert('i');
        s.insert('e');
        s.insert('a');
        int i=0,j=0;
        int count=0;
        while(j<k){
            if(s.find(str[j])!=s.end())
                count++;
            j++;
        }
        ans=max(ans,count);
        while(j<str.size()){
            if(s.find(str[j])!=s.end())
                count++;
            if(s.find(str[i])!=s.end())
                count--;
            i++;
            j++;
            ans=max(ans,count);
        }
        return ans;
        
    }
};