#include <bits/stdc++.h> 
using namespace std;
int main(void) {
  uint64_t a,b,cnt;
  // O(1)
  scanf("%llu %llu", &a, &b);

  // O(1)
  if (a > b) swap(a,b);

  // O(1) 
  cnt = b-a-1;
  printf("%llu\n", (a==b) ? 0 : cnt);

  // O(cnt), cnt = 두 수 사이에 있는 정수의 개수
  for(uint64_t i=a+1; i<b; ++i) printf("%llu ", i);
  return 0;
}
