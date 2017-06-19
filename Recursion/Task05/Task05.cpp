#include "stdafx.h"
#include <iostream>
using namespace std;

int addFrom1ToN(int n)
{
	if (n == 1)
		return 1;
	return n + addFrom1ToN(n - 1);
}

int main()
{
	cout << addFrom1ToN(5) << endl;

    return 0;
}

