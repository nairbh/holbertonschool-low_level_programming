#include <stdio.h>
#include "main.h"
/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: input string.
 * Return: no return.
 */
void print_rev(char *s)

{
	int a = 0;

	while (*(s + a) != '\0')
	a++;
	{
	int b;

	for (b = a - 1; b >= 0; b--)

		printf("%c", *(s + b));
	}
	printf("\n");
}
