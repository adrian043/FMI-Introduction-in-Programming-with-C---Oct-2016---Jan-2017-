#include "stdafx.h"
#include <iostream>
using namespace std;

void EnterArray(int **arr, int size)
{
	for (int i = 0; i < size; ++i)
		arr[i] = new int[size];

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			cin >> arr[i][j];
		}
	}
}
int Add(int **arr, int size)
{
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			sum += arr[i][j];
		}
	}
	return sum;
}
int Subtract(int **arr, int size)
{
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			sum -= arr[i][j];
		}
	}
	return sum;
}
int Multiply(int **arr, int size)
{
	int sum = 1;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			sum *= arr[i][j];
		}
	}
	return sum;
}
int Determinant(int **arr, int size)
{
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			sum = (arr[0][0] * (arr[1][1] * arr[2][2] - arr[2][1] * arr[1][2])) - 
				  (arr[0][1] * (arr[1][0] * arr[2][2] - arr[2][0] * arr[2][2])) +
				  (arr[0][2] * (arr[1][0] * arr[2][1] - arr[2][0] * arr[1][1]));
		}
	}
	return sum;
}
void Transpose(int **arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			cout << arr[j][i] << " ";
		}
		cout << endl;
	}
}

int main()
{
	const int n = 3;
	int *matrix[n][n];

	EnterArray(*matrix, n);
	cout << Add(*matrix, n) << endl;
	cout << Subtract(*matrix, n) << endl;
	cout << Multiply(*matrix, n) << endl;
	cout << Determinant(*matrix, n) << endl;
	Transpose(*matrix, n);

    return 0;
}

