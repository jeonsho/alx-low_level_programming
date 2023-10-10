#include "dog.h"

/**
 *_strdup - returns a pointer to a newly allocated space in memory.
 *@str: string.
 *Return: Null
 */
char *_strdup(char *str)
{
	char *s;
	int i, j;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		;

	s = (char *) malloc(sizeof(char) * (i + 1));

	if (s == NULL)
		return (NULL);
	for (j = 0; j <= i; j++)
		s[j] = str[j];
	return (s);
}
/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: On success 1.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	new_dog = malloc(sizeof(struct dog));

	if (new_dog == 0 || name == 0 || owner == 0)
		return (0);
	new_dog->name = _strdup(name);
	if (new_dog->name == 0)
	{
		free(new_dog);
		return (0);
	}

	new_dog->age = age;
	new_dog->owner = _strdup(owner);
	if (new_dog->owner == 0)
	{
		free(new_dog);
		free(new_dog->name);
		return (0);
	}

	return (new_dog);
}
