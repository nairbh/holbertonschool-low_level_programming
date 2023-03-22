#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>
/**
 * get_op_func - get the appropriate function pointer based on operator
 * @s: operator
 *
 * Return: pointer to the appropriate function
 */
int (*get_op_func(char *s))(int, int)
{
	if (*s == '\0' || (*s != '+' && *s != '-' && *s != '*' && *s != '/' && *s != '%'))
	{
		printf("Error\n");
		exit(99);
	}
	return ((*s == '+') ? &op_add :
		(*s == '-') ? &op_sub :
		(*s == '*') ? &op_mul :
		(*s == '/') ? &op_div :
		(*s == '%') ? &op_mod :
		NULL);
}
