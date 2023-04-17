#ifndef STRTYP
#define STRTYP

/**
*struct dog - structure of a dog.
*@name: name of dog.
*@age: age of dog.
*@owner: owner of dog.
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /*STRTYP*/
