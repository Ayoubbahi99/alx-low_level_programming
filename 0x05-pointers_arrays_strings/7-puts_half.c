#include "main.h"

/**
 * puts_half - prints odd num
 * @str: checked
 * Return: Always 0.
 */

void puts_half(char *str)
{
	int i, j, n;

	n = 0;
	for (i = 0; str[i] != '\0'; i++)
		n++;

	j = n / 2;
	if (n % 2 == 1)
		j = (n + 1) / 2;
	for (i = j; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
