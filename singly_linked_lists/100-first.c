#include <stdio.h>
/**
 * premain - A function that is executed before the main function
 * This function is used to print a message to the standard output
 */
void __attribute__ ((constructor)) premain(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
