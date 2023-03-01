#include <stdio.h>
#include "main.h"
/**
* _strlen - length of string;
* @s : pointer
* Return: _strlen
*/
int _strlen(char *s)

{
	int count = 0;

	while (*(s + count) != '\0')
	count++;
		return (count);
}
