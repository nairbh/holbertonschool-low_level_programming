#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * argstostr - concatenates all the arguments of a program.
 * @ac: argument count.
 * @av: argument vector.
 *
 * Return: pointer of an array of char
 */
char *argstostr(int ac, char **av)
{
	size_t sum = 0;
	char *letter;
	size_t i;
	size_t a;
	char *ptr;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
for (i = 0; i < (size_t)ac; i++)
{
	sum += strlen(av[i]) + 1;
}
	letter = malloc(sum + 1);

	if (letter == NULL)
{
	return (NULL);

}
	ptr = letter;

	for (a = 0; a < (size_t)ac; a++)
{
	strcpy(ptr, av[a]);
	ptr += strlen(av[i]);
	*ptr++ = '\n';
}
*ptr = '\0';
return (letter);
}
