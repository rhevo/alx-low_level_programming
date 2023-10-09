#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - ...
 * @name: ...
 * @age: ...
 * @owner: ...
 *
 * Return: ...
 */
dog_t *new_dog(char *name, float age, char *owner)

{
	unsigned int e, f, g;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	for (e = 0; name[e]; ++e)
		;
	++e;
	dog->name = malloc(e * sizeof(char));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (g = 0; g < e; ++g)
		dog->name[g] = name[g];
	dog->age = age;
	for (f = 0; owner[f]; ++f)
		;
	++f;
	dog->owner = malloc(f * sizeof(char));
	if (dog->owner == NULL)
	{	free(dog->name);
		free(dog);
		return (NULL);
	}
	for (g = 0; g < f; ++g)
		dog->owner[g] = owner[g];
	return (dog);
}
