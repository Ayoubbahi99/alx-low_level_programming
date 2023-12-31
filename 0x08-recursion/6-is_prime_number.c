#include "main.h"

/**
 * is_prime_number - check the code
 * @n: checked
 * @i:checked
 * Return: Always 0.
 */
int prime(int n, int i);
int is_prime_number(int n)
{
	return (prime(n, 2));
}

/**
 * prime - check the code
 * @n: checked
 * @i:checked
 * Return: Always 0.
 */
int prime(int n, int i)
{
	if (i >= n && n > 1)
	{
		return (1);
	}
	else if (n % i == 0 || n <= 1)
	{
		return (0);
	}
	else
	{
		return (prime(n, i + 1));
	}
}
