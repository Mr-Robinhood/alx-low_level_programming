#include <stdio.h>
/**
 *main A Program that prints the size of various types on the computer
  it is compiled and run on.
 *Return: 0 (Success)
 */
int main(void)
{
         char x;
	 int i;
         long int c;
	 long long int d;
 	 float f;
printf("Size of char: %lu byte(s)\n", (unsigned long)sizeof(x));
printf("Size of int: %lu byte(s)\n", (unsigned long)sizeof(i));
printf("Size of long int: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("Size of long long int: %lu byte(s)\n", (unsigned long)sizeof(d));
printf("Size of float: %lu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
