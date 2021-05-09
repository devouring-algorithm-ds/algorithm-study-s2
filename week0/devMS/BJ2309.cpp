//O(n^2): selection sort가 O(n^2)입니다. n은 input array size.

#include <iostream>
#include <vector>
using namespace std;
int getSum(int* height, int a, int b);
void Sort(int* numbers);
void print(int* height, int a, int b);

int main()
{
	int height[9] = { 0, };
	for (int i = 0; i < 9; i++)
	{
		cin >> height[i];
	}

    Sort(height);

    //pick 2 elements to delete them.
    for (int a = 0; a < 9; a++)
    {
        for (int b = a+1; b < 9; b++)
        {
            
            if (getSum(height, a, b) == 100)
            {
                //cout << a << " " << b << " " << getSum(height, a, b) << endl;
                print(height, a, b);
                return 0;
            }
                
        }
    }

}

int getSum(int* height, int a, int b)
{
    int result = 0;
    for (int i = 0; i < 9; i++)
    {
        if (i != a && i != b)
            result += height[i];
    }
    return result;
}

void print(int* height, int a, int b)
{
    
    for (int i = 0; i < 9; i++)
    {
        if (i != a && i != b)
        {
            cout << height[i] << endl;
        }
    }
}
 
void Sort(int* numbers)//Selection Sort
{
    int minValue = numbers[0];
    int minNum = 0;
    int temp = 0;

    for (int i = 0; i < 9; i++)
    {
        int j = i;
        for (; j < 9; j++)
        {
            if (numbers[j] < minValue)
            {
                minNum = j;
                minValue = numbers[j];
            }
        }
        temp = numbers[i];
        numbers[i] = minValue;
        numbers[minNum] = temp;

        minValue = numbers[i + 1];
        minNum = i + 1;
    }
}
