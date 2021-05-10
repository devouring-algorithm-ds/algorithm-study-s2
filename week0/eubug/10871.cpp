/*
 * https://www.acmicpc.net/problem/10871 
 */

#include <bits/stdc++.h>
using namespace std;

int main(void) {
  int N, X, num;
  // O(1)
  cin >> N >> X;

  // O(N)
  for(int i=0; i<N; ++i) {
    // O(1)
    cin >> num;
    // O(1)
    if(num < X) cout << num << ' ';
  }

  return 0;
}
