#include <iostream>
#include "array_deque.hpp"

using namespace std;

int main(void) {
	ArrayDeque<int>* D = new ArrayDeque<int>();

	D->push_back(30);
	cout << D->front() << '\n'; // 30
	cout << D->back() << '\n'; // 30

	D->push_front(25);
	D->push_back(12);
	cout << D->back() << '\n'; // 12

	D->push_back(62);
	D->pop_front();
	cout << D->front() << '\n'; // 30

	D->pop_front();
	cout << D->back() << '\n'; // 62

	return 0;
}