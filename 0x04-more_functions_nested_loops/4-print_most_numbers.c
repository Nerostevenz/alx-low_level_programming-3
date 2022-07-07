#include "main.h"

/**
 * print_most_numbers - print 0-9 with the exclusion of 2 and 4
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 9; i++)
	{
		if (i == 2 || i == 4)
			continue;
		else
			_putchar(i);
	}
	_putchar('\n');
}