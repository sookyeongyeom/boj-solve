#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	double* arr = new double[n];

	int score, max = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> score;
		max = score > max ? score : max;
		arr[i] = score;
	}

	double sum = 0;
	for (int i = 0; i < n; i++)
	{
		arr[i] = arr[i] / max * 100;
		sum += arr[i];
	}

	cout << sum / n;
	return 0;
}