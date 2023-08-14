#ifndef dog_h
#define dog_h

/**
 * struct dog - dog's info
 *
 * @name: 1st member
 *
 * @age: 2nd member
 *
 * @owner: 3rd member
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
