#include <stdio.h>
#include "main.h"
#include <string.h>
#include <stdlib.h>
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	 unsigned int j = 0;

	 while (s[i] != '\0')

	 {
		 while (accept[j] != '\0')
		 {
			 if (s[i] == accept[j])
			 {
				 break;
			 }
			 j++;
		 }
		 i++;
	 }
	 return (i);
}
