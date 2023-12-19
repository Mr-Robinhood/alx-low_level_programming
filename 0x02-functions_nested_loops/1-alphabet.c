#include "main.h"
/**
 * main - Entry point
 * Description: print alphabet on the _putchar using putchar function to print.
 * alphbet a to z
 */
void print_alphabet(void)
{
        int ch;

        for (ch = 'a'; ch <= 'z'; ch++)
                _putchar(ch);
        _putchar('\n');
}
