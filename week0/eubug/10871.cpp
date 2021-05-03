/*
 * https://www.acmicpc.net/problem/10871 
 */

#include <bits/stdc++.h>
using namespace std;

int main(void) {
  int N, X, num;
  cin >> N >> X;

  for(int i=0; i<N; ++i) {
    cin >> num;
    if(num < X) {
      cout << num << ' ';
    }
  }

  return 0;
}
