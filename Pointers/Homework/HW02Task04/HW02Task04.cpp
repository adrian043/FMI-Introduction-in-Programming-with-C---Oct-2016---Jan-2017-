#include "stdafx.h"
#include <iostream>
#include <ctime>
using namespace std;

void Display(int **arr, int sizeRow, int sizeCol)
{
	for (int i = 0; i < sizeRow; i++)
	{
		for (int j = 0; j < sizeCol; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
}

void Sort(int **arr, int sizeRow, int sizeCol)
{
	for (int i = 0; i < sizeRow; i++)
	{
		for (int j = 0; j < sizeCol; j++)
		{
			for (int row = 0; row < sizeRow; row++)
			{
				for (int col = 0; col < sizeCol; col++)
				{
					if (arr[i][j] < arr[row][col])
					{
						int temp = arr[i][j];
						arr[i][j] = arr[row][col];
						arr[row][col] = temp;
					}
				}
			}
		}
	}
}

int main()
{
	int sizeRow, sizeCol;
	cout << "Enter the size of the matrix: " << endl;
	cin >> sizeRow >> sizeCol;
	cout << endl;
	int **arr = new int*[sizeRow];

	for (size_t i = 0; i < sizeRow; i++)
		arr[i] = new int[sizeCol];

	srand(unsigned(time(0)));

	for (int i = 0; i < sizeRow; i++)
	{
		for (int j = 0; j < sizeCol; j++)
		{
			arr[i][j] = (rand() % 100) + 1;
		}
	}

	Display(arr, sizeRow, sizeCol);
	Sort(arr, sizeRow, sizeCol);
	Display(arr, sizeRow, sizeCol);

	return 0;
}