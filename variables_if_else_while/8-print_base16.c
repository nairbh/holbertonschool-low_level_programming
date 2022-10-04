#include <stdio.h>
#include <unistd.h>
/*
 * File: 8-print_base16.c
 * main - Prints all the numbers of base 16 in lowercase.
 *
 * Return: Always 0 (Success)
 *
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
