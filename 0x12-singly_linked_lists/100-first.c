#include "lists.h"
void builder(void) __attribute__((constructor));
/**
 * builder - function that executes before the main function
 */
void builder(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
