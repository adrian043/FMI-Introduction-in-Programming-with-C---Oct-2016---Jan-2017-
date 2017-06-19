#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	char str[50];
	cin >> str;
	char t = 'T';

	for (int i = 0; i < strlen(str); i++)
	{
		if (t == str[i])
		{
			cout << i + 1 << " ";
		}
	}
	cout << endl;

	return 0;
}