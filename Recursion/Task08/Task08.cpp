#include "stdafx.h"
#include <iostream>
using namespace std;

int fibonacci(int n)
{
	if (n == 1 || n == 2)
		return 1;
	return fibonacci(n - 2) + fibonacci(n - 1);
}

int main()
{
	cout << fibonacci(8) << endl;

    return 0;
}
