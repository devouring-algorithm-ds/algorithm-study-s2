#include <cstdio>

void insertAt(int value, int index, int arr[], int& length) {
	if (index < 0 || index >= length) return;
	for (int i = length - 1; i >= index; i--)
		arr[i + 1] = arr[i];
	arr[index] = value;
	length++;
}

void removeAt(int index, int arr[], int& length) {
	if (index < 0 || index >= length) return;
	for (int i = index; i < length - 1; i++)
		arr[i] = arr[i + 1];
	length--;
}

void printArr(const int arr[], const int length) {
	printf("Array(%d) : ", length);
	for (int i = 0; i < length; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int main(void) {
	int arr[10] = { 1, 2, 3 };
	int length = 3;

	printArr(arr, length);

	insertAt(5, 2, arr, length);
	printArr(arr, length);

	removeAt(1, arr, length);
	printArr(arr, length);
	

	return 0;
}