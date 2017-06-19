#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	const int n = 7;
	int arr[n];
	int sum = 0;

	for (int i = 0; i < n; i++)
	{
		cout << "arr[" << i << "] - > ";
		cin >> arr[i];
		sum += arr[i];
	}
	cout << sum << endl;

    return 0;
}

