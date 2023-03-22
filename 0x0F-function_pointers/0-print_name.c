#include "function_pointers.h"

/**
 * print_name - runs the passed function printing names
 * @name: name passed
 * @f: function pointer passed
 *
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{	if (name == NULL || f == NULL)
	{
		return;
	}	
	(*f)(name);
}
