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
	char c;

	for (c = 'a'; c <= 'z'; c = c * 10)
	{
		_putchar(c);
	}
	_putchar('\n');
}
