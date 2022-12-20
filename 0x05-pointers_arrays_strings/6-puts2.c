#include "main.h"
/**
 * puts2 - print single character of a string
 * @str: strings of characters to be printed
 * Return: 0
 */
void puts2(char *str)
{
	int i = 0;

	int j;

	while
		(str[i] != '\0')
		{
			i++;
		}
	for (j = 0; j < i; j += 2)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
