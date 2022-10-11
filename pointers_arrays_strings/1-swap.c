#include "main.h"
/**
 * a function that swaps the values of two integers.
 *
 * n@:void swap_int
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
		*a = *b;
		*b = temp;
}
