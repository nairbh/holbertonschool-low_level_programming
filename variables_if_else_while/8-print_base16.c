#include <stdio.h>
#include <unistd.h>
/*
 * print Base16
 */

int main(void)
{
	int n;

	n = 0;

	while (n < 16)
	{
		if (n < 10)
			putchar (n + 48);

		else
			putchar((n + 97) - 10);
		n++;
	}

	putchar ('\n');
	return (0);
}
