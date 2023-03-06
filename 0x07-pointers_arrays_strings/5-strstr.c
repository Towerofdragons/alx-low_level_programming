#include "main.h"
#include <stddef.h>
/**
 * _strstr - locates a substring
 * @haystack: searched string
 * @needle: substring searched for
 *
 * Return: pointer to start of located substring
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	i = 0;
	j = 0;

	while (haystack[i] != '\0')
	{
		while (needle[j] != '\0')
		{
			if (haystack[i + j] == needle[j])
			{
				j++;

				if (needle[j + 1] == '\0')
				{
					return (&haystack[i]);
				}
			}
			else
			{
				break;
			}
		}
		j = 0;
		i++;
	}
	return (NULL);
}
