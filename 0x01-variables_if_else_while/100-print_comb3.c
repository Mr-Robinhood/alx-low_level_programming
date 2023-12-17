#include <stdio.h>
/**
 * main - Prints the numbers from 00 to 89, numbers separated by
 * a comma followed by a space, in ascending order.
 * Return: Always 0.
 */
int main(void)
{
	int digit1, digit2;

	for (digit1 = 0; digit1 < 9; digit1++)
	{
		for (digit2 = digit1 + 1; digit2 < 10; digit2++)
		{
			if (!(digit1 == 0 && digit2 == 1))
			{
			putchar(digit1 + '0');
			putchar(digit2 + '0');
			if (digit1 != 8 || digit2 != 9)
			{
			putchar(',');
			putchar(' ');
			}
		}

	}

}

	putchar('\n');

	return (0);
}
