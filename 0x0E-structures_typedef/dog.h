#define DOG_H
#ifndef DOG_H
/*
 * struct dog - creates a struct for dogs holding their name,
 *		age and owner name
 * @name: dog's name
 * @age: dog's age in float
 * @owner: name of the owner
 *
 * Description: this struct will show the name of the dog,
 *		its age and its owner's name
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif
