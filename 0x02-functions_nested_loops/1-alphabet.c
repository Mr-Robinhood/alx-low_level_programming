#include "main.h"
/**
 * main - Entry point
 * Description: print alphabet on the _putchar using putchar function to print.
 * Return: 0 (Success)
 */
void print_alphabet(void)
{
        int ch;

        for (ch = 'a'; ch <= 'z'; ch++)
                _putchar(ch);
        _putchar('\n');

        return (0);
}
