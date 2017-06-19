#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	char let;
	cin >> let;
	int stars = 1;

	for (char i = 'A'; i <= let; i++)
	{
		for (char j = 'A'; j <= 'A'; j++)
		{
			cout << i;
			if (i > 'A')
			{
				cout << string(stars, '*') << i;
				stars += 2;
				break;
			}
		}
		cout << endl;
	}
	int bottomStars = stars - 4;
	int count = 0;
	for (char i = let - 1; i >= 'A'; i--)
	{
		for (char j = let - 1; j >= 'A' + count; j--)
		{
			cout << i;
			count++;
			if (i > 'A')
			{
				cout << string(bottomStars, '*') << i;
				bottomStars -= 2;
				break;
			}
		}
		cout << endl;
	}
	return 0;
}