#pragma once

#include <vector>
#include <utility>

using namespace std;

template <typename T>
class ListGraph {
private:
	vector<T> data;
	vector<vector<int>> graph;
	bool isValidIndex(int idx);
public:
	void addNode(T value);
	void connectNode(int start, int end);
};

template <typename T>
bool ListGraph<T>::isValidIndex(int idx) {
	return 0 <= idx && idx < data.size();
}

template <typename T>
void ListGraph<T>::addNode(T value) {
	vector<int> newVector;
	graph.push_back(newVector);
	data.push_back(value);
}

template <typename T>
void ListGraph<T>::connectNode(int start, int end) {
	// Add connection : <start, end>
	if (!(isValidIndex(start) && isValidIndex(end))) return;
	graph[start].push_back(end);
}