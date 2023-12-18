#include <stdio.h>
/**
 * main - Prints the numbers from 01 to 89, numbers separated by
 * a comma followed by a space, in ascending order.
 * Return: Always 0.
 */
int main(void)
{
	int digit1, digit2;
	digit1 = 0;
	digit2 = 0;

	while(digit2 <= 9)
	{
		if (!(digit1 > digit2) || digit1 == digit2)
		{
		putchar(digit1);
		putchar(digit1);
		
		if (digit1 == '8' && digit2 == '9')
		{
			putchar('\n');
		
		}
		else{
			putchar(',');
			putchar(' ');
		}
		
	}
	digit2++;
	}
	digit2 = '0';
	digit1 = '0';

	return (0);
}
