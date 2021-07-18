#include <iostream>
#include "matrix_graph.hpp"

using namespace std;

// Below Code expresses this graph : https://s3.us-west-2.amazonaws.com/secure.notion-static.com/ffa1ad28-92ec-4cf8-a099-27d95431d40a/Untitled.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIAT73L2G45O3KS52Y5%2F20210718%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20210718T060548Z&X-Amz-Expires=86400&X-Amz-Signature=dd27fea59b3229927fe537c4321a99f4c94a920808d338fd7812aae204b68c05&X-Amz-SignedHeaders=host&response-content-disposition=filename%20%3D%22Untitled.png%22

int main(void) {
	MatrixGraph<int>* graph = new MatrixGraph<int>();
	graph->addNode(0);
	graph->addNode(1);
	graph->addNode(2);
	graph->addNode(3);
	graph->addNode(4);
	graph->addNode(5);
	graph->addNode(6);

	graph->connectNode(0, 1);
	graph->connectNode(1, 2);
	graph->connectNode(2, 0);
	graph->connectNode(2, 3);
	graph->connectNode(3, 2);
	graph->connectNode(4, 6);
	graph->connectNode(5, 4);
	graph->connectNode(6, 5);

	graph->printMatrix();

	return 0;
}