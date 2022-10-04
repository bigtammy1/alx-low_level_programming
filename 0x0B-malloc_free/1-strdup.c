#include "main.h"
#include <stdlib.h>

/**
* _strdup - allocates memory to a copy of strings
* @str: strings to cpy and keep in allocated memory
* Return: pointer to copied string or null if failed
*/

char *_strdup(char *str)
{
	char *A, *start;
	int i, len = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	start = str;
	while (*str)
	{
		len++;
		str++;
	}
	str = start;

	A = malloc(sizeof(char) * (len + 1));
	start = A;

	if (A != NULL)
	{
		for (i = 0; i < len; i++)
		{
			A[i] = *str;
			str++;
		}
		A[i] = '\0';
		return (start);
	}
	else
		return (NULL);

}
