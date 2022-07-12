#include "main.h"
/**
 * _puts - prints to stdout
 * @str: char type string
 * Use _putchar
 */

void _puts(char *str)
{
	int m;

	for (m = 0; str[m] != '\0'; m++)
	{
		_putchar(str[m]);
	}
	_putchar('\n');
}
