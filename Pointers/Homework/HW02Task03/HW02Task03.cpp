#include "stdafx.h"
#include <iostream>
using namespace std;

#define r 4
#define c 4

void SpiralPrint(int m, int n, int a[r][c])
{
	int i, k = 0, l = 0;

	while (k < m && l < n)
	{
		for (i = l; i < n; ++i)
		{
			cout << a[k][i] << " ";
		}
		k++;

		for (i = k; i < m; ++i)
		{
			cout << a[i][n - 1] << " ";
		}
		n--;

		if (k < m)
		{
			for (i = n - 1; i >= l; --i)
			{
				cout << a[m - 1][i] << " ";
			}
			m--;
		}

		if (l < n)
		{
			for (i = m - 1; i >= k; --i)
			{
				cout << a[i][l] << " ";
			}
			l++;
		}
	}
}

int main()
{
	int a[r][c] = { 
		1,  2,  3,  4,
		12, 13, 14, 5,
		11, 16, 15, 6,
		10, 9,  8,  7
	};

	SpiralPrint(r, c, a);

	return 0;
}