#include <stddef.h>

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: String to search.
 * @accept: String containing characters to match.
 *
 * Return: Pointer to the first matching character in s,
 * or NULL if no match is found.
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	if (s == NULL || accept == NULL)
	{
		return (NULL);
	}

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
		}
	}

	return (NULL);
}