#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	const int n = 7;
	int arr[n] = { 1, 2, 3, 4, 3, 2, 1 };
	int count = 0;
	
	for (int j = n - 1,   i = 0; 
			 j > n / 2,   i < n / 2; 
			 j--,		  i++)
	{
		if (arr[i] == arr[j])
		{
			count++;
		}				
	}

	if (count == n / 2)
	{
		cout << "The array is symmetric" << endl;
	}
	else
	{
		cout << "The array is NOT symmetric" << endl;
	}

    return 0;
}

