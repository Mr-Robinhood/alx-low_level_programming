#include "main.h"

/**
*print_line - prints a straight line
*@n:parameter
*Return:returns nothing
*/
void print_line(int n)
{
	int lnc;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (lnc = 1; lnc <= n; lnc++)
			_putchar('_');
		_putchar('\n');
	}
}
