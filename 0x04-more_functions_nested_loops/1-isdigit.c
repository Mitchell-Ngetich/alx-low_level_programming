#include "main.h"

/**
 * _isdigit - check the code
 * @c:The char to be checked
 * Return: 1 for digit and otherwise 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
