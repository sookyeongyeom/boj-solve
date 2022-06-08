#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;

int main()
{
	char str[1000005];
	scanf("%[^\n]s", str);

	int word = 0;
	if (str[0] != ' ') word++;

	for (int i = 1; i < strlen(str); i++)
		if (str[i - 1] == ' ' && str[i] != ' ') word++;

	cout << word;
	return 0;
}