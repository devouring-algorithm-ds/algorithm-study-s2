#pragma once

#include <iostream>

#include "node.hpp"

template <typename T>
class BinaryTree {
private:
	Node<T>* tree;
	Node<T>* _search(Node<T>* cursor, T data);
	void _preorder(Node<T>* current);
	void _inorder(Node<T>* current);
	void _postorder(Node<T>* current);
public:
	BinaryTree(T initValue);
	void set(T target, T value, bool isLeft);
	void preorder();
	void inorder();
	void postorder();
};

template <typename T>
BinaryTree<T>::BinaryTree(T initValue) {
	this->tree = new Node<T>(initValue);
}

template <typename T>
Node<T>* BinaryTree<T>::_search(Node<T>* cursor, T data) {
	if (cursor == nullptr) return nullptr;
	if (cursor->data == data) return cursor;
	Node<T>* left = _search(cursor->left, data);
	Node<T>* right = _search(cursor->right, data);
	if (left != nullptr) return left;
	if (right != nullptr) return right;
	return nullptr;
}

template <typename T>
void BinaryTree<T>::set(T target, T value, bool isLeft) {
	Node<T>* res = _search(tree, target);
	if (res == nullptr) return;
	if (isLeft) res->left = new Node<T>(value);
	else res->right = new Node<T>(value);
}

template <typename T>
void BinaryTree<T>::_preorder(Node<T>* cursor) {
	if (cursor == nullptr) return;
	std::cout << cursor->data << " ";
	_preorder(cursor->left);
	_preorder(cursor->right);
}

template <typename T>
void BinaryTree<T>::preorder() {
	_preorder(tree);
	std::cout << std::endl;
}

template <typename T>
void BinaryTree<T>::_inorder(Node<T>* cursor) {
	if (cursor == nullptr) return;
	_inorder(cursor->left);
	std::cout << cursor->data << " ";
	_inorder(cursor->right);
}

template <typename T>
void BinaryTree<T>::inorder() {
	_inorder(tree);
	std::cout << std::endl;
}

template <typename T>
void BinaryTree<T>::_postorder(Node<T>* cursor) {
	if (cursor == nullptr) return;
	_postorder(cursor->left);
	_postorder(cursor->right);
	std::cout << cursor->data << " ";
}

template <typename T>
void BinaryTree<T>::postorder() {
	_postorder(tree);
	std::cout << std::endl;
}