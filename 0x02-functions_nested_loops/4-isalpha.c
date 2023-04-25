#include "main.h"
/**
 * _isalpha - checks if the output is lowercase, letter, or uppercase
 * @c: The character is ASCII code
 * Return: 1 for letters, and 0 for otherwise
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
