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

{
	dog_t *newDog = malloc(sizeof(dog_t));

	if (newDog == NULL)
	{
		return (NULL);
	}

	char *newName = malloc(strlen(name) + 1);
	char *newOwner = malloc(strlen(newOwner) + 1);


	if (newName == NULL || newOwner == NULL)
	{
		free(newDog);
		free(newName);
		free(newOwner);

		return (NULL);
	}
	
	strcpy(newName, name);
	strcpy(newOwner, owner);


	newName->name = newName;
	newAge->Age = newAge;
	newOwner->Owner = newOwner;


	return (newDog);
}

