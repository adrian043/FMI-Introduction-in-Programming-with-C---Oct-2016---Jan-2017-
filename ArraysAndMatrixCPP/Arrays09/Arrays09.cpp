#include "stdafx.h"
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	const int n = 10;
	int arr[n] = { 184, -17, 21, -21, 98, -43, -43, 47, -121, 143 };

	for (int i = 0; i < n; i++)
	{
		if (abs(arr[i]) == abs(arr[i+1]))
		{
			cout << arr[i] << " " << arr[i + 1] << endl;
		}
	}

    return 0;
}

