#include "main.h"
/**
 * *_memcpy - memory with a constant byte
 * @dest:param
 * @src:param
 * @n:param
 * Return: s
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}
	return (dest);
}
