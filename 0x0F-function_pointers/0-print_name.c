#include "function_pointers.h"

/**
 * print_name - takes name and print function to print name
 * @name: name to print
 * @f: pointer to the function to print name
 * Return: void
*/

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
