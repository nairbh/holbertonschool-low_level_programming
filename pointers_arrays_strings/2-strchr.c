#include <string.h>
#include "main.h"


char *_strchr(char *s, char c)

{
	
	while (*s != '\0')

	{
		if (*s == c)
		{
			return (s);
		}

		else if(c == '\0')
		{
			return (c);

		}
	}


	return (NULL);
}
