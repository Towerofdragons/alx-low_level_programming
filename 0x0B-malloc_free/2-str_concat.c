#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to new string
 */
char *str_concat(char *s1, char *s2)
{
	int i, string_trace, size1, size2, new_size;
	char *cat_string;

	size1 = 0;
	size2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[size1] != '\0')
		size1++;

	while (s2[size2] != '\0')
		size2++;

	new_size = size1 + size2 + 1;
	cat_string = malloc(sizeof(char) * new_size);

	if (cat_string != NULL)
	{
		i = 0;
		string_trace = 0;
		while (string_trace < size1)
		{
			cat_string[i] = s1[string_trace];
			i++;
			string_trace++;
		}
		string_trace = 0;
		while (string_trace < size2)
		{
			cat_string[i] = s2[string_trace];
			i++;
			string_trace++;
		}
		cat_string[new_size - 1] = '\0';
	}
	return (cat_string);
}
