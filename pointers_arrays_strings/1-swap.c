#include "main.h"
/**
 * a function that swaps the values of two integers.
 *
 * n@:pointers
 * n@:pointers
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
		*a = *b;
		*b = temp;
}
