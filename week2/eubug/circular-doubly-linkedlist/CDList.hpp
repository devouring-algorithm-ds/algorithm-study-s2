#pragma once

#include <iostream>
using namespace std;

/* forward declaration */
template <typename T>
class CDList;

/* Node Class Specificiation & Implementation */
template <typename T>
class Node {
  private:
    T data;
    Node *next;
    Node *prev;
    friend class CDList<T>;

  public:
    /* constructor */
    Node(T _data) : data(_data), next(nullptr), prev(nullptr) { ; }
};

/* Circular Doubly Linked List */
template <typename T>
class CDList {
  private: 
    Node<T> *dummyHead;
    Node<T> *dummyTail;
    int size; /* number of nodes */

    Node<T>* link(Node<T> *prev, Node<T> *next);

  public:
    /* constructor */
    CDList(void);
    CDList(T data);

    /* destructor */
    ~CDList(void);

    /* member functions */
    void pushBack(T data);
    void pushFront(T data);
    T popBack(void);
    T popFront(void);

    void insertAt(int idx, T data);
    void removeAt(int indx);

    void print(void);
};

/*********************************************/
/*************** constructor *****************/
/*********************************************/
template <typename T>
CDList<T>::CDList(void) {
  dummyHead = dummyTail = new Node(0);
  dummyHead->next = dummyHead->prev = dummyTail;
  dummyTail->next = dummyTail->prev = dummyHead;

  size = 0;
}

/*********************************************/
/*************** constructor *****************/
/*********************************************/
template <typename T>
CDList<T>::CDList(T data) {
  dummyHead = dummyTail = new Node(0);
  dummyHead->next = dummyHead->prev = dummyTail;
  dummyTail->next = dummyTail->prev = dummyHead;

  Node<T> *newNode = new Node<T>(data);
  dummyHead->next = newNode;
  newNode->next = dummyTail;

  dummyTail->prev = newNode; 
  newNode->prev = dummyHead;

  size = 1;
}

/*********************************************/
/*************** destructor *****************/
/*********************************************/
template <typename T>
CDList<T>::~CDList<T>(void) {
  while(dummyHead->next != dummyTail) {
    Node<T> *temp = dummyHead->next;
    delete dummyHead;
    dummyHead = temp;
  }

  if(dummyHead) delete dummyHead;
  dummyHead = dummyTail = nullptr;
}

/*********************************************/
/****************** pushBack *****************/
/*  Inserts a data at the end of the list   */
/*********************************************/
template <typename T>
void CDList<T>::pushBack(T data) {
  Node<T> *newNode = new Node<T>(data);
  newNode->prev = dummyTail->prev;
  dummyTail->prev->next = newNode;
  newNode->next = dummyTail;
  dummyTail->prev = newNode;

  ++size;
}

template <typename T>
void CDList<T>::pushFront(T data) {
  Node<T> *newNode = new Node<T>(data);
  newNode->next = dummyHead->next;
  dummyHead->next->prev = newNode;
  newNode->prev = dummyHead; 
  dummyHead->next = newNode;

  ++size;
}

template <typename T>
T CDList<T>::popBack(void) {
  if(size==0) {
    cerr << "List is empty..." << endl;
    return -1;
  }

  Node<T> *temp = dummyTail->prev;
  temp->prev->next = temp->next;
  temp->next->prev = temp->prev; 
  int data = temp->data;
  delete temp;
  --size;

  return data;
}

template <typename T>
T CDList<T>::popFront(void) {
  if(size==0) {
    cerr << "List is empty..." << endl;
    return -1;
  }

  Node<T> *temp = dummyHead->next;
  temp->prev->next = temp->next;
  temp->next->prev = temp->prev;
  int data = temp->data;
  delete temp;
  --size;

  return data;
}

/*********************************************/
/******************  print  *****************/
/*********************************************/
template <typename T>
void CDList<T>::print(void) {
  Node<T> *temp = dummyHead;
  cout << "=========================" << endl;
  while(temp->next != dummyTail) {
    temp = temp->next;
    cout << temp->data << ' ';
  }
  cout << endl << "=========================" << endl;
  cout << endl;
}
