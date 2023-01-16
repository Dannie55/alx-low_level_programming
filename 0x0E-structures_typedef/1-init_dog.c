#include "dog.h"

/**
  * init_dog - This initialize a variable of type struct dog.
  * @d: struct dog
  * @name: dog's name
  * @age: dog's age
  * @owner: owner of the dog
  *
  * Return: no return
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
