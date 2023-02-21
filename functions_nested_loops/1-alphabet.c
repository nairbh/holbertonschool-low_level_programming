#include"main.h"
#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

/**
* print_alphabet - prints alphabet
*
* Return: always 0;
*
*/

void print_alphabet(void)

{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);

	}

	putchar('\n');

}
