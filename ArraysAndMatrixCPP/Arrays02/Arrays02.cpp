#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	const int n = 7;
	int arr[n];
	int max = arr[0];

	for (int i = 0; i < n; i++)
	{
		cout << "arr[" << i << "] - > ";
		cin >> arr[i];
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	cout << max << endl;

    return 0;
}

