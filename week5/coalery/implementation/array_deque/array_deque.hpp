#pragma once

template <typename T>
class ArrayDeque {
private:
	T deque[200001];
	int head;
	int tail;
public:
	ArrayDeque();
	void push_front(T value);
	void push_back(T value);
	T pop_front();
	T pop_back();
	T front();
	T back();
};

template <typename T>
ArrayDeque<T>::ArrayDeque() {
	head = 100000;
	tail = 100000;
}

template <typename T>
void ArrayDeque<T>::push_front(T value) {
	deque[--head] = value;
}

template <typename T>
void ArrayDeque<T>::push_back(T value) {
	deque[tail++] = value;
}

template <typename T>
T ArrayDeque<T>::pop_front() {
	return deque[head++];
}

template <typename T>
T ArrayDeque<T>::pop_back() {
	return deque[--tail];
}

template <typename T>
T ArrayDeque<T>::front() {
	return deque[head];
}

template <typename T>
T ArrayDeque<T>::back() {
	return deque[tail - 1];
}