#include "main.h"

/**
 * print_line - straight
 * @x: No of times
 * Return: 0
 */

void print_line(int x)
{
	int y;

	for (y = 0; y < x; y++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
