#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int matrix[6][5] = {
		11, 12, 13, 14, 15,
		21, 22, 23, 24, 25,
		31, 32, 33, 34, 35,
		41, 42, 43, 44, 45,
		51, 52, 53, 54, 55,
		61, 62, 63, 64, 65,
	};

	int index, counter = 0;
	cin >> index;

	for (int row = 0; row < 6; row++)
	{
		for (int col = 0; col < 5; col++)
		{
			if (counter == index)
			{
				cout << matrix[row][col];
			}
			counter++;
		}
	}
	cout << endl;
	return 0;
}