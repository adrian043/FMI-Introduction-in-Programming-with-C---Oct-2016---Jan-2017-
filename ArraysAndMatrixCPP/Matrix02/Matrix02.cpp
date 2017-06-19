#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int matrix[6][5] = {
		48,72,13,14,15,
		21,22,53,24,75,
		31,57,33,34,35,
		41,95,43,44,45,
		59,52,53,54,55,
		61,69,63,64,65
	};

	int sum = 0;	
	int min = matrix[0][0];
	int max = matrix[0][0];

	for (int row = 0; row < 6; row++)
	{
		for (int col = 0; col < 5; col++)
		{
			if (matrix[row][col] < min)
			{
				min = matrix[row][col];
			}
			if (matrix[row][col] > max)
			{
				max = matrix[row][col];
			}
		}
	}

	cout << min << endl;
	cout << max << endl;

    return 0;
}

