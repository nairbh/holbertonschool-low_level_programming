#include <stdio.h>
#include <stdlib.h>
/**
* main - finds the minimum number of coins needed to make change.
* @argc: number of command line arguments.
* @argv: array that contains the program command line arguments.
* Return: 0 - success. 1 - error.
*/
int main(int argc, char *argv[])
{
	int nombre_pieces;
	int montant;

	if (argc != 2)
	{
	printf("Error\n");
	return (1);
	}

	montant = atoi(argv[1]);

	if (montant < 0)
	{
	printf("0\n");

	return (0);
	}
	nombre_pieces = 0;
	nombre_pieces += montant / 25;
	montant = montant % 25;
	nombre_pieces += montant / 10;
	montant = montant % 10;
	nombre_pieces += montant / 5;
	montant = montant % 5;
	nombre_pieces += montant / 2;
	montant = montant % 2;
	nombre_pieces += montant / 1;
	printf("%d\n", nombre_pieces);
	return (0);
}
