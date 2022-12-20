#include "main.h"
#include <string.h>
/**
 * print_rev - print string in reverse order
 * @s: Strings to be printed in reverse order
 * Return: 0
 */
void print_rev(char *s)
{
	char *c = s;

	int i;

	int j = strlen(s);


	for (i = j - 1; i >= 0; i--)
	{
		_putchar(c[i]);
	}
	_putchar('\n');
}
