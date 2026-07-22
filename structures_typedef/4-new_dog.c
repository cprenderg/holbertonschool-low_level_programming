#include "dog.h"
/**
 * new_dog - creates a new dog of struct dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: pointer to struct, or NULL if fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int i;
	int name_len;
	int owner_len;

	name_len = 0;
	while (name[name_len] != '\0')
		name_len++;
	owner_len = 0;
	while (owner[owner_len] != '\0')
		owner_len++;
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = malloc((name_len + 1) * sizeof(char));
	if (dog->name == NULL)
		return (NULL);
	dog->owner = malloc((owner_len + 1) * sizeof(char));
	if (dog->owner == NULL)
		return (NULL);
	i = 0;
	while (i <= name_len)
	{
		dog->name[i] = name[i];
		i++;
	}
	i = 0;
	while (i <= owner_len)
	{
		dog->owner[i] = owner[i];
		i++;
	}

	dog->age = age;
	return (dog);
}
