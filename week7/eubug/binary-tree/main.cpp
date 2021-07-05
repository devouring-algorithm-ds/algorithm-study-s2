#include <iostream>
using namespace std;

#include "binarytree.hpp"

int main(void) {
  BinaryTree tree(10);
  tree.insertNode(20);
  tree.insertNode(30);
  tree.insertNode(40);
  tree.insertNode(55);
  tree.insertNode(70);

  tree.preorder(); cout << endl;
  tree.inorder(); cout << endl;
  tree.postorder(); cout << endl;

  cout << endl;
  tree.deleteNode();
  tree.preorder(); cout << endl;
  tree.deleteNode();
  tree.preorder(); cout << endl;

  tree.deleteNode();
  tree.preorder(); cout << endl;
  tree.deleteNode();
  tree.preorder(); cout << endl;
  tree.deleteNode();
  tree.preorder(); cout << endl;

  tree.deleteNode();
  tree.deleteNode();
  return 0;
}
