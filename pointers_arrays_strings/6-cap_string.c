#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: string to capitalize
 *
 * Return: pointer to str
 */
char *cap_string(char *str)
{
	int i = 0;
	int j;
	char separators[] = " \t\n,;.!?\"(){}";

	while (str[i] != '\0')
	{
		if (i == 0 && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= ('a' - 'A');
		}

		for (j = 0; separators[j] != '\0'; j++)
		{
			if (str[i] == separators[j] &&
			    str[i + 1] >= 'a' &&
			    str[i + 1] <= 'z')
			{
				str[i + 1] -= ('a' - 'A');
			}
		}

		i++;
	}

	return (str);
}