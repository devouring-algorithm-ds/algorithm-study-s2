#include <iostream>
#include "binary_tree.hpp"

using namespace std;

//    1
//  2   3 
// 4 5

int main(void) {
	BinaryTree<int>* btree = new BinaryTree<int>(1);
	btree->set(1, 2, true);
	btree->set(1, 3, false);
	btree->set(2, 4, true);
	btree->set(2, 5, false);

	btree->preorder();
	btree->inorder();
	btree->postorder();
	return 0;
}