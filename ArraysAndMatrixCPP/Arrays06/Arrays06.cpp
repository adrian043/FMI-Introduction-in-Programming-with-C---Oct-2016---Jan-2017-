#include "stdafx.h"
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	const int n = 7;
	int arr[n] = { 13, 14, 25, 16, 55, 97, 900 };
	int sum = 0;

	for (int i = 0; i < n; i++)
	{
		/*cout << "arr[" << i << "] - > ";
		cin >> arr[i];*/
		sum += arr[i];		
	}

	for (int i = 2; i < sqrt(sum); i++)
	{
		if (sum % i == 0)
		{
			cout << i << " ";
			break;
		}
		if (sum % i != 0)
		{
			cout << i << " ";
		}
	}
	cout << endl;
	cout << sum << endl;
	
    return 0;
}

