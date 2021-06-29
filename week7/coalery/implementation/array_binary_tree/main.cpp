#include <iostream>
#include "array_binary_tree.hpp"

using namespace std;

int main(void) {
	ArrayBinaryTree<int>* abtree = new ArrayBinaryTree<int>(10);
	abtree->add(1);
	abtree->add(2);
	abtree->add(3);
	abtree->add(4);
	abtree->add(5);

	abtree->preorder();
	abtree->inorder();
	abtree->postorder();
	return 0;
}