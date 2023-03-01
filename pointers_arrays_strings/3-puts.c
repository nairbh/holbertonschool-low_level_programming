#include <stdio.h>
#include "main.h"
/**
* _puts - put string
* @str: string
*/
void _puts(char *str)

{

	int i = 0;

	while (*(str + i) != '\0')

		i++;

	printf("%s\n", str);


}
