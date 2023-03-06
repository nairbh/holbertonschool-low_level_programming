#include <stdio.h>
#include "main.h"


int _sqrt_recursion(int n)

{
	if (n < 0)

		return (-1);

	int x = n;
	int y = 1;

	while (x - y > 0)
	{
		x += y / 2;
		y = n / x;
	}

	return (x);
}
