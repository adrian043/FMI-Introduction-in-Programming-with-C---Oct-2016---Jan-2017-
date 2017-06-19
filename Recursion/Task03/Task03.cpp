#include "stdafx.h"
#include <iostream>
using namespace std;

int strCmp(char *text1, char *text2)
{
	if (strlen(text1) < strlen(text2))
	{
		return -1;
	}
	else if (strlen(text1) == strlen(text2))
	{
		return 0;
	}
	else
	{
		return 1;
	}
}

int main()
{
	char arr1[15] = "karam kolelo";
	char arr2[15] = "karam";

	cout << strCmp(arr1, arr2) << endl;

    return 0;
}

