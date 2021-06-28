#pragma once

template <typename T>
class Node {
public:
	T data;
	Node<T>* left;
	Node<T>* right;
	Node(T data);
};

template <typename T>
Node<T>::Node(T data) {
	this->data = data;
	this->left = nullptr;
	this->right = nullptr;
}