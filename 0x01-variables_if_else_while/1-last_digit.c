#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/** main - Enter point
 * Return:0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = n % 10;
	if (m > 5)
		printf("Last digit of %d is %d andis greater than 5", n, m);
	if (m == 0)
		printf("Last digit of %d is %d andis 0", n, m);
	if (m < 6 && m != 0)
		printf("Last digit of %d is %d andis less than 6 and not 0", n, m);
	return (0);
}

