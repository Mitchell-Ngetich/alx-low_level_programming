#include "main.h"

/**
 * print_triangle -outputs triangle
 * Description: prints diagonals
 * @shape: shape of triangle
 * Return: void
 */

void print_triangle(int shape)
{
	int r, h, s;

	if (shape <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (r = 1; r <= shape; r++)
		{
			for (s = shape - r; s >= 1; s--)
			{
				_putchar(' ');
			}
			for (h = 1; h <= r; h++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
