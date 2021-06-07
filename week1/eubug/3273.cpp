#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n, x, t, cnt=0;
  vector<int> a;
  scanf("%d", &n);
  for(int i=0; i<n; ++i) {
    scanf("%d", &t);
    a.push_back(t);
  }
  scanf("%d", &x);

  // O(n log n)
  sort(a.begin(), a.end());

  // O(n^2)
  for(int i=0; i<n-1; ++i) {
    for(int j=i+1; j<n; ++j) {
      if(a[i] + a[j] == x) ++cnt;
      else if(a[i] + a[j] > x) break;
    }
  }

  printf("%d\n", cnt);
  return 0;
}
