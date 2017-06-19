#include "stdafx.h"
#include <iostream>
using namespace std;

bool IsSpecial(int sum1, int sum2)
{
	if (sum1 == sum2)
		return true;
	else
		return false;
}

int main()
{
	int n, i, j;
	int *colSum, *rowSum;
	cin >> n;
	int m = n;
	colSum = new int[m];
	rowSum = new int[m];
	colSum[m] = { 0 };
    rowSum[m] = { 0 };
	int **matrix = new int*[n]; 	
 
	for (int i = 0; i < n; ++i)
		matrix[i] = new int[n]; 

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			cin >> matrix[i][j];
		}
	}

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}

	for (i = 0; i < n; ++i)
	{
		for (j = 0; j < n; ++j)
		{
			colSum[i] = colSum[i] + matrix[i][j];
		}
	}
	for (i = 0; i < n; i++)
	{
		cout << "Row sum: " << colSum[i] << endl;
	}

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			rowSum[j] = rowSum[j] + matrix[i][j];
		}
	}
	for (j = 0; j < n; j++)
	{
		cout << "Column sum: " << rowSum[j] << endl;
	}
	
	for (int i = 0; i < n; ++i)
		delete matrix[i];

	delete matrix;	

    return 0;
}

