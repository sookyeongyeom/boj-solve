#include <iostream>
using namespace std;

int d(int num)
{
	int sum = num;

	while (num)
	{
		sum += num % 10;
		num /= 10;
	}

	return sum;
}

int main()
{
	int selfNum[10001] = { 0 };		// 하나 이상의 값을 초기화한 경우 나머지 값들도 모두 0으로 초기화됨

	for (int i = 1; i < 10001; i++)
	{
		int n = d(i);
		if (n < 10001)
			selfNum[n] = 1;
	}

	for (int i = 1; i < 10001; i++)
		if (!selfNum[i])
			cout << i << endl;

	return 0;
}