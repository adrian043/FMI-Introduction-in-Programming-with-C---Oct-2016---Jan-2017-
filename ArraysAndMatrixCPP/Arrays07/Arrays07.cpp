#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	const int n = 10;
	int arr1[n] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int arr2[n] = { 1, 2, 3, 4, 5, 6, 7, 18, 7, 11 };
	int equalNumsAndInexes = 0;
	int countValues = 0;

	for (int i = 0, j = 0; i < n, j < n; i++, j++)
	{
		if (arr1[i] == arr2[j])
		{
			equalNumsAndInexes++;
		}
	}	

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (arr1[i] == arr2[j])
			{
				countValues++;
			}
		}
	}

	cout << equalNumsAndInexes << endl;
	cout << countValues << endl;

    return 0;
}

