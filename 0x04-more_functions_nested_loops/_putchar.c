#include <unistd.h>
#include "main.h"

/**
 * _putchar -write the character c to stdout
 * @c: The character to print 
 *
 * return: on success 1.
 *         on error, -1 is returned. and errno is set appropriatly.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
