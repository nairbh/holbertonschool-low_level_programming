#include <unistd.h>
/**
 *main - Prints the alphabet.
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	write(1, "zyxwvutsrqponmlkjihgfedcba", 26);
	write(1, "\n", 1);
	return (0);
}
