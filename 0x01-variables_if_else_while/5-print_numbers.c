#include <stdio.h>
#include <stdlib.h>
/**
 * main- Entry point
 * Description: prints 1-9 digits
 * Return: always 0
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
