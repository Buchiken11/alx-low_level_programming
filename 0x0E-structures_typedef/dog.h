#ifndef DOG_H
#define DOG_H

/**
 * struct dog-defines a new type of struct for dog
 * @name: first element name
 * @age: second element dog's age
 * @owner: owner's information
 * Return: Always 0 (SUCCESS)
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

	/**
	 * dog_t-typedef for struct dog new name for struct dog
 	*/

	typedef struct dog dog_t;
	void init_dog(struct dog *d, char *name, float age, char *owner);
	void print_dog(struct dog *d);
	dog_t *new_dog(char *name, float age, char *owner);
	void free_dog(dog_t *d);
	char *_strcpy(char *dest, char *src);
	int _strlen(char *s);

#endif
