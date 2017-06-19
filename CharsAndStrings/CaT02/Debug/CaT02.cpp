#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string word;	
	char let;
	bool isContain = false;
	cin >> word >> let;
	char length = word.length();

	for (int k = 0; k < length; k++)
	{
		if (let == word[k])
		{
			isContain = true;
			cout << "The following letter is on position: " << k + 1 << "! What left is: " << word.substr(k, length) << endl;			
		}
	}
	if (!isContain)
	{
		cout << "The following letter was not found!" << endl;
	}
	
    return 0;
}