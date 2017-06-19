#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

/*void shiftright(int myarray[], int size);

int main(void)
{
	int myarray[] = { 1, 2, 3, 4, 5 };

	shiftright(myarray, 5);

	for (int i = 0; i<5; i++)
	{
		cout << myarray[i] << ' ';
	}

	return(0);

}

void shiftright(int myarray[], int size)
{
	int temp;

	for (int i = 0; i<(size - 1); i++)
	{
		temp = myarray[size - 1];
		myarray[size - 1] = myarray[i];
		myarray[i] = temp;
	}
}*/

int main()
{
	/*int array[4][5], columntotal[4] = { 0 }, rowtotal[5] = { 0 };
	int x, y;
	for (x = 0; x < 4; x++)
		for (y = 0; y < 5; y++)

		{
			cout << "ievadi masiva elementu[" << x << "][" << y << "]\n";
			cin >> array[x][y];
		}

	for (x = 0; x < 4; ++x)
	{
		for (y = 0; y < 5; ++y)
		{
			columntotal[x] = columntotal[x] + array[x][y];
		}
	}
	for (x = 0; x < 4; x++)
	{
		cout << "Summas kolonnas: " << columntotal[x] << endl;
	}


	for (x = 0; x < 4; x++)
	{
		for (y = 0; y < 5; y++)
		{
			rowtotal[y] = rowtotal[y] + array[x][y];
		}
	}
	for (y = 0; y < 5; y++)
	{
		cout << "Summas horizontales: " << rowtotal[y] << endl;
	}

	system("Pause");*/

	/*int* my_dynamic_array;

	int size;
	cout << "Enter the size of the array: ";
	cin >> size;

	my_dynamic_array = new int[size];

	for (int k = 0; k < size; k++)
		cin >> my_dynamic_array[k];

	for (int k = 0; k < size; k++)
	{	
		while (k < size - 1)
		{ 
			cout << my_dynamic_array[k] << ", ";	
			break;
		}

		if (k == size - 1)
		{
			cout << my_dynamic_array[k] << " ";
		}
	}
	cout << endl;*/

	/*int N; // the dimension of the matrix     // Variable size of matrix
	cin >> N;
	int** matrix = new int*[N]; // each element is a pointer to an array.

	for (int i = 0; i < N; ++i)
		matrix[i] = new int[N]; // build rows

	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < N; ++j)
		{
			cin >> matrix[i][j];
		}
	}

	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < N; ++j)
		{
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}

	// DON'T FORGET TO DELETE THE MATRIX!
	for (int i = 0; i < N; ++i)
		delete matrix[i];

	delete matrix;	*/  // Variable size of matrix

	int n = 5;
	int* p = &n;
	cout << &n << endl;
	cout << p << endl;
	cout << *p << endl;

	return 0;
}