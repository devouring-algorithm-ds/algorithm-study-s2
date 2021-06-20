#include <iostream>
using namespace std;

void insertAt(int, int, int *, int &);
void removeAt(int, int *, int &);
void _print(int *, int &);

static int arr[10] = {10,20,30};
static int len = 3;

int main(void) {
  _print(arr, len);
  insertAt(2, 15, arr, len);
  _print(arr, len);
  insertAt(4, 25, arr, len);
  _print(arr, len);

  printf("\n\n");

  removeAt(1, arr, len);
  _print(arr, len);
  removeAt(1, arr, len);
  _print(arr, len);

  printf("\n\n");

  insertAt(1, 100, arr, len);
  _print(arr, len);
  insertAt(2, 200, arr, len);
  _print(arr, len);
  return 0;
}

// O(n)
void insertAt(int index, int data, int *arr, int &len) {
  int temp = len; 
  while(temp >= index) {
    arr[temp] = arr[temp-1];
    --temp;
  }

  arr[temp] = data;
  ++len;
}

// O(n)
void removeAt(int index, int *arr, int &len) {
  for(int i=index-1; i<len; ++i) 
    arr[i] = arr[i+1];

  --len;
}

void _print(int *arr, int &LENGTH) {
  //  const int LENGTH = sizeof(&arr) / sizeof(int);
  for(int i=0; i<LENGTH; ++i) 
    printf("%d ", arr[i]);
  printf("\n");
}
