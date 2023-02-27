#include <stdio.h>
#include "main.h"

int _strlen(char *s)

{
	char *string;

	int longueur;

	string = "first strlen!";

	longueur = _strlen(string);

	printf("%d\n", string);
}
