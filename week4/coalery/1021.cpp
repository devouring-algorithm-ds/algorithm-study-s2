// Time Complexity : O(N)

class Solution {
public:
    string removeOuterParentheses(string s) {
        int parCnt = 0;
        string result = "";
        
        for(int i=0; i<s.length(); i++) {
            if(s[i] == ')') parCnt--;
            if(parCnt > 0) result.append(1, s[i]);
            if(s[i] == '(') parCnt++;
        }
        
        return result;
    }
};