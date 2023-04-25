#include <stdio.h>
/**
 * main - entry point
 * Descriptiom: prints the alphabets in lower case then in upper case
 * Return: always 0
 */
int main(void)
{
	int x = 97;
	int y = 65;

	while (x <= 122)
	{
		putchar(x);
		x++;
	}
	while (y <= 90)
	{
		putchar(y);
		y++;
	}
	putchar('\n');
	return (0);
}

