#include "stdafx.h"
#include <iostream>
using namespace std;

int my_pow(int n, int power)
{
	if (power == 1)
		return n;
	return n * pow(n, power - 1);		
}

int main()
{
	cout << my_pow(3, 4) << endl;
    return 0;
}

