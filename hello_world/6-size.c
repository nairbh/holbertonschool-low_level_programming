#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)

{
char az;
int er;
long int ty;
long long int ui;
float op;

printf("Size of a char: %zu byte(s)\n", sizeof(az));

printf("Size of an int: %zu byte(s)\n", sizeof(er));

printf("Size of a long int: %zu byte(s)\n", sizeof(ty));

printf("Size of a long long int: %zu byte(s)\n", sizeof(ui));

printf("Size of a float: %zu byte(s)\n", sizeof(op));

return (0);
}
