#pragma once

#include <iostream>
#include "node.hpp"

using std::cout;
using std::endl;

class DoublyCircularLinkedList {
private:
	Node* head;
	int length;
public:
	DoublyCircularLinkedList();
	void insertAt(int location, int data);
	void removeAt(int location);
	void traversal();
	bool isEmpty() { return this->length == 0; }
};

DoublyCircularLinkedList::DoublyCircularLinkedList() {
	this->head = nullptr;
	this->length = 0;
}

void DoublyCircularLinkedList::insertAt(int location, int data) {
	if (location == 0 && this->length == 0) { // If empty list
		Node* newNode = new Node(data);
		newNode->prev = newNode;
		newNode->next = newNode;

		this->head = newNode;
		this->length++;
		return;
	}
	if (location < 0 || location > this->length - 1) return; // Invalid location selecting
	
	Node* shouldShift = this->head;

	for (int i = 0; i < location; i++) {
		shouldShift = shouldShift->next;
	}

	Node* newNode = new Node(data);
	newNode->next = shouldShift;
	newNode->prev = shouldShift->prev;

	shouldShift->prev->next = newNode;
	shouldShift->prev = newNode;

	if (location == 0) {
		this->head = newNode;
	}
	
	this->length++;
}

void DoublyCircularLinkedList::removeAt(int location) {
	if (location < 0 || location > this->length - 1) return;

	if (location == 0 && this->length == 1) {
		delete this->head;
		this->head = nullptr;
		this->length--;
		return;
	}

	Node* shouldRemove = this->head;
	for (int i = 0; i < location; i++) {
		shouldRemove = shouldRemove->next;
	}

	Node* prevNode = shouldRemove->prev;
	Node* nextNode = shouldRemove->next;

	prevNode->next = shouldRemove->next;
	nextNode->prev = shouldRemove->prev;

	delete shouldRemove;

	this->length--;
}

void DoublyCircularLinkedList::traversal() {
	if (this->length == 0) return;

	cout << "Start Traversal : ";

	Node* current = this->head;
	for (int i = 0; i < this->length; i++) {
		cout << current->data << " ";
		current = current->next;
	}
	cout << endl;
}