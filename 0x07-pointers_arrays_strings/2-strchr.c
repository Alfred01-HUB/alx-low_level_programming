#include "main.h"
#include <string.h>
/**
 * _strchr - functions to locate character in a string
 * @s:param
 * @c:param
 * Return 0
 */
char *_strchr(char *s, char c)
{
	char *j = strchr(s, c);
	return (j);
}
