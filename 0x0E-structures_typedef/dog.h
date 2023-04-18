#ifndef DOG_H
#define DOG_H
/**
 * struct dog - is a struct type that stores dog infor
 * @name: name of the dog
 * @age: how old is the dog
 * @owner: who owns the dog
 * Description: stuct dog keeps the information of a dog such as name
 * age, and owner
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
