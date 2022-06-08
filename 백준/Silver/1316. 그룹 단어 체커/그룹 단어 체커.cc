#include <iostream>
using namespace std;

// 앞에 나왔던 알파벳 연속이 끊긴 경우 다시 나오면 안됨
int main()
{
	int n;
	cin >> n;
	int cnt = 0;

	for (int i = 0; i < n; i++)
	{
		string word;
		cin >> word;
		int alpha[26] = { 0 };

		int prev = -1, now;
		bool isNotGroup = false;
		for (int i = 0; i < word.length(); i++)
		{
			now = word[i] - 97;
			if (now != prev)		// 직전 알파벳과 다른 경우
			{
				if (alpha[now])		// 전에 나왔으면 그룹단어 아님
				{
					isNotGroup = true;
					break;
				}
				alpha[now] = 1;		// 안나왔으면 로그
				prev = now;
			}
		}

		if (!isNotGroup) cnt++;
	}

	cout << cnt;
	return 0;
}