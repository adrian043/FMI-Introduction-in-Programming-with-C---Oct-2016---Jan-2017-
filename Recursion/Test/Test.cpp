#include "stdafx.h"
#include <iostream>
using namespace std;

int findMin(int *arr, int size)
{
	if (size == 1)
		return *arr;
	size--;
	return findMin(arr + (*arr > arr[size]), size);
}
int findmin(int *arr, int size)
{
	if (size == 1)
		return *arr;
	size--;

	if (arr[0] > arr[size])
		arr[0] = arr[size];

	return findmin(arr, size);
}
bool isGrowing(int *arr, int size)
{
	if (size == 1)
		return true;	
}
int main()
{
	int arr[9] = { 1, -5, 0, 9, 6, 7, 11, -2, 3 };
	int mono[9] = { 1, 2, 4, 7, 11, 15, 33, 54, 60 };

	cout << isGrowing(mono, 9) << endl;
	
	return 0;
}