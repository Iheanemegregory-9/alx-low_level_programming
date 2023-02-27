#include "main.h"

/**
 * _strlen - checks for the lengnth in an string
 *
 * @l : the string to check
 *
 * Return : the length of the string
 */

int _strlen(char *l)
{
	int i;

	i = 0;

	while (l[i] != '\0')
	{
		i++;
	}

	return (i);
}
