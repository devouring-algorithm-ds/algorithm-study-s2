#include <bits/stdc++.h>
using namespace std;

int a[101];
int main(void){
  int n, v, cnt=0;
  scanf("%d", &n);
  for(int i=0; i<n; ++i) 
    scanf("%d", &a[i]);
  scanf("%d", &v);

  // O(n)
  for(int i=0; i<n; ++i) 
    if(a[i] == v) ++cnt;

  printf("%d\n", cnt);

  return 0;
}
