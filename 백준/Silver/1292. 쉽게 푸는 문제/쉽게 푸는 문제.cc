#include <iostream>
using namespace std;

int main()
{
	int a, b, k = 0, sum = 0;
	int arr[1000];

	cin >> a >> b;

	for (int i = 1; k < b; i++)
		for (int j = 0; j < i && k < b; j++)
			arr[k++] = i;

	for (int i = a - 1; i <= b - 1; i++)
		sum += arr[i];

	cout << sum;
	return 0;
}