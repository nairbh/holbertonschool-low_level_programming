#include <stdio.h>
#include "dog.h"
#include <string.h>
#include <stdlib.h>
/**
 * new_dog - function
 * @name: char ptr
 * @age: float
 * @owner: char ptr
 * Return: newDog
 */
dog_t *new_dog(char *name, float age, char *owner)

{	char *newName;
	char *newOwner;
	float *newAge;
	dog_t *newDog = malloc(sizeof(dog_t));

	if (newDog == NULL)
	{
		return (NULL);
	}

	newName = malloc(strlen(name) + 1);
	newOwner = malloc(strlen(owner) + 1);
	newAge = malloc(sizeof(float));

	if (newName == NULL || newOwner == NULL || newAge == NULL)
	{
		free(newDog);
		free(newName);
		free(newAge);
		free(newOwner);

		return (NULL);
	}

	strcpy(newName, name);
	strcpy(newOwner, owner);

	*newAge = age;

	newDog->name = newName;
	newDog->age = age;
	newDog->owner = newOwner;


	return (newDog);
}

