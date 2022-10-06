#include "main.h"
#include <stdlib.h>

/**
* _calloc - allocates memory for an array
* @nmemb: number of elements in the array
* @size: number of bytes of each element
* Return: null if size is 0, pointer to mem
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;
	char *array;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mem = malloc(size * nmemb);

	if (mem == NULL)
		return (NULL);
	array = mem;
	for (i = 0; i < (size * nmemb); i++)
	{
		array[i] = 0;
	}

	return (mem);
}
