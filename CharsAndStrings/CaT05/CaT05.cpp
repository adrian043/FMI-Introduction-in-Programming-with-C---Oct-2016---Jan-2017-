#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	char let;
	cin >> let;

	for (char i = 'A'; i <= let; i++)
	{
		for (char j = i; j >= 'A'; j--)
		{
			cout << j;
		}
		cout << endl;
	}
		
	return 0;
}