class Solution {
public:
    int strStr(string haystack, string needle) {
        int n=needle.size();
        int m=haystack.size();
        int i=0;
        while(i+n<=m){
            string temp=haystack.substr(i,n);
            if(temp==needle)
                return i;
            i++;
        }
        return -1;
    }
};