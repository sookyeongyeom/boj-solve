#include <iostream>
using namespace std;

int main()
{
	int k;
	cin >> k;
	int* arr = new int[k];

	int n, cnt=0;
	for (int i = 0; i < k; i++)
	{
		cin >> n;
		if (!n)
		{
			arr[cnt - 1] = 0;
			cnt--;
			continue;
		}
		arr[cnt] = n;
		cnt++;
	}

	int sum = 0;
	for (int i = 0; i < cnt; i++)
		sum += arr[i];

	cout << sum;
	return 0;
}