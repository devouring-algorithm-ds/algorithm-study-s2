#include <iostream>
using namespace std;
int CalcCost(int call_time, int unit_time, int unit_cost);
int main()
{
	//O(n) n:number of calls
	int call_num = 0; //number of calls
	int Ycost = 0;
	int Mcost = 0;
	int call_time = 0;

	cin >> call_num;
	for (int i = 0; i < call_num; i++)
	{
		cin >> call_time;
		Ycost += CalcCost(call_time, 30,10);
		Mcost += CalcCost(call_time, 60,15);

	}
	if (Ycost < Mcost)
	{
		cout << "Y " << Ycost << endl;
	}
	else if (Ycost == Mcost)
	{
		cout << "Y M " << Ycost << endl;
	}
	else
	{
		cout << "M " << Mcost << endl;
	}

}

int CalcCost(int call_time, int unit_time, int unit_cost)
{
	int result = 0;

	if (call_time == 0)
	{
		result = 0;
	}
	else
	{
		result = unit_cost * (call_time / unit_time) + unit_cost;
	}
	return result;
}