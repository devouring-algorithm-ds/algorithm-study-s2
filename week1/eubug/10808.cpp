#include <bits/stdc++.h>
using namespace std;

int main(void) {
  int alphabet[26] = {0};
  string s;
  cin >> s;

  // O(n), n = length of 's'
  for(char c : s) ++alphabet[c - 'a'];

  for(int i=0; i<26; ++i)
    printf("%d ", alphabet[i]);

  return 0;
}
