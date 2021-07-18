/*
* 두수의 합:https://www.acmicpc.net/problem/3273
* O(n): sort부분 제외하고 문제해결을 위해 구현한 2 pointer 알고리즘 자체는 원소의 개수만큼만 접근하기때문에
*/
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int length;
	cin >> length;

	int* input = new int[length];
	for (int i = 0; i < length; i++)
	{
		cin >> input[i];
	}

	int goal;
	cin >> goal;

	//Initialize
	int cnt = 0;
	int left = 0;//배열의 처음으로 초기화
	int right = length-1;//배열의 끝으로 초기화

	sort(input, input + length);

	while (left < right && left != right)
	{
		int temp = input[left] + input[right];
		if (temp == goal)
		{
			cnt++;
			left++;
			right--;
		}
		else if (temp < goal)
		{
			left++;
		}
		else
		{
			right--;
		}

	}
	cout << cnt;

	return 0;
}

//또 엄청 깔끔한 러리님 풀이
/*
#include <iostream>
#include <algorithm>

using namespace std;

bool numsExists[1000001];

int main(void) {
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		int tmp;
		cin >> tmp;
		numsExists[tmp] = true;
	}

	int x;
	cin >> x;

	int cnt = 0;
	for (int i = 1; i <= x; i++) {
		if (numsExists[i] && numsExists[x - i]) {
			cnt++;
		}
	}
	cout << cnt / 2 << endl;

	return 0;
}
*/
