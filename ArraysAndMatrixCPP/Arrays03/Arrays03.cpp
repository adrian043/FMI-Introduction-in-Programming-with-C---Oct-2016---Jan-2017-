#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	const int n = 7;
	int arr[n];
	double sum = 0;
	double avg = 0;

	for (int i = 0; i < n; i++)
	{
		cout << "arr[" << i << "] - > ";
		cin >> arr[i];
		sum += arr[i];
	}

	avg = sum / n;
	cout << avg << endl;

	return 0;
}

