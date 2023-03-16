#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: Destination
 * @s2: source
 * @n: maximum number of source characters copied
 *
 * Return: pointer to new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int l1, l2, i, j;
	char *new_string;

	l1 = 0;
	l2 = 0;
	i = 0;
	j = 0;

	if (s1 == NULL || s2 == NULL)
		return (NULL);

	while (s1[l1] != '\0')
		l1++;

	while (s2[l2] != '\0')
	{
		if (l2 >= n)
		{
			break;
		}
		l2++;
	}
	new_string = malloc(l1 + l2 + 1);

	if (new_string == NULL)
		return (NULL);

	while (i < l1)
	{
		new_string[i] = s1[i];
		i++;
	}
	while (j < l2)
	{
		new_string[i] = s2[j];
		i++;
		j++;
	}
	new_string[l1 + l2] = '\0';
	return (new_string);
}
