#include <stdio.h>
#include "main.h"



void swap_int(int *a, int *b)
{
	int time;

	time = *a;

	*a = *b;

	*b = time;
}
