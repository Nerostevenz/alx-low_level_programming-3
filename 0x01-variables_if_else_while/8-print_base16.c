#include <stdio.h>

/**
 * main - prints out all the numbers of base 16 in lowercase
 * Return: 0
 */
int main(void)
{
	int t;

	for (t = 48; t < 58; t++)
	putchar(t);
	for (t = 'a'; t <= 'f'; t++)
	putchar(t);
	putchar('\n');
	return (0);
}
