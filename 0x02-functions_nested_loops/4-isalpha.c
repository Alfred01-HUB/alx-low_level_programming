#include "main.h"
/**
 * _isalpha - check for uper and lower case
 * Return: 1 if c is lower case otherwise 0
 * @c:'is the char to be checked'
 * Description: 'the program's description'
 */
int _isalpha(int c)
{
	int a;

	for (a = 97; a <= 122; a++)
	{
		if ((c >= a && c <= a) || (c >= a && c <= a))
			return (1);
		else
			return (0);
	}
	return (c);
}
