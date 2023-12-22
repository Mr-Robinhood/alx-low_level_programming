#include "main.h"

/**
 * print_numbers - A function that prints the numbers,
 * from 0 to 9, followed by a new line.
 *
 * Return: Always 0.
 */
void print_numbers(void)
{
	int num = 0;

	do {
		_putchar(num + 48);
		num++;
	} while (num >= 0 && num <= 9);
	_putchar('\n');
}
