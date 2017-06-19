
#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	const int n = 5;
	int arr1[n] = { 10, 20, 30, 40, 50 };
	int arr2[n];

	for (int i = n - 1; i >= 0; i--)
	{
		arr2[i] = arr1[i];
		cout << arr2[i] << " ";
	}
	cout << endl;

    return 0;
}

