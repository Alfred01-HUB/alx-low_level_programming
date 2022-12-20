#include "main.h"
/**
 * swap_int - function to swap integers
 * @a:integer to be swaped
 * @b:integer to be swaped
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}

