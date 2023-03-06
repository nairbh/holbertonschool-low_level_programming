#include <stdio.h>
#include "main.h"


int _sqrt_recursion(int n, int x)


{
	if (n < 0)
		return (- 1);

	if (n == 0 || n == 1)

		return (n);

       x = _sqrt_recursion(n / 4) * 2;

	if ((x + 1) * (x + 1) <= n && n < (x + 2) * (x + 2))

		return (x + 1);

	else 
		return (x);
}
