#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int n, counter = 0, newN = 0;
	cin >> n;

	while (n < 2 || n > 102)
	{
		cin >> n;
	}
	for (int i = 0; i < n; i++)
	{
		//newN += pow(10, i);
		newN = newN * 10 + 1;
	}
	int squareN = newN * newN;
	cout << squareN << endl;

	while (squareN > 0)
	{
		squareN % 10;
		counter++;
		squareN /= 10;
	}

	cout << counter << endl;

	return 0;
}

