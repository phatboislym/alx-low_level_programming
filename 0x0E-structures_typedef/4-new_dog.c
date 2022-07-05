#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - create a new dog
 * @name: char string name
 * @age: int age
 * @owner: char string owner
 * Return: pointer to new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *oberon;
	int i, j, k;
	char *n, *o;

	oberon = malloc(sizeof(struct dog));
	if (doge == NULL)
		return (NULL);

	for (i = 0; name[i] != '\0'; i++)
		;
	for (j = 0; owner[j] != '\0'; j++)
		;

	n = malloc(sizeof(char) * i + 1);
	if (n == NULL)
	{
		free(oberon);
		return (NULL);
	}
	o = malloc(sizeof(char) * j + 1);
	if (o == NULL)
	{
		free(n);
		free(oberon);
		return (NULL);
	}
	for (k = 0; k <= i; k++)
		n[k] = name[k];
	for (k = 0; k <= j; k++)
		o[k] = owner[k];

	oberon->name = n;
	oberon->age = age;
	oberon->owner = o;

	return (oberon);
}
