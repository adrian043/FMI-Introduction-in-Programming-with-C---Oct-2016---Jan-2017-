#include "stdafx.h"
#include <iostream>
using namespace std;

void switchValues(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main()
{
	int x, y;
	cin >> x >> y;

	switchValues(&x, &y);
	cout << x << " " << y << endl;

    return 0;
}

