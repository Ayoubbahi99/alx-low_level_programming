#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num = 0;

	while (num < 10)
	{
		printf("%d", num);
		num += 1;
	}
	printf("\n");

	return (0);
}
