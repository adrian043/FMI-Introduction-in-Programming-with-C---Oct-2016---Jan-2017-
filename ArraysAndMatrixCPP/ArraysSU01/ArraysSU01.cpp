#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	const int n = 5;
	int arr[n];	

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	
	cout << endl;
	int k, temp, sum = 0;
	cin >> k;	
	int matr[n - 2][n];

	for (int r = 0; r < k; r++)
	{
		for (int i = 0; i < n; i++)
		{
			temp = arr[n - 1];
			arr[n - 1] = arr[i];
			arr[i] = temp;	

			cout << arr[i] << " ";
		}
		cout << endl;
	}

	return 0;
}

