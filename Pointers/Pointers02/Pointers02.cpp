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
	//return arr[*size -1]; ��������� �������
	//return *(arr+1); ������ �������
}

int main()
{
	int size = 5, arr[5];

	cout << EnterArray(arr, size) << endl;

    return 0;
}

