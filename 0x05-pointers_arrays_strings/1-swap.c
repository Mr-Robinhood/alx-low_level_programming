#include "main.h"

/**
 * swap_int - Swap the value of two integers
 * using two input parameter.
 * @a: int parameter 1
 * @b: int parameter 2
 *
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
