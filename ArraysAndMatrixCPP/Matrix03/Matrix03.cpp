#include "stdafx.h"
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int matrix[6][5] = {
		11,12,13,14,15,
		21,22,23,24,25,
		31,32,33,34,35,
		41,42,43,44,45,
		51,52,53,54,55,
		61,62,63,64,65
	};
		
	for (int col = 0; col < 5; col++)
	{
		int tempArr = matrix[0][col];
		matrix[0][col] = matrix[1][col];
		matrix[1][col] = tempArr;
	}

	for (int col = 0; col < 5; col++)
	{
		matrix[2][col] += matrix[3][col];
		matrix[3][col] - matrix[2][col];
		matrix[2][col] -= matrix[3][col];
	}

	for (int col = 0; col < 5; col++)
	{
		matrix[4][col] *= matrix[5][col];
		matrix[5][col] = matrix[4][col] / matrix[5][col];
		matrix[4][col] /= matrix[5][col];
	}
	
	for (int row = 0; row < 6; row++)
	{
		for (int col = 0; col < 5; col++)
		{
			cout << matrix[row][col] << " ";
		}
		cout << endl;
	}

	return 0;
}
