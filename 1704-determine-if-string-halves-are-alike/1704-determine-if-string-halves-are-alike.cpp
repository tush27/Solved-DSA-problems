class Solution {
public:
    bool halvesAreAlike(string str) {
        int count=0;
        set<char>s;
        s.insert('a');
        s.insert('e');
        s.insert('i');
        s.insert('o');
        s.insert('u');
        int i=0;
        for(;i<str.size()/2;i++){
            if(s.find(tolower(str[i]))!=s.end()){
                count++;
            }
        }
        for(;i<str.size();i++){
            if(s.find(tolower(str[i]))!=s.end()){
                count--;
            }
        }
        return count==0;      
    }
};