#include "main.h"

/**
 * print_number - outputs integers
 * @x: parameter
 * Return: 0
 */

void print_number(int x)
{
	unsigned int y = x;

	if (x < 0)
	{
		_putchar(45);
		y = -y;
	}
	if (y / 10)
	{
		print_number(y / 10);
	}
	_putchar(y % 10 + '0');
}
