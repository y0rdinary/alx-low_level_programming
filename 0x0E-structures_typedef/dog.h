#ifndef DOG_H
#define DOG_H
struct dog
/**
 * struct dog - this is a structure of a dog.
 * @name: the name of the dog
 * @age: the name of the dog
 * @owner: the owner of the dog
 *
 * Description: this structure defines some characteristics that a dog has.
*/
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
