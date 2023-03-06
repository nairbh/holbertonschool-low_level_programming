#include <stdio.h>
#include "main.h"

int _strlen_recursion(char *s)

{

	return (*s != '\0') ? 1 + _strlen_recursion(s + 1) : (0);
}
