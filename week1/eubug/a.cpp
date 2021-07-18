#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int a,b;
  cin >> a >> b;
  // O(1)
  cout << (a >= 13 ? b : a >= 6 ? b/2 : 0) << endl;
  return 0;
}
