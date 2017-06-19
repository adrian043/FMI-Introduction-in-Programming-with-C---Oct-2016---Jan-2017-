#include "stdafx.h"
#include <iostream>
using namespace std;

void EnterArray(int *arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}
}

void PrintArray(int *arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
}

int GetMin(int *arr, int size)
{
	int min = arr[0];
	int &alias = min;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	return alias;
}

int main()
{
	int size = 5, arr[5];

	EnterArray(arr, size);
	PrintArray(arr, size);
	cout << endl;
	cout << GetMin(arr, size);
	cout << endl;

    return 0;
}

