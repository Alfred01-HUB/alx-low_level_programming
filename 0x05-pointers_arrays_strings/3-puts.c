#include "main.h"
/**
 * _puts - print a string followed by a new line
 * @str:the string to be printed
 * Return: 0
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
		_putchar('\n');
}
