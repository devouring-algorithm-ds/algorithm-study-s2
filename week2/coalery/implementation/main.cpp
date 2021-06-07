#include <iostream>
#include "doubly_circular_linked_list.hpp";

using namespace std;

int main(void) {
	ios::sync_with_stdio(false);

	DoublyCircularLinkedList* dcl_list = new DoublyCircularLinkedList();
	dcl_list->insertAt(0, 4);
	dcl_list->insertAt(0, 2);
	dcl_list->insertAt(0, 7);
	dcl_list->insertAt(0, 3);
	dcl_list->traversal();

	dcl_list->insertAt(3, 1);
	dcl_list->traversal();

	dcl_list->insertAt(2, 9);
	dcl_list->traversal();

	dcl_list->removeAt(2);
	dcl_list->traversal();

	dcl_list->removeAt(1);
	dcl_list->traversal();
	return 0;
}