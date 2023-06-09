class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        char ans=126;
        for(int i=0;i<letters.size();i++){
            if(letters[i] >  target && letters[i] < ans)
                ans=letters[i];
        }
        if(ans==126)
            ans=letters[0];
        return ans;
    }
};