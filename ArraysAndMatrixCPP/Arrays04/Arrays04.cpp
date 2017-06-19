#include "stdafx.h"
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	const int n = 7;
	int arr[n];
	double sum = 0;
	double avg = 0;

	for (int i = 0; i < n; i++)
	{
		cout << "arr[" << i << "] - > ";
		cin >> arr[i];
		sum += arr[i];

		if (i == n-1)
		{
			avg = sum / n;

			if (arr[i] >= avg)
			{
				cout << "Average: " << avg << " " << "Closest value: " << round(avg) << endl;
			}
			else if (arr[i] <= avg)
			{
				cout << "Average: " << avg << " " << "Closest value: " << floor(avg) << endl;				
			}
		}
	} // Тъпа задача

	return 0;
}


