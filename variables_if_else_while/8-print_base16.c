#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)

{
	int i;
	int ch;

for (i = 0; i <= 15; i++)
{
if (i < 10)

{
ch = i + '0';
}
else
{
ch = i - 10 + 'a';
}
putchar(ch);
}
putchar('\n');
return (0);
}
