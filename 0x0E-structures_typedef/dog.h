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
 *
 * Description: longer description
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
