#pragma once

#include "node.hpp"

template <typename T>
class Queue {
private:
	Node<T>* head;
	int length;
	Node<T>* getLastNode();
public:
	Queue();
	void push(T value);
	T pop();
	T front();
	T back();
};

template <typename T>
Node<T>* Queue<T>::getLastNode() {
	Node<T>* cursor = head;
	while (cursor->next != nullptr)
		cursor = cursor->next;
	return cursor;
}

template <typename T>
Queue<T>::Queue() {
	head = nullptr;
	length = 0;
}

template <typename T>
void Queue<T>::push(T value) {
	Node<T>* newNode = new Node<T>(value);
	if (head == nullptr)
		head = newNode;
	else
		getLastNode()->next = newNode;
	length++;
}

template <typename T>
T Queue<T>::pop() {
	if (length <= 0) return -1;

	T data = head->data;
	Node<T>* next = head->next;
	delete head;

	head = next;
	length--;
	return data;
}

template <typename T>
T Queue<T>::front() {
	if (length <= 0) return -1;
	return head->data;
}

template <typename T>
T Queue<T>::back() {
	if (length <= 0) return -1;
	Node<T>* cursor = getLastNode();
	return cursor->data;
}