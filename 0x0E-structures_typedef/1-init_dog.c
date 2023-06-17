#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * struct dog - New type describing a dog
 * @d: pointer to struct type dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
    if (d == NULL)
        d = malloc(sizeof(struct dog));
    (*d).name = name;
    (*d).age = age;
    (*d).owner = owner;
}
