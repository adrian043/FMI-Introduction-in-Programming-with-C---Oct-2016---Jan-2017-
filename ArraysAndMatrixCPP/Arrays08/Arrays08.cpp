#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	const int n = 10;
	int arr1[n] = { 5, 10, 15, 20, 25, 30, 35, 40, 45, 50 };
	int arr2[n] = { 5, 10, 15, 20, 25, 30, 35, 40, 45, 50 };
	int count = 0;
	
	for (int j = 0, i = 0; j < n, i < n; j++, i++)
	{
		/*cout << "arr2[" << j << "] - > ";
		cin >> arr2[j];*/

		if (arr1[i] == arr2[j])
		{
			count++;
		}
	}
	if (count == n)
	{
		cout << "Equal" << endl;
	}
	else
	{
		cout << "NOT Equal" << endl;
	}			
	
    return 0;
}

