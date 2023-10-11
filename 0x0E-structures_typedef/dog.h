#ifndef DOG_H
#define DOG_H
/**
 * struct dog - structure for dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
