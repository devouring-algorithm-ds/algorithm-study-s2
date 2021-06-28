#pragma once

#include <iostream>

template <typename T>
class ArrayBinaryTree {
private:
	T* btree;
	int next;
	int size;
	int count;
	int getNext(int current);
	void _preorder(int current);
	void _inorder(int current);
	void _postorder(int current);

public:
	ArrayBinaryTree(int size);
	void add(T value);
	void preorder();
	void inorder();
	void postorder();
};

template <typename T>
int ArrayBinaryTree<T>::getNext(int current) {
	if (current >= size) return -1;
	if (current > next) return current;
	int left = getNext(current * 2);
	int right = getNext(current * 2 + 1);

	if (left == -1) return right;
	if (right == -1) return left;
	if (left < right) return left;
	else return right;
}

template <typename T>
ArrayBinaryTree<T>::ArrayBinaryTree(int size) {
	this->btree = new T[size + 1]; // Array Starts with 1 Index
	this->next = 1;
	this->count = 0;
	this->size = size;
}

template <typename T>
void ArrayBinaryTree<T>::add(T value) {
	btree[next] = value;
	next = getNext(1);
	count++;
}

template <typename T>
void ArrayBinaryTree<T>::_preorder(int current) {
	if (current >= next) return;
	std::cout << current << " ";
	_preorder(2 * current);
	_preorder(2 * current + 1);
}

template <typename T>
void ArrayBinaryTree<T>::preorder() {
	_preorder(1);
	std::cout << std::endl;
}

template <typename T>
void ArrayBinaryTree<T>::_inorder(int current) {
	if (current >= next) return;
	_inorder(2 * current);
	std::cout << current << " ";
	_inorder(2 * current + 1);
}

template <typename T>
void ArrayBinaryTree<T>::inorder() {
	_inorder(1);
	std::cout << std::endl;
}

template <typename T>
void ArrayBinaryTree<T>::_postorder(int current) {
	if (current >= next) return;
	_postorder(2 * current);
	_postorder(2 * current + 1);
	std::cout << current << " ";
}

template <typename T>
void ArrayBinaryTree<T>::postorder() {
	_postorder(1);
	std::cout << std::endl;
}