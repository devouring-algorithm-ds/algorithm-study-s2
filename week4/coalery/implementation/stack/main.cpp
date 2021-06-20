#include <iostream>
#include "stack.hpp"

using namespace std;

int main(void) {
	Stack<int>* S = new Stack<int>();

	S->push(5);
	S->push(4);
	S->push(3);
	cout << S->peek() << '\n'; // 3

	S->pop();
	S->pop();
	cout << S->peek() << '\n'; // 5

	S->push(10);
	S->push(12);
	cout << S->peek() << '\n'; // 12

	S->pop();
	cout << S->peek() << '\n'; // 10

	return 0;
}