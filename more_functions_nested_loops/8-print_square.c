#include "main.h"
#include "stdio.h"
/**
 *print_square - prints hashes squares.
 *@size: size of the square.
 *Return: no return.
 */
void print_square(int size)
{
	int i;
	int l;

	if (size <= 0)
{
	_putchar('\n');
} else
{
	for (i = 0; i < size; i++)
	{
		for (l = 0; l < size; l++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
}
