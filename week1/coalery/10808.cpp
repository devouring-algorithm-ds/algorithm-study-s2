#include <iostream>
#include <string>

using namespace std;

#pragma warning(disable: 4996)

// 시간복잡도 : O(N)

int main(void) {
	int arr[26] = {0};

	string inp;
	getline(cin, inp);

	for (int i = 0; i < inp.length(); i++) {
		arr[inp[i] - 'a']++;
	}

	for (int i = 0; i < 26; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;

	return 0;
}