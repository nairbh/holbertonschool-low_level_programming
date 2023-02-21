#include "main.h"
#include<stdio.h>



void print_alphabet_x10(void)
{
	char ch;
	char chs;

	for (ch = '0'; ch <= '9'; ch++)
	{
		for (chs = 'a'; chs <= 'z'; chs++)
		{
			_putchar(chs);
		}

		_putchar('\n');
	}
}
