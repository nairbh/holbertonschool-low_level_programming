#include <stdio.h>

/*
*premain - function that prints a message before the main function is
*/
void premain() __attribute__ ((constructor));
void premain()
{
printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
