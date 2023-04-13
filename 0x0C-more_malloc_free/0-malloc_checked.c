#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - function that allocates memory using malloc.
 * @b: size to malloc
 * Return: pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *lfqas;

	lfqas = malloc(b);

	if (lfqas == NULL)
		exit(98);

	return (lfqas);
}
