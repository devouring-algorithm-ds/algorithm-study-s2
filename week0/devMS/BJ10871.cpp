#include <iostream>
using namespace std;

int main()
{
	//O(n) n:number of input
	int input_size;
	int threshold;
	int input;

	cin >> input_size;
	cin >> threshold;

	for (int i = 0; i < input_size; i++)
	{
		cin >> input;
		if (input < threshold)
			cout << input << " ";
	}

}