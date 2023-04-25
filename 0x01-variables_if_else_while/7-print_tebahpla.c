#include <stdio.h>
/**
 * main-Entry point
 * Description: puts 0-9 in reverse
 * Return: always 0
 */
int main(void)
{
	int x = 122;

	while (x >= 97)
	{
		putchar(x);
		x--;
	}
	putchar('\n');
	return (0);
}
