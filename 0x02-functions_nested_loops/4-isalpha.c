#include "main.h"
/**
 * _islower - A function check if character is lowercase or uppercase
 * @c: check input of function
 * Return: return 1 if c is lowercase otherwise 0 (Success)
 */
int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	 if (c >= 65 && c <= 90)
		return (1);
	 return (0);
}
