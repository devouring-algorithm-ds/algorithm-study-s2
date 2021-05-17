// O(n + m)
#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n;
  cin >> n;
  while(n--) {
    string a, b;
    cin >> a >> b;

    int alphaA[26] = {0};
    int alphaB[26] = {0};

    // O(n + m)  
    // O(n), n = length of 'a'
    for(char c : a) ++alphaA[c - 'a'];
    // O(m), m = length of 'b'
    for(char c : b) ++alphaB[c - 'a'];

    // O(m), length of 'b'
    string s = "Possible";
    for(char c : b) {
      if(alphaA[c - 'a'] != alphaB[c - 'a']) {
        s = "Impossible";
        break;
      }
    }

    cout << s << endl;
  }
  return 0;
}
