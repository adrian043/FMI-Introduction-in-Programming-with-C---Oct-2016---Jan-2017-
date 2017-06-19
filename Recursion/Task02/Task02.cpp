#include "stdafx.h"
#include <iostream>
using namespace std;

void strCpy(char *text1, char *text2)
{
	for (int i = 0; i < strlen(text1); i++)
	{
		text2[i] = text1[i];
	}		
}

int main()
{
	char arr1[15] = "kopirai tova";
	char arr2[15];
		 
	strCpy(arr1, arr2);	

	for (int i = 0; i < strlen(arr1); i++)
	{
		cout << arr2[i];
	}

	cout << endl;
    return 0;
}

