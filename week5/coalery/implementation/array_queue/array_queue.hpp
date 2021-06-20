#pragma once

template <typename T>
class ArrayQueue {
private:
	T queue[100000];
	int head;
	int tail;
public:
	ArrayQueue();
	void push(T value);
	T pop();
	T front();
	T back();
};

template <typename T>
ArrayQueue<T>::ArrayQueue() {
	head = 0;
	tail = 0;
}

template <typename T>
void ArrayQueue<T>::push(T value) {
	queue[tail++] = value;
}

template <typename T>
T ArrayQueue<T>::pop() {
	return queue[head++];
}

template <typename T>
T ArrayQueue<T>::front() {
	return queue[head];
}

template <typename T>
T ArrayQueue<T>::back() {
	return queue[tail - 1];
}