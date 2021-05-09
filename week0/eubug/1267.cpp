#include <bits/stdc++.h>
using namespace std;
int main(void) {
  int n, a=0, b=0;
  // O(1) 
  cin >> n;
  // O(n)
  for(int i=0; i<n; ++i) {
    int x; cin>>x;
    // O(1) 
    a += (x/30 + 1) * 10;
    b += (x/60 + 1) * 15;
  }

  // O(1) 
  if(a==b) printf("Y M %d\n", a);
  else if (a<b) printf("Y %d\n", a);
  else printf("M %d\n", b);

  return 0;
}
