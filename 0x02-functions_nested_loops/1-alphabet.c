#include "main.h"
/**
 * main - A print_alphabet on the _putchar using putchar function to print.
 * alphabet a to z
 */
void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
}
