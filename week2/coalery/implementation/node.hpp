#pragma once

class Node {
public:
	Node* prev;
	Node* next;
	int data;
	Node(int data);
};

Node::Node(int data) {
	this->prev = nullptr;
	this->next = nullptr;
	this->data = data;
}