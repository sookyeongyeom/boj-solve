#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;

	bool num[1001] = { false };

	// 1~99
	for (int i = 1; i < 100; i++)
		num[i] = true;

	// 세자릿수 한수
	for (int i = 100; i < 1000; i++)
	{
		if ((i / 100 - (i % 100) / 10) == ((i % 100) / 10 - i % 10))
			num[i] = true;
	}

	int cnt = 0;
	for (int i = 1; i <= n; i++)
		if (num[i])
			cnt++;

	cout << cnt;
	return 0;
}