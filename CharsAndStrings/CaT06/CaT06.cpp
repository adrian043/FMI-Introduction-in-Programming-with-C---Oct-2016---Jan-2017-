#include "stdafx.h"
#include <iostream>
using namespace std;

char toLowerCase(char c)
{
	if (c >= 'A' && c <= 'Z')
		return c - 'A' + 'a';
	return c;
}
void sortArray(char *arr)
{
	int length = strlen(arr);
	int end = strlen(arr);
	for (int i = length - 1; i >= '\0'; i--)
	{
		for (int j = '\0'; j < end; j++)
		{
			if (arr[i] < arr[j])
			{
				char swap = arr[i];
				arr[i] = arr[j];
				arr[j] = swap;
			}
		}
		end--;
	}
}
int main()
{
	int n;
	cout << "Enter number of chars: ";
	cin >> n;
	char *text = new char[n];

	for (int i = 0; i < n; i++)
	{
		cin >> text[i];
	}

	for (int i = 0; i < strlen(text); i++)
	{
		text[i] = toLowerCase(text[i]);
	}

	sortArray(text);
	int count = 0;

	cout << "'";
	for (int i = 0; i < strlen(text); i++)
	{
		if (text[i] != text[i + 1] && text[i] >= 'a' && text[i] <= 'z')
		{
			cout << text[i];
			count++;
		}
	}
	cout << "' " << count << " Chars.";
	cout << endl;
	return 0;
}