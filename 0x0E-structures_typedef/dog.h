#include <stdio.h>
#include <stdlib.h>
/*
 * struct dog - creates a struct for dogs holding their name,
 *		age and owner name
 * @name: dog's name
 * @age: dog's age in float
 * @owner: name of the owner
 *
 * Descriotion: this struct will show the name of the dog,
 *		its age and its owner's name
 */
struct dog
{
	char name[25];
	float age;
	char owner[25];
};
