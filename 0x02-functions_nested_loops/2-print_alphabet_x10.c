#include "main.h"
/**
 * print_alphabet_x10.c - function that will print the alpabet 10
 */
void 2-print_alphabet_x10.c(void)
{
        int line, ch;

	for (line = 0; line <= 9; line++)
	{
		for (ch = 'a'; ch < 'z'; ch++)
			_putchar(ch);
		_putchar('\n');
	}
}
