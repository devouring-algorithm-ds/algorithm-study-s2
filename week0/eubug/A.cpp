/**
 * https://atcoder.jp/contests/abc126/tasks/abc126_a 
 */

#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main(void) {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int N, K;
  string S;

  // O(1)
  cin >> N >> K >> S;
  // O(1)
  S[K-1] += 32;
  // O(1)
  cout << S << endl;

  return 0;
}
