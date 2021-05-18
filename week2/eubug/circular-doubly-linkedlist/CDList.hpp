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
  dummyHead = dummyTail = new Node(T(NULL));
  dummyHead->next = dummyHead->prev = dummyTail;
  dummyTail->next = dummyTail->prev = dummyHead;

  size = 0;
}

template <>
CDList<string>::CDList(void) {
  string t = "";
  dummyHead = dummyTail = new Node(t);
  dummyHead->next = dummyHead->prev = dummyTail;
  dummyTail->next = dummyTail->prev = dummyHead;

  size = 0;
}

/*********************************************/
/*************** constructor *****************/
/*********************************************/
template <typename T>
CDList<T>::CDList(T data) {
  dummyHead = dummyTail = new Node(T(NULL));
  dummyHead->next = dummyHead->prev = dummyTail;
  dummyTail->next = dummyTail->prev = dummyHead;

  Node<T> *newNode = new Node<T>(data);
  link(dummyHead, newNode);
  link(newNode, dummyTail);

  size = 1;
}

template <>
CDList<string>::CDList(string data) {
  string t = "";
  dummyHead = dummyTail = new Node(t);
  dummyHead->next = dummyHead->prev = dummyTail;
  dummyTail->next = dummyTail->prev = dummyHead;

  Node<string> *newNode = new Node<string>(data);
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
  Node<T> *newNode = new Node<T>(data);
  link(dummyTail->prev, newNode);
  link(newNode, dummyTail);

  ++size;
}

/*********************************************/
/***************** pushFront *****************/
/*  Inserts a data in the beginning          */
/*********************************************/
template <typename T>
void CDList<T>::pushFront(T data) {
  Node<T> *newNode = new Node<T>(data);
  link(newNode, dummyHead->next);
  link(dummyHead, newNode);

  ++size;
}

/*********************************************/
/****************** popBack ******************/
/*         removes the last element          */
/*********************************************/
template <typename T>
T CDList<T>::popBack(void) {
  if(size==0) {
    cerr << "List is empty..." << endl;
    return -1;
  }

  Node<T> *temp = dummyTail->prev;
  T data = delink(temp);
  delete temp;
  --size;

  return data;
}

template <>
string CDList<string>::popBack(void) {
  if(size==0) {
    cerr << "List is empty..." << endl;
    return "";
  }

  Node<string> *temp = dummyTail->prev;
  string data = delink(temp);
  delete temp;
  --size;

  return data;
}

/*********************************************/
/***************** popFront ******************/
/*         removes the head element          */
/*********************************************/
template <typename T>
T CDList<T>::popFront(void) {
  if(size==0) {
    cerr << "List is empty..." << endl;
    return -1;
  }

  Node<T> *temp = dummyHead->next;
  T data = delink(temp);
  delete temp;
  --size;

  return data;
}

template <>
string CDList<string>::popFront(void) {
  if(size==0) {
    cerr << "List is empty..." << endl;
    return "";
  }

  Node<string> *temp = dummyHead->next;
  string data = delink(temp);
  delete temp;
  --size;

  return data;
}

/*********************************************/
/***************** insertAt ******************/
/*    inserts a data at a given idx          */
/*    idx starts at 0                        */
/*********************************************/
template <typename T>
void CDList<T>::insertAt(int idx, T data) {
  if(idx<=0) pushFront(data);
  else if(idx>=size) pushBack(data);
  else {
    Node<T> *temp = dummyHead->next;
    while(--idx) temp = temp->next;

    Node<T> *newNode = new Node(data);
    link(newNode, temp->next);
    link(temp, newNode);

    ++size;
  }
}

/*********************************************/
/***************** removeAt ******************/
/*    remoes a data at a given idx          */
/*    idx starts at 0                        */
/*********************************************/
template <typename T>
T CDList<T>::removeAt(int index) {
  if(index<=0) return popFront();
  if(index>=size) return popBack();

  Node<T> *temp = dummyHead->next;
  while(index--) temp = temp->next;

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
