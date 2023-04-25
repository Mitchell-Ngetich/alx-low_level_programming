#include <stdio.h>
/**
 * main - Entry point
 * Description: puts numbers with space
 * Return: always 0
 */
int main(void)
{
	int y;

	for (y = 48; y <= 57; y++)
	{
		putchar(y);
		if (y == 57)
		{
			continue;
		}
		putchar(',');
		putchar(' ');
	}
	putchar(y);
	return (0);
}
