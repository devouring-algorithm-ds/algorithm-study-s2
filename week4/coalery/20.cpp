#include <stack>

// Time Complexity : O(N)

class Solution {
public:
    bool isValid(string s) {
        stack<char> S;
        
        for(int i=0; i<s.length(); i++) {
            if(s[i] == '(' || s[i] == '[' || s[i] == '{') {
                S.push(s[i]);
            } else if(s[i] == ')') {
                if(S.empty() || S.top() != '(')
                    return false;
                S.pop();
            } else if(s[i] == ']') {
                if(S.empty() || S.top() != '[')
                    return false;
                S.pop();
            } else if(s[i] == '}') {
                if(S.empty() || S.top() != '{')
                    return false;
                S.pop();
            }
        }
        
        if(!S.empty()) return false;
        return true;
    }
};