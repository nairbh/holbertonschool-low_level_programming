#include <stdio.h>
#include "main.h"
/**
 * is_prime - detects if an input number is a prime number.
 * @n: input number.
 * @c: iterator.
 * Return: 1 if n is a prime number. 0 if n is not a prime number.
 */
int is_prime_find(int n, int i);
int is_prime_number(int n)
{


	if (n <= 1)
	{
		return (0);
	}

	return (is_prime_find(n, 2));
}

/**
 * is_prime_number - detects if an input number is a prime number.
 * @n: is_prime_find.
 * Return: 1 if n is a prime number. 0 if n is not a prime number.
 */
int is_prime_find(int n, int i)

{
	if (i == n)
	{
		return (1);
	}

	if (n % i == 0)
	{
		return (0);
	}

		return (is_prime_find(n, i + 1));
}
