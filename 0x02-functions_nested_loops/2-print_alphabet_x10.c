#include "main.h"

/**
 * print_alphabet_x10 - No entry point
 *
 * Description- Prints the alphabets in lower case 10x
 *
 * Return: On success Nothing.
 */


void print_alphabet_x10(void)
{
	char c, i;

	for (i = 0; i <= 9; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
