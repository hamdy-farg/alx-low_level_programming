#include "dog.h"
#include <stddef.h>
#include <stdlib.h>
/**
* new_dog - dsagdsasg
* @name: sfagsd
* @age: adsga
* @owner: sdgdsa
* Return: sadgdas
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *t;
	int i, j, name_len, owner_len;

	if (!name || age < 0 || !owner)
		return (NULL);

	for (owner_len = 0; name[owner_len] != '\0'; owner_len++)
	;

	for (name_len = 0; owner[name_len] != '\0'; name_len++)
	;

	t = (dog_t *)malloc(sizeof(dog_t));

	if (t == NULL)
		return (NULL);

	t->name = malloc(sizeof(char) * (name_len + 1));

	if ((*t).name == NULL)
	{
		free(t->name);
		free(t);
		return (NULL);
	}

	for (i = 0 ; name_len > i; i++)
		t->name[i] = name[i];

	for (j = 0; owner_len > j; j++)
		t->owner[j] = owner[j];

	t->owner[j + 1] = '\0';
	t->name[i + 1] = '\0';
	t->age = age;
	return (t);
}
