#pragma once

#include <vector>
#include <iostream>

using namespace std;

template <typename T>
class MatrixGraph {
private:
	vector<T> data;
	vector<vector<bool>> matrix;
	bool isValidIndex(unsigned int idx);
public:
	void addNode(T value);
	void connectNode(int start, int end);
	void printMatrix();
};

template <typename T>
bool MatrixGraph<T>::isValidIndex(unsigned int idx) {
	return 0 <= idx && idx < data.size();
}

template <typename T>
void MatrixGraph<T>::addNode(T value) {
	data.push_back(value);
	vector<bool> newVector = vector<bool>(data.size());
	matrix.push_back(newVector);
	for (unsigned int i = 0; i < data.size() - 1; i++) {
		matrix[i].push_back(false);
	}
}

template <typename T>
void MatrixGraph<T>::connectNode(int start, int end) {
	// Add connection : <start, end>
	if (!(isValidIndex(start) && isValidIndex(end))) return;
	matrix[start][end] = true;
}

template <typename T>
void MatrixGraph<T>::printMatrix() {
	for (unsigned int i = 0; i < data.size(); i++) {
		for (unsigned int j = 0; j < data.size(); j++) {
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
}