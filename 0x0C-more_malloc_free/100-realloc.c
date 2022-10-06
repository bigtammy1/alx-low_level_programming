#include "main.h"
#include <stdlib.h>

/**
* _realloc - reallocates memory block
* @ptr: previously allocated memory
* @old_size: number of bytes allocated for ptr
* @new_size: number of bytes allocated to new mem
* Return: null if its free, pointer to new mem
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	char *cpy, *filler;
	unsigned int i;

	if (ptr == NULL)
	{
		new_ptr = (malloc(new_size));
		if (new_ptr == NULL)
			return (NULL);
		return (new_ptr);
	}
	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{	free(ptr);
		return (NULL);
	}
	cpy = ptr;
	new_ptr = malloc(sizeof(*cpy) * new_size);
	if (new_ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	filler = new_ptr;
	for (i = 0; i < old_size && i < new_size; i++)
		filler[i] = *cpy++;
	free(ptr);
	return (new_ptr);
}
