#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/**
 * get_number - adds positive numbers.
 * @argc: number of command line arguments.
 * @argv: array that contains the program command line arguments.
 * Return: 0 - success.
 */

int get_number(int argc, char *argv[])


{
	int i, sum = 0;


	for (i = 1; i < argc; i++)

	{
		int j;

		for (j = 0; j < (int)strlen(argv[i]); j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);
	return (0);
}

/**
 * main - adds positive numbers.
 * @argc: number of command line arguments.
 * @argv: array that contains the program command line arguments.
 * Return: 0 - success.
 */
int main(int argc, char *argv[])

{
	if (argc == 1)
	{
		printf("0\n");
	}

	else
	{
		return (get_number(argc, argv));
	}
	return (0);
}
