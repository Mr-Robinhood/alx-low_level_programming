#include "main.h"
#include <stdio.h>

/**
 * _isdigit - check for a digit 0 through 9 .
 *@c : input for digit .
 * Return: 1 if c is digit and 0 if else .
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
