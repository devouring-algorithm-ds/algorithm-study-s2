#pragma once

#include "node.hpp"

template <typename T>
class Stack {
private:
	Node<T>* head;
	int length;
public:
	Stack();
	void push(T data);
	T pop();
	T peek();
};

template <typename T>
Stack<T>::Stack() {
	this->head = nullptr;
	this->length = 0;
}

template <typename T>
void Stack<T>::push(T data) {
	Node<T>* newNode = new Node<T>(data);
	if(this->length > 0) {
		newNode->next = this->head;
	}
	this->head = newNode;
	this->length++;
}

template <typename T>
T Stack<T>::pop() {
	if (this->length == 0) return -1;

	T data = this->head->data;
	Node<T>* next = this->head->next;
	delete this->head;
	this->head = next;
	this->length--;
	return data;
}

template <typename T>
T Stack<T>::peek() {
	if (this->length == 0) return -1;
	return this->head->data;
}