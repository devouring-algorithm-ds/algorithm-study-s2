#include <iostream>
using namespace std;

//임의의 위치에 원소추가 O(n)
template<typename T>
T* insertAt(T* arr_ptr, T size, T idx, T data)
{
	T* temp_ptr = new T[size + 1];
	for (int i = 0; i < idx; i++)
	{
		temp_ptr[i] = arr_ptr[i];
	}
	temp_ptr[idx] = data;
	for (int j = idx; j < size; j++)
	{
		temp_ptr[j + 1] = arr_ptr[j];
	}
	return temp_ptr;
}
//임의의 위치 원소 제거 O(n)
template<typename T>
T* removeAt(T* arr_ptr, T size, T idx)
{
	T* temp_ptr = new T[size - 1];
	for (int i = 0; i < idx; i++)
	{
		temp_ptr[i] = arr_ptr[i];
	}
	for (int i = idx; i < size - 1; i++)
	{
		temp_ptr[i] = arr_ptr[i + 1];
	}
	return temp_ptr;
}

int main()
{
	int origin_arr[7] = { 0,1,2,3,4,5,6 };
	int* arr_ptr = origin_arr;

	//insertAt test
	arr_ptr = insertAt<int>(origin_arr, 7, 3, 11);
	
	cout << "Before: ";
	for (int i = 0; i < 7; i++)
	{
		cout << origin_arr[i];
	}
	cout << endl;
	cout << "After: ";
	for (int i = 0; i < 8; i++)
	{
		cout << arr_ptr[i];
	}
	cout << endl;

	//removeAt test
	arr_ptr = removeAt<int>(origin_arr, 7, 3);
	cout << "Before: ";
	for (int i = 0; i < 7; i++)
	{
		cout << origin_arr[i];
	}
	cout << endl;
	cout << "After: ";
	for (int i = 0; i < 6; i++)
	{
		cout << arr_ptr[i];
	}
	
}

