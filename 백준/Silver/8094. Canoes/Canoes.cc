#include <iostream>
#include<algorithm>
using namespace std;

int main()
{
	int max, popu, arr[30000], i=0, j;
	scanf("%d %d", &max, &popu);

	for (int i = 0; i < popu; i++) scanf("%d", &arr[i]);
	sort(arr, arr + popu);	// 오름차순

	for (j = popu-1; i < j; j--)
	{
		if (arr[i] + arr[j] <= max) i++;
	}

	printf("%d", popu-i);

	return 0;
}