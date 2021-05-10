#include <iostream>
using namespace std;

void count(int* arr);
//O(n) 여기서 n은 나올 수 있는 최대 result_arr의 자릿수(=10)입니다.1000*1000*1000
int main()
{
    int A, B, C;
    cin >> A;
    cin >> B;
    cin >> C;

    int result;
    result = A * B * C;

    int result_arr[10] = { 0, };
    int deno = 1000000000;
    
    for (int i = 0; i < 10; i++)
    {
        result_arr[i] = result / deno;
        result = result - result_arr[i] * deno; //나머지를 result에 넣어줍니다.
        deno /= 10;
    }

    count(result_arr);

    return 0;
}

void count(int* arr)
{
    int num[10] = {0,};//element 0 : number of 0s in the arr. 

    int num0 = 0; // number of 0 before the real value 
    while (arr[num0] == 0)//0이 아닌수가 나올 때까지 불필요한 0의 개수를 세줍니다.
    {
        num0++;
    }

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)//result array를 각 숫자 i당 한번씩 처음부터 끝까지 array를 돌면서 체크합니다.
        {
            if (arr[j] == i)
            {
                num[i] += 1;
            }
        }
        if (i == 0)
            cout << num[i] - num0 << endl;//0의 개수를 세고나서는 불필요한 0의 개수를 제외해줍니다.
        else
            cout << num[i] << endl;
    }
}

//러리님의 아름다운 재귀 풀이
/*
#include <cstdio>

#pragma warning(disable: 4996)

int cnt[10];

void solve(int current) {
    if (current == 0) return;
    cnt[current % 10]++;
    solve(current / 10);
}
int main(void) {
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);
    solve(A * B * C);

    for (int i = 0; i < 10; i++)
        printf("%d\n", cnt[i]);

    return 0;
}
*/
