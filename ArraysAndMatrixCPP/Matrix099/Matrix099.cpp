#include "stdafx.h"
#include <iostream>
#include<cmath>
using namespace std;

int main()
{
	int matrix[6][6] = {
		11,12,13,14,15,16,
		21,22,23,24,25,26,
		31,32,33,34,35,36, 
		41,42,43,44,45,46,
		51,52,53,54,55,56,
		61,62,63,64,65,66
	};

	int s = 0, sum, totalSum = 0;

	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 6; j+=2)
		{
			totalSum += matrix[i][j];
		}
	}

	for (int row = 0; row < 6; row+=2)
	{
		sum = 0;
		for (int col = 0; col < 6; col ++)
		{
			s += matrix[col][row];
			cout << s << " ";
			sum += s;	
			s = 0;
		}
		cout << "Sum is: " << sum;	
		cout << endl;
	}
	cout << "Total sum: " << totalSum;
	cout << endl;

	return 0;
}