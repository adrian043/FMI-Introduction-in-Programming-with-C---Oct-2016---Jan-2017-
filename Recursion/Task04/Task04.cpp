#include "stdafx.h"
#include <iostream>
using namespace std;

char * my_strcat(char *out, const char *in)
{
	char *anchor = out;
	size_t olen;

	if (out == NULL || in == NULL)
		return NULL;

	olen = strlen(out);
	out += olen;
	while
		(*out++ = *in++);

	return anchor;
}

int main()
{
	char arr[50] = "kak si ";
	const char arr2[50] = "dnes?";

	cout << my_strcat(arr, arr2) << endl;

	return 0;
}