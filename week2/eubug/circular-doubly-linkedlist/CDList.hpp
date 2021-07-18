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

    void link(Node<T> *&curr, Node<T> *&next);
    T delink(Node<T> *&curr);

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

    void insertAt(int index, T data);
    T removeAt(int index);

    void print(void);
};

/*********************************************/
/*************** constructor *****************/
/*********************************************/
template <typename T>
CDList<T>::CDList(void) {
  if constexpr (is_same<T, string>::value) {
    dummyHead = dummyTail = new Node(string(""));
  } else {
    dummyHead = dummyTail = new Node(T(NULL));
  }
  dummyHead->next = dummyHead->prev = dummyTail;
  dummyTail->next = dummyTail->prev = dummyHead;

  size = 0;
}

/*********************************************/
/*************** constructor *****************/
/*********************************************/
template <typename T>
CDList<T>::CDList(T data) {
  if constexpr (is_same<T, string>::value) {
    dummyHead = dummyTail = new Node(string(""));
  } else {
    dummyHead = dummyTail = new Node(T(NULL));
  }
  dummyHead->next = dummyHead->prev = dummyTail;
  dummyTail->next = dummyTail->prev = dummyHead;

  Node<T> *newNode = new Node<T>(data);
  link(dummyHead, newNode);
  link(newNode, dummyTail);

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
/******************  link  *******************/
/*********************************************/
template <typename T>
void CDList<T>::link(Node<T> *&curr, Node<T> *&next) {
  curr->next = next;
  next->prev = curr;
}

/*********************************************/
/**************** delink  *******************/
/*********************************************/
template <typename T>
T CDList<T>::delink(Node<T> *&curr) {
  curr->prev->next = curr->next;
  curr->next->prev = curr->prev; 
  return curr->data;
}

/*********************************************/
/****************** pushBack *****************/
/*  Inserts a data at the end of the list   */
/*********************************************/
template <typename T>
void CDList<T>::pushBack(T data) {
  insertAt(size, data);
}

/*********************************************/
/***************** pushFront *****************/
/*  Inserts a data in the beginning          */
/*********************************************/
template <typename T>
void CDList<T>::pushFront(T data) {
  insertAt(0, data);
}

/*********************************************/
/****************** popBack ******************/
/*         removes the last element          */
/*********************************************/
template <typename T>
T CDList<T>::popBack(void) {
  return removeAt(size-1);
}

/*********************************************/
/***************** popFront ******************/
/*         removes the head element          */
/*********************************************/
template <typename T>
T CDList<T>::popFront(void) {
  return removeAt(0);
}

/*********************************************/
/***************** insertAt ******************/
/*    inserts a data at a given idx          */
/*    idx starts at 0                        */
/*********************************************/
template <typename T>
void CDList<T>::insertAt(int idx, T data) {
  idx = (idx < 0) ? 0 : (idx >= size) ? size : idx;

  Node<T> *temp = dummyHead;
  while(idx>0) temp = temp->next, --idx;

  Node<T> *newNode = new Node(data);

  link(newNode, temp->next);
  link(temp, newNode);

  ++size;
}

/*********************************************/
/***************** removeAt ******************/
/*    remoes a data at a given idx          */
/*    idx starts at 0                        */
/*********************************************/
template <typename T>
T CDList<T>::removeAt(int idx) {
  if(size==0) {
    cerr << "List is empty..." << endl;

    if constexpr (is_same<T, string>::value) {
      return "";
    } else {
      return -1;
    }
  }

  idx = (idx < 0) ? 0 : (idx >= size) ? size-1 : idx;
  Node<T> *temp = dummyHead->next;
  while(idx>0) temp = temp->next, --idx;

  T data = delink(temp);
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
