#include <stdio.h>
#include "main.h"
#include <string.h>


int _atoi(char *s)

{
	char dest [10000];

	size_t len = strlen(s);

	strncpy(dest, s, len);
	
	int resultat = atoi(dest);

	printf("%d",resulat);

	return (resulat);
}
