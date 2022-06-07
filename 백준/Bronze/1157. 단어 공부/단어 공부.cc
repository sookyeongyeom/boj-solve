#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	int alpha[26] = {0};
	string str;
	cin >> str;

	// 사용된 알파벳 배열 (대문자)
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] <= 90)			// 대문자
			alpha[str[i]-65] += 1;
		else
			alpha[str[i]-97] += 1;
	}

	// 가장 많이 사용된 알파벳 추출
	int maxAlpha, maxNum=0;
	for (int i = 0; i < 26; i++)
	{
		if (alpha[i] > maxNum)
		{
			maxNum = alpha[i];
			maxAlpha = i;
		}
	}

	// 여러 개 존재하는 경우
	int cnt = 0;
	for (int i = 0; i < 26; i++)
	{
		if (alpha[i] == maxNum)
			cnt++;
	}

	if (cnt > 1)
		cout << '?';
	else
		cout << (char)(maxAlpha+65);

	return 0;
}