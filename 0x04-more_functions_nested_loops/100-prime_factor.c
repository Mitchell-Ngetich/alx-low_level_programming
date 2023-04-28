#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 * Return 0
 */

int main(void)
{
	insigned long int a, b = 612852475143;

	for (a = 3; a < 782849; a = a + 2)
	{
		while ((b % a == 0) && (b != a))
			b = b / a;
	}
	printf("%lu\n", b);
	return (0);
}
