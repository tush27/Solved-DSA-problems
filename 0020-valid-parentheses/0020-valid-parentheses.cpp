class Solution {
public:
    bool isValid(string str) {
        stack<char>s;
        int i=0;
        while(i<str.size()){
            if(s.empty() || str[i]=='(' || str[i]=='{' || str[i]=='[')
                s.push(str[i]);
            else{
                if(str[i]==')' && s.top()=='(')
                    s.pop();
                else if(str[i]=='}' && s.top()=='{')
                    s.pop();
                else if(str[i]==']' && s.top()=='[')
                    s.pop();
                else
                    return false;
            }
            i++;
        }
        if(s.empty())
            return true;
        return false;
        
    }
};