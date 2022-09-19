#include "main.h"

/**
 * swap_int - swaps the value of two integers
 *
 * @a: input integer
 * @b: second input integer
 *
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int exchange;

	exchange = *a;
	*a = *b;
	*b = exchange;
}
