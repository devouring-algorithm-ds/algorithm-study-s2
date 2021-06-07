/*
 * Runtime: 4 ms, faster than 78.46% of C++ online submissions 
 * Memory Usage: 6.7 MB, less than 33.53% of C++ online submissions 
 * */
class Solution {
  public:
    string removeOuterParentheses(string s) {
      bool opened = false;
      string res = "";
      int cnt=0;

      for(char c : s) {
        if(c==40) {
          if(opened) res+=c, ++cnt;
          else opened = true;
        } else if(c == 41) {
          if(cnt==0) opened = false;
          else res+=c, --cnt;
        }
      }

      return res;
    }
};
