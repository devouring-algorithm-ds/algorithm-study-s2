#include <bits/stdc++.h>
using namespace std;
int main(void) {
  bool arr[100] = {0};
  int dwarf[10], sum=0;

  // O(1)
  for(int i=0; i<9; ++i) {
    scanf("%d", &dwarf[i]);
    sum+=dwarf[i];
    arr[dwarf[i]] = 1;
  }

  // O(1)??
  for(int i=0; i<9; ++i) {
    // O(1)??
    for(int j=i+1; j<9; ++j) {
      // O(1)
      if(sum - (dwarf[i] + dwarf[j]) == 100) { 
        arr[dwarf[i]] = arr[dwarf[j]] = 0;
        i = j = 10;
        break;
      }
    }
  }

  // O(1)
  for(int i=0; i<100; ++i) 
    if(arr[i]) cout << i << endl;

  return 0;
}
