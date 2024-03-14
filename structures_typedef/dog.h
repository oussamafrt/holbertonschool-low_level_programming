#ifndef DOG_H
#define DOG_H
/**
 * struct dog - Structure representing a dog
 * @name: Name of the dog (type : char*)
 * @age : Age of the dog (type : float)
 * @owner: Owner of the dog (type char*)
 * Description: This structure defines a dog name, age and owner.
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
