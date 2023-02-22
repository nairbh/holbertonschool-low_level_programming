#include <stdio.h>
#include "main.h"
#include <stdlib.h>

void jack_bauer(void)
{

int heure;
for (heure = 0; heure < 24; heure++)
	{

	int min;

	for (min = 0; min < 60; min++)

	{
			_putchar(heure / 10 + '0');
			_putchar(heure % 10 + '0');
			_putchar(':');

			_putchar(min / 10 + '0');
			_putchar(min % 10 + '0');

			_putchar('\n');
	}

	}
}

