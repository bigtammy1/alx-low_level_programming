#include "main.h"
#include <stdlib.h>

/**
* str_concat - concatenates two strings
* @s1: first string
* @s2: second string
* Return: pointer to allocated memory with the concatenated string
*/

char *str_concat(char *s1, char *s2)
{
	char *cat, *start1, *start2;
	int i, len = 0, len2 = 0;

	start1 = s1;
	start2 = s2;
	if (s1 == NULL)
		s1 = "";
	while (*s1)
	{
		len++;
		s1++;
	}
	s1 = start1;
	if (s2 == NULL)
		s2 = "";
	while (*s2)
	{
		len2++;
		s2++;
	}
	s2 = start2;
	cat = malloc(sizeof(char) * (len + len2 + 1));
	start1 = cat;
	if (cat == NULL)
		return (NULL);
	for (i = 0; i < (len + len2); i++)
	{
		if (i < len)
		{
			cat[i] = *s1;
			s1++;
		}
		else
		{
			cat[i] = *s2;
			s2++;
		}
	}
	cat[i] = '\0';
	return (start1);
}
