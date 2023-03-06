#include <stdio.h>
#include "main.h"


int _sqrt_recursion(int n)

{
	int x, y;

	if (n < 0)

		return (-1);

	x = n;
	y = 1;

	while (x - y > 0)
	{
		x += y / 2;
		y = n / x;
	}

	return (x);
}
