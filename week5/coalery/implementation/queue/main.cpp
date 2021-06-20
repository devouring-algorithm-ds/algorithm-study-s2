#include <iostream>
#include "queue.hpp"

using namespace std;

int main(void) {
	Queue<int>* Q = new Queue<int>();

	Q->push(10);
	Q->push(20);
	Q->push(30);
	cout << Q->front() << endl; // 10
	cout << Q->back() << endl; // 30

	Q->pop();
	Q->pop();
	Q->push(15);
	Q->push(25);
	cout << Q->front() << endl; // 30
	cout << Q->back() << endl; // 25

	return 0;
}