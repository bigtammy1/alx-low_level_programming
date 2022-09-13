#include "main.h"

/**
 * _islower - Short decription, single line
 *@c: contains value to be comapred
 *Return: Always 0.
 */
int _islower(int c)
{
	if (c > 'a' && c < 'z')
	{
	return (1);
	}
	else
	{
	return (0);
	}

}
