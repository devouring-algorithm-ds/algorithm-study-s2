#pragma once

template <typename T>
class ArrayStack {
private:
	T stack[100000];
	int pos;
public:
	ArrayStack();
	void push(T value);
	T pop();
	T peek();
};

template <typename T>
ArrayStack<T>::ArrayStack() {
	pos = 0;
}

template <typename T>
void ArrayStack<T>::push(T value) {
	this->stack[this->pos++] = value;
}

template <typename T>
T ArrayStack<T>::pop() {
	return stack[pos--];
}

template <typename T>
T ArrayStack<T>::peek() {
	return stack[pos - 1];
}