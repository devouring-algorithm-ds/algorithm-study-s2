#include <iostream>
#include <stack>
#include <queue>
using namespace std;

class BinaryTree;

class Node {
  private:
    int data;
    Node *left;
    Node *right;

  public:
    Node(int _data) : data(_data), left(nullptr), right(nullptr) {;}

    friend BinaryTree;
};

class BinaryTree {
  private:
    Node *root;
    int size;

    void _preorder(Node *);
    void _inorder(Node *);
    void _postorder(Node *);

  public:
    BinaryTree(void) : root(nullptr), size(0) {;}
    BinaryTree(int);
    ~BinaryTree(void);
    void destructorHelper(Node *);

    void insertNode(int);
    void deleteNode();

    void preorder(void) { _preorder(root); }
    void inorder(void) { _inorder(root); }
    void postorder(void) { _postorder(root); }
};

BinaryTree::BinaryTree(int data) {
  root = new Node(data);
  size = 1;
}

BinaryTree::~BinaryTree(void) {
  destructorHelper(root);
}

void BinaryTree::destructorHelper(Node *node) {
  if(!node) return;
  destructorHelper(node->left);
  destructorHelper(node->right);
  delete node;
}

void BinaryTree::insertNode(int data) {
  if(!root) root = new Node(data);
  else {
    queue<Node *> q;

    q.push(root);

    while(!q.empty()) {
      Node *temp = q.front();
      q.pop();

      if(temp->left) {
        q.push(temp->left);
      } else {
        temp->left = new Node(data);
        ++size;
        return;
      }

      if(temp->right) {
        q.push(temp->right);
      } else {
        temp->right = new Node(data);
        ++size;
        return;
      }
    }
  }
}

void BinaryTree::deleteNode(void) {
  if(!root) {
    cout << "Empty tree...." << endl;
    return;
  }
  
  if(root->left == nullptr && root->right == nullptr) {
    delete root;
    root = nullptr;
    cout << "delete root" << endl;
    return;
  }

  Node *lastLevelLevelOrder = nullptr;
  Node *parentOfLastNode = nullptr;
  queue<Node *> q;
  q.push(root);

  while(!q.empty()) {
    Node *temp = q.front();
    q.pop();

    if(temp->left) {
      q.push(temp->left);

      if(temp->left->left == nullptr && temp->left->right == nullptr) {
        lastLevelLevelOrder = temp->left;
        parentOfLastNode = temp;
      }
    }

    if(temp->right) {
      q.push(temp->right);
      if(temp->right->left == nullptr && temp->right->right == nullptr) {
        lastLevelLevelOrder = temp->right;
        parentOfLastNode = temp;
      }
    }
  }

  if(lastLevelLevelOrder && parentOfLastNode) {
    if(parentOfLastNode->right) {
      delete parentOfLastNode->right;
      parentOfLastNode->right = nullptr;
    } else {
      delete parentOfLastNode->left;
      parentOfLastNode->left = nullptr;
    }
  } else {
    cout << "Empty Tree" << endl;
  }
}

void BinaryTree::_inorder(Node *node) {
  if(node) {
    _inorder(node->left);
    cout << node->data << ' ';
    _inorder(node->right);
  }
}

void BinaryTree::_preorder(Node *node) {
  if(node) {
    cout << node->data << ' ';
    _preorder(node->left);
    _preorder(node->right);
  }
}

void BinaryTree::_postorder(Node *node) {
  if(node) {
    _postorder(node->left);
    _postorder(node->right);
    cout << node->data << ' ';
  }
}
