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

void GetMinMax(int arr[], int size)
{
	int min = arr[0];
	int max = arr[0];

	for (int i = 0; i < size; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	cout << min << " " << max;
}

int main()
{
	int size = 5, arr[5];
	EnterArray(arr, size);
	PrintArray(arr, size);
	cout << endl;
	GetMinMax(arr, size);
	cout << endl;

    return 0;
}

