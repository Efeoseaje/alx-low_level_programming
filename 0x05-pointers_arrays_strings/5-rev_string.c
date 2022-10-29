#include "main.h"
#include <stdio.h>
/**
 * rev_string - This fuction print a string reverser
 *
 *@s: this is the pointer that point to a string
 */

void rev_string(char *s)
{
	int i, j, len = 0;
	char ch;

	for (i = 0; s[i] != '\0'; i++)
	{
		len++;
	}

	for (j = 0; j < len / 2; j++)
	{
		ch = s[j];
		s[j] = s[len - 1 - j];
		s[len - 1 - j] = ch;
	}

}
