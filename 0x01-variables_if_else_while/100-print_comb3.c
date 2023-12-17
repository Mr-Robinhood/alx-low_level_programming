#include <stdio.h>
/**
 * main - Prints the numbers from 01 to 89, numbers separated by
 * a comma followed by a space, in ascending order.
 * Return: Always 0.
 */
int main(void)
{
	int digit1, digit2;
	digit1 = 48;
	while(digit1 < 58)
	{
		digit2 = digit1 + 1;
	while( digit2 <58)
	{	
		
		puchar(digit1);
		puchar(digit1);
		
		if (digit1 < 57 || digit2 < 57)
		{
			putchar(44);
			putchar(32);
		}
		digit2++;
		}
		digit1++;
	}




	putchar('\n');

	return (0);
}
