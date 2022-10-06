#include "main.h"
#include <stdlib.h>

/**
* malloc_checked - allocates memory
* @b: size of bytes to be allocated
* Return: 98 if it fails, pointer to memory
*/

void *malloc_checked(unsigned int b)
{
	void *mem;

	mem = malloc(b);

	if (mem == NULL)
	{
		exit(98);
	}
	return (mem);
}
