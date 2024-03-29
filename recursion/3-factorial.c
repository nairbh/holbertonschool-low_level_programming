#include <string.h>
#include "main.h"
/**
 * factorial - returns the factorial of a given number.
 * @n: input number.
 * Return: factorial of the number.
 */
int factorial(int n)

{
	return ((n < 0) ? -1 : (n == 0 ? 1 : n * factorial(n - 1)));
}
