#include <iostream>
#include <string>
#include <cmath>
using namespace std;

// 문자열로 변환 후 char단위로 이어쓰기 = 메모리초과
// 규칙성으로 계산
int main()
{
	int n;
	cin >> n;

	int digit;
	digit = to_string(n).size();

	int cnt = 0;
	for (int i = 1; i < digit; i++)
	{
		cnt += 9 * pow(10, i - 1) * i;
	}

	cnt += (n - pow(10, digit - 1) + 1) * digit;

	cout << cnt;
	return 0;
}