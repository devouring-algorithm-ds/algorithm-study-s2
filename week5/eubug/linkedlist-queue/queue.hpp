#pragma once

#include <iostream>
using namespace std;

// forward declaration
class Queue;

class Node {
  private:
    int data;
    Node *next;

  public:
    Node(int x) : data(x), next(nullptr) { ; }

    friend class Queue;
};

class Queue {
  private:
    Node *front; // points to the front of the Queue
    Node *back; // points to the back of the Queue
    int size;

  public:
    Queue();
    Queue(int data);
    ~Queue();

    void enqueue(int data);
    int dequeue(void);
    int getFront(void);
    int getBack(void);

    bool isEmpty(void) { return !size; }
    void print(void);
};

Queue::Queue() {
  front = back = nullptr;
  size = 0;
}

Queue::Queue(int data) {
  front = back = new Node(data);
  size = 1;
}

Queue::~Queue() {
  while(size) dequeue();

  if(front) delete front;
}

void Queue::enqueue(int data) {
  Node *newNode = new Node(data);
  if(size==0) {
    front = back = newNode;
  } else {
    back->next = newNode;
    back = newNode;
  }
  ++size;
}

int Queue::dequeue(void) {
  if(size <= 0) {
    cerr << "Queue is empty.. HERE" << endl;
    return -1;
  }

  int data = front->data;
  Node *temp = front;
  front = front->next;
  delete temp;
  --size;
  return data;
}

int Queue::getFront(void) {
  if(!size) {
    cerr << "Queue is empty..." << endl;
    return -1;
  }

  return front->data;
}

int Queue::getBack(void) {
  if(!size) {
    cerr << "Queue is empty..." << endl;
    return -1;
  }

  return back->data;
}

void Queue::print() {
  Node *temp = front;
  for(int i=0; i<size; ++i) {
    cout << temp->data << ' ';
    temp = temp->next;
  }
  cout << back->data << endl;
}
