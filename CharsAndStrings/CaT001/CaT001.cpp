#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{	
	char c[50];
	cin >> c;
	
	cout << c[0] << " " << c[strlen(c) / 2] << " " << c[strlen(c) - 1];

	cout << endl;

	return 0;
}