#include "stdafx.h"
#include <iostream>
using namespace std;

int EnterArray(int *arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}
	return *arr;
}

void PrintArray(int *arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
}

int main()
{
	int size = 5, arr[5];

	cout << EnterArray(arr, size) << endl;
	PrintArray(arr, size);
	cout << endl;
	
    return 0;
}

