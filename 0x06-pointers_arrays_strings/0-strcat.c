#include "main.h"
#include <string.h>
/**
 * _strcat - concatenate two strings
 * @dest:character to be concatenated
 * @src:character to be concatenated
 * Return: 0
 */
char *_strcat(char *dest, char *src)
{
	strcat(dest,src);
	return (dest);
}
