#include "main.h"
#include <stdlib.h>

/**
* array_range - creates an array of integers
* @min: the minimum value
* @max: the highest value
* Return: null if failed, pointer to the array
*/

int *array_range(int min, int max)
{
	int *intarray, *mem, i, j;

	if (min > max)
		return (NULL);
	j = max - min + 1;
	mem = malloc(sizeof(int) * j);

	if (mem == NULL)
		return (NULL);
	intarray = mem;
	for (i = 0; i < j; i++)
	{
		intarray[i] = min;
		min++;
	}
	return (mem);
}
