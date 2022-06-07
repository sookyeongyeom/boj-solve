#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;

	// 사이클 계산
	int org=n, cnt=0;
	while (true)
	{
		n = (n % 10) * 10 + (n / 10 + n % 10) % 10;
		cnt++;
		if (n == org)
			break;
	}

	cout << cnt;
	return 0;
}