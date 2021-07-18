#pragma once

#include <iostream>
using namespace std;

// forward declaration
class Stack;

class Node {
  private:
    int data;
    Node *next;

  public:
    Node(int x) : data(x), next(nullptr) { ; }

    friend class Stack;
};

class Stack {
  private:
    Node *top; // points to the top of the node
    int size;

  public:
    Stack();
    Stack(int data);
    ~Stack();

    void push(int data);
    int pop(void);
    int peek(void);

    bool isEmpty(void) { return !size; }
    void print(void);
};

Stack::Stack() {
  top = nullptr;
  size = 0;
}

Stack::Stack(int data) {
  top = new Node(data);
  size = 1;
}

Stack::~Stack() {
  while(top) {
    Node *temp = top;
    top = top->next;
    delete temp;
  }
  if(top) delete top;
  top = nullptr;
  size = 0;
}

void Stack::push(int data) {
  Node *newNode = new Node(data);
  newNode->next = top;
  top = newNode;
  ++size;
}

int Stack::pop(void) {
  if(!top) {
    cerr << "Stack is empty.." << endl;
    return -1;
  }

  int data = top->data;
  Node *temp = top;
  top = top->next;
  delete temp;
  temp = nullptr;
  --size;
  return data;
}

int Stack::peek(void) {
  if(!top) {
    cerr << "Stack is empty..." << endl;
    return -1;
  }

  return top->data;
}

void Stack::print() {
  Node *temp = top;
  while(temp) {
    cout << temp->data << ' ';
    temp = temp->next;
  }
  cout << endl;
}
