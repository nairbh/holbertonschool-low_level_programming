#include "main.h"
#include <stdio.h>

int _abs(int)
{
	int b = -1;

	b = _abs(b);

	return (b);
}
