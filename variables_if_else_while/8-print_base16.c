#include <stdio.h>
#include <unistd.h>
/*
 *main - Prints numbers between 0 to 9 and letters between a to f.
 *
 *Return: Always 0 (Success)
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
