#include "main.h"
/**
  * _strspn - search a string for a set of bytes
  * @s: source string
  * @accept: accepted string
  *
  * Return: number of bytes in the init segment
  */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int boy = 0, girl, t = 0;

	while (accept[boy])
	{
		girl = 0;

		while (s[girl] != 32)
		{
			if (accept[boy] == s[girl])
			{
				t++;
			}

			girl++;
		}

		boy++;
	}

	return (t);
}

