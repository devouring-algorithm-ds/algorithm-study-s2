//O(n) : n is length of string.

#include <iostream>
#include <cctype>
#include <string>

using namespace std;

int main()
{
	int length;
	int target_idx;
	string input;

	cin >> length;
	cin >> target_idx;
	target_idx -= 1;
	cin >> input;
	
	for (int i = 0; i < length; i++)
	{	
		if (i == target_idx) {
			cout << (char)tolower(input[i]);
		}
		else
		{
			cout << input[i];
		}
	
	}
}