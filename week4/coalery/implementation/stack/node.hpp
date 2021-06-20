#pragma once

template <typename T>
class Node {
public:
	Node* next;
	T data;
	Node(T data);
};

template <typename T>
Node<T>::Node(T data) {
	this->next = nullptr;
	this->data = data;
}