#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - Main program to perform mathematical operations
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 on success, 98 on error in number of arguments,
 * 99 on error in operator, 100 on division by zero error
 */
int main(int argc, char *argv[])
{
	int num1, num2;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	func = get_op_func(argv[2]);

	if (!func)
	{
		printf("Error\n");
		return (99);
	}
	if ((*argv[2] == '/' || *argv[2] == '%') && num2 == 0)
	{
		printf("Error\n");
		return (100);
	}

	printf("%d\n", func(num1, num2));

	return (0);
}

