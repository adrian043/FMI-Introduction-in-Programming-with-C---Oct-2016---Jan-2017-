#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;

	while (N < 5 || N > 105)
	{
		cout << "Enter number between 5 and 105: ";
		cin >> N;
	}

	int** matrix = new int*[N];

	for (int i = 0; i < N; ++i)
		matrix[i] = new int[N];

	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < 2; ++j)
		{
			cin >> matrix[i][j];
		}
	}

	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < 2; ++j)
		{			
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}

	for (int i = 0; i < N; ++i)
		delete matrix[i];

	delete matrix;
	cout << endl;
    return 0;
}

