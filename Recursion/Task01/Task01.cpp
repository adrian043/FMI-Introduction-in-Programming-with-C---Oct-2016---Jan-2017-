#include "stdafx.h"
#include <iostream>
using namespace std;

int strLength(char *arr)
{
	int counter = 0;

	while (arr[counter] != '\0')
	{
		counter++;
	}
	return counter;
}

int main()
{
	char c[10] = "abcabcabc";
	cout << strLength(c) << endl;
    return 0;
}

