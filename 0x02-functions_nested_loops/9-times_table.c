#include "main.h"
/**
 * times_table(void) - print 9 times table
 * Return: 0
 */
void times_table(void)
{
	int x, j, z;

	for (x = 0; x <= 9; x++)
	{
		for (j = 0; j <= 9; j++)
		{
			z = j * x;

			if (z < 10)
			{
				if ((x == 0) && (z == 0))
				{
					putchar(z + '0');
					if (j < 9)
						putchar(',');
					putchar(' ');
					putchar(' ');
				}
				if ((x != 0) && (z == 0))
				{
					putchar(z + '0');
					putchar(',');
				}
				if (z > 0)
			{
					putchar(' ');
					putchar(' ');
					putchar(z + '0');
				if (j < 9)
						putchar(',');
				}
			}
			else
			{
				putchar(' ');
				putchar(z / 10 + '0');
				putchar(z % 10 + '0');
				if (j < 9)
				putchar(',');
			}
		}
		putchar('\n');
	}
}
