#include <stdio.h>
/**
 * main - Prints the numbers from 01 to 89, numbers separated by
 * a comma followed by a space, in ascending order.
 * Return: Always 0.
 */
int main(void)
{
int digit1, digit2;
for(digit1 = '0'; digit1 < '9'; digit1++)
{
for(digit2 = digit1 + 1; digit2 <= '9'; digit2++)
{
if (digit2 != digit1)
{	
putchar(digit1);
putchar(digit2);		
if (digit1 == '8' && digit2 == '9')
continue;
putchar(',');
putchar(' ');
}		
}
}
putchar ('\n');

	return (0);
}
