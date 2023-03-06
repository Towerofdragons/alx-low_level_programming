#include "main.h"

/**
 * _strspn - gets length of prefix substring
 * @s: test substring
 * @accept: chars accepted
 *
 * Return: length of substring
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	int truth;
	unsigned int consistent;

	consistent = 0;
	i = 0;
	j = 0;
	truth = 0;

	while (s[i] != '\0')
	{
		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
			{
				truth++;
			}
			j++;
		}

		if (truth == 0)
		{
			break;
		}

		truth = 0;
		consistent++;
		j = 0;
		i++;
	}
	return (consistent);
}
