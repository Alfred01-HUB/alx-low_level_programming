#include "main.h"
#include <string.h>
/**
 * _strlen - print string lenght
 * @s:param
 * Return: 0
 */
int _strlen(char *s)
{
	int c = 0;

	for (; *s != '\0'; s++)
	{
		c++;
	}
		return (c);
}
