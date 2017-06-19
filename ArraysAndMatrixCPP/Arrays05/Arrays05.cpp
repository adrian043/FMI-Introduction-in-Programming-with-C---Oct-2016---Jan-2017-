#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	const int n = 7;
	int arr[n];
	int sum = 0;
	int count = 0;

	for (int i = 0; i < n; i++)
	{
		cout << "arr[" << i << "] - > ";
		cin >> arr[i];
		sum += arr[i];		
	}

	cout << "Sum = " << sum << endl;

	while (sum > 0)
	{
		sum /= 10;
		count++;
	}

	cout << "Numbers count = " << count << endl;

    return 0;
}

