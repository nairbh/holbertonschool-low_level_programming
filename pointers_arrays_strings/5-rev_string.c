#include "main.h"

/*
 * rev_string - reverse string
 * _strlen - length of string
 *@s: pointer
 * @s : string
 * Return: _strlen
 */
int _strlen(char *s)
{
	int strlen;

	strlen = 0;
	while (s[strlen] != '\0')
{
	strlen++;
}
	return (strlen);
}
void rev_string(char *s)
{
		int i;
		int l;
		int r;

		l = _strlen(s);
		r = l - 1;
		i = 0;
		while (i < l / 2)
{
		int temp;

		temp = s[i];
		s[i] = s[r];
		s[r] = temp;
		r--;
		i++;
}
}
