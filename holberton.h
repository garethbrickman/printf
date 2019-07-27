ifndef HOL_H
#define HOL_H
#include<stdarg.h>
/*Structs*/
/**
 * struct dog - contains data for dog
 * @name: char *
 * @age: float
 * @owner: char *
 *
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/*Typedefs*/
typedef struct dog dog_t;
/*Prototypes*/
int _putchar(char c);
#endif
