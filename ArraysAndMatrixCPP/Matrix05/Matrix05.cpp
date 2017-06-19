#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int n, m = 4, counter = 0, singleDigit;
	cin >> n;

	while (n < 1000 || n > 999999999)
	{
		cin >> n;
	}

	while (n > 0)
	{
		singleDigit = n % 10;
		if (singleDigit == m)
		{
			counter++;
		}
		n /= 10;
	}

	cout << counter << endl;

    return 0;
}

