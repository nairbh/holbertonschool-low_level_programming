#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>
/**
* op_add - returns the sum of a and b
* @a: first number
* @b: second number
* Return: the sum of a and b
*/
int op_add(int a, int b)
{
	return (a + b);
}
/**
* op_sub - returns the difference of a and b
* @a: first number
* @b: second number
* Return: the difference of a and b
*/
int op_sub(int a, int b)
{
	return (a - b);
}
/**
* op_mul - returns the product of a and b
* @a: first number
* @b: second number
* Return: the product of a and b
*/
int op_mul(int a, int b)
{
	return (a * b);
}
/**
* op_div - returns the result of the division of a by b
* @a: first number (numerator)
* @b: second number (denominator)
* Return: the result of the division of a by b
*/
int op_div(int a, int b)
{
	if (b == 0)
{
	printf("Error\n");
	exit(100);
}
	return (a / b);
}
/**
* op_mod - returns the remainder of the division of a by b
* @a: first number (dividend)
* @b: second number (divisor)
* Return: the remainder of the division of a by b
*/
int op_mod(int a, int b)
{
	if (b == 0)
{
	printf("Error\n");
	exit(100);
}
	return (a % b);
}
