#include "main.h"

/**
 * _isdigit - if is a digit
 * @c: print int
 * Return: 1 if c is a digit or 0 if otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c < 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
