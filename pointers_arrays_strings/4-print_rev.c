#include <stdio.h>
#include "main.h"
/**
* _strlen - length of string;
* @s : pointer
* Return: _strlen
*/
void print_rev(char *s)

{	
	int a = 0;

	while (*(s + a) != '\0')
	a++;
	{
	int b;

	for (b = a -1; b >= 0; b--)

		printf("%c", *(s + b));
	}
	printf("\n");
}
