#include "main.h"
#include <stdlib.h>

/**
* string_nconcat - concatenate two strings
* @s1: first string
* @s2: second string
* @n: number of bytes from s2 to use
* Return: null on failure, concatenated pointer
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *mem;
	unsigned int i, k = n;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i]; i++)
		k++;

	mem = malloc(sizeof(char) * (k + 1));
	if (mem == NULL)
		return (NULL);
	k = 0;
	for (i = 0; s1[i]; i++)
		mem[k++] = s1[i];

	for (i = 0; s2[i] && i < n; i++)
		mem[k++] = s2[i];

	mem[k] = '\0';
	return (mem);
}
