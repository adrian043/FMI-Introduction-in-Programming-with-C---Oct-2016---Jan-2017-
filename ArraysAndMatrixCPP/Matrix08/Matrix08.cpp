#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	long long int n = 6, counter = 0;
	int sum;	

	do
	{
		sum = 0;
		for (int i = 1; i <= n / 2; i++)
		{
			if (n % i == 0)
			{
				sum += i;
			}
			if (sum == n && i != n)
			{
				counter++;
				cout << n << " ";
			}
		}
		
		n++;
	} while (counter < 11);

    return 0;
}

