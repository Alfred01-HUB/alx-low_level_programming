#include <stdio.h>

/**
 * main - Entry Point
 * printf - printing to stdo
 * Return: Always 0 (success)
 */
int main(void)
{
        printf("size of char: %lu byte(s)\n", sizeof(char));
	printf("size of char: %lu byte(s)\n", sizeof(int));
	printf("size of char: %lu byte(s)\n", sizeof(long int));
	printf("size of char: %lu byte(s)\n", sizeof(long long int));
	printf("size of char: %lu byte(s)\n", sizeof(float));
        return (0);
}
