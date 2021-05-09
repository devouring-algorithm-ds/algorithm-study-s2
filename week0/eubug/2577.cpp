#include <bits/stdc++.h>
using namespace std;
int main(void) {
  int a, b, c, d, arr[10] = {0};
  // O(1)
  cin >> a >> b >> c;
  // O(1)
  d = a*b*c;

  // O(L), L = a*b*c의 길이
  while(d) {
    arr[d%10]++;
    d /= 10;
  }

  // O(1)
  for(int i=0; i<10; ++i)
    cout << arr[i] << endl;
  return 0;
}
