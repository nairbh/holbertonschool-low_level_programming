#include <stdio.h>
#include "main.h"
int is_prime_find(int n, int i);
int is_prime_number(int n)
{


	if (n <= 1)
	{
		return (0);
	}

	return (is_prime_find(n, 2);
}


int is_prime_find(int n, int i)

{
	if (i == n)
	{
		return (1);
	}

	if (n % i == 0)
	{
		return(0);
	}

		return (is_prime_find(n, i + 1);
}
