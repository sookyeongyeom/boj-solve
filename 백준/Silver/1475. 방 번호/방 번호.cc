#include <iostream>
using namespace std;

// 6과 9만 교차 가능
int main()
{
	string n;
	cin >> n;
	int numCnt[10] = { 0 };

	for (int i = 0; i < n.length(); i++)
	{
		numCnt[n[i] - 48]++;
	}

	int max = 0;
	for (int i = 0; i < 10; i++)
	{
		if (i == 6 || i == 9) continue;
		max = numCnt[i] > max ? numCnt[i] : max;
	}

	int nineSixCnt = numCnt[6] + numCnt[9];

	max = nineSixCnt / 2 + nineSixCnt % 2 > max ? nineSixCnt / 2 + nineSixCnt % 2 : max;
	cout << max;
	return 0;
}