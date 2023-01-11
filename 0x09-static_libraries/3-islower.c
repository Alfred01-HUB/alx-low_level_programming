#include "main.h"
/**
 * _islower - check for uper and lower case
 * Return: 1 if c is lower case otherwise 0
 * @c:'is the char to be checked'
 * Description: 'the program's description'
 */
int _islower(int c)
{
	int a;

	for (a = 97; a <= 122; a++)
	{
		if ((c >= a) && (c >= a))
			return (1);
		else
			return (0);
	}
	return (c);
}
