#include <stdio.h>
#include "main.h"

/**
* swap_int - Write a function that swaps the values of two integers.
* @a: pointer
* @b: pointer
*/

void swap_int(int *a, int *b)
{
	int time;

	time = *a;

	*a = *b;

	*b = time;
}
