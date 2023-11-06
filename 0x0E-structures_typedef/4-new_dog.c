#include <stdlib.h>
#include <string.h>

/**
* new_dog - Creates a new dog with copies of name and owner.
* @name: The name of the dog.
* @age: The age of the dog.
* @owner: The owner of the dog.
*
* Return: Pointer to the new dog, or NULL if it fails.
*/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new_dog = malloc(sizeof(dog_t));

if (new_dog == NULL)
return (NULL);

new_dog->name = strdup(name);
new_dog->owner = strdup(owner);

if (new_dog->name == NULL || new_dog->owner == NULL)
{
free(new_dog->name);
free(new_dog->owner);
free(new_dog);
return (NULL);
}

new_dog->age = age;
return (new_dog);
}



