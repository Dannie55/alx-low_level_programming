## 0x0E-structures_typedef Project ##

### In this project, I learned about using structures and typedef in C. ###

## Header File 📁 ##
dog.h: Header file containing definitions and prototypes for all types and functions written in the project.
Type/File	Defintion/Prototype
struct dog	
char *name
float age
char *owner
typedef dog_t	struct dog
1-init_dog.c	void init_dog(struct dog *d, char *name, float age, char *owner);
2-print_dog.c	void print_dog(struct dog *d);
4-new_dog.c	dog_t *new_dog(char *name, float age, char *owner);
5-free_dog.c	void free_dog(dog_t *d)
