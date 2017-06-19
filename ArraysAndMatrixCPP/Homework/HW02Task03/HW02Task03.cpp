#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	const int size = 9;
	int matrix[size][size] = {
		0, 0, 1, 0, 0, 0, 0, 0, 1,
		1, 0, 1, 1, 1, 1, 1, 0, 1,
		0, 1, 1, 1, 0, 1, 0, 0, 1,
		1, 0, 1, 0, 0, 0, 1, 0, 0,
		0, 1, 0, 0, 1, 1, 0, 1, 0,
		1, 1, 0, 0, 1, 0, 1, 1, 0,
		1, 1, 0, 1, 1, 0, 0, 0, 0,
		0, 1, 0, 0, 0, 0, 0, 0, 0,
		0, 1, 0, 0, 0, 0, 0, 1, 0
	};	

	int m, n, rowCounter = 1, colCounter = 1, onesCounter = 0;
	cin >> m >> n;

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			colCounter++;
		}
		rowCounter++;
		cout << endl;
	}

    return 0;
}

