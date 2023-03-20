#include <stdio.h>
#include "dog.h"
/**
 * print_dog - function
 * @d: struct dog ptr
 */
void print_dog(struct dog *d)

{
	if (d == NULL)
	{
		return;

	printf("Name: (nil) %s\n", d->name != NULL ? d->name : (nil))
	printf("Age: (nil) %1f\n", d->age != NULL ? d->age : (nil));
	printf("Owner: (nil) %s\n", d->owner != NULL ? d->owner : (nill));
	}
}
