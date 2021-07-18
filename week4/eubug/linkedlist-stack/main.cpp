#include <iostream>
using namespace std;

#include "stack.hpp"

int main() {
  Stack stack(1);

  for(int i=2; i<10; ++i)
    stack.push(i), stack.print();

  cout << endl;

  while(!stack.isEmpty()) {
    cout << "Peeking: " << stack.peek() << endl;
    cout << "Popped:  " << stack.pop() << endl;
    stack.print();
  }

  cout << "Peeking: " << stack.peek() << endl;
  cout << "Popped:  " << stack.pop() << endl;
  stack.print();

  stack.push(17);
  cout << "Peeking: " << stack.peek() << endl;
  cout << "Popped:  " << stack.pop() << endl;
  stack.print();

  return 0;
}
