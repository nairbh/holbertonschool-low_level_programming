#include <stdio.h>
#include "main.h"
#include <stdlib.h>

void jack_bauer(void)
{


for (int heure = 0; heure < 24; heure++)
	{

			for (int min = 0; min < 60; min++)
			{
				putchar(heure / 10 + '0');
				putchar(heure % 10 + '0');
				putchar(':');

				putchar(min / 10 + '0');
				putchar(min % 10 + '0');

				putchar('\n');
			}

	}
}

