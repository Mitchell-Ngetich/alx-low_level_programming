#include "main.h"

/**
 * _isupper - check for upper case
 * @c: The characer to be checked
 * Return: 0 if the character is lowercase and 1 if it is uppercase
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
