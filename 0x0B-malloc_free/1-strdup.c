#include "main.h"
#include <stdlib.h>
/**
 * *_strdup - returns a pointer to a newly allocated space with copy of arg
 * @str: string to copy
 * Return: pointer to array or null
 **/
char *_strdup(char *str)
{
	char *strDup;
	int x, y;

	if (str == NULL)
		return (NULL);
	x = 0;
	while (str[x] != '\0')
		x++;
	x++;
	strDup = malloc(sizeof(*str) * x);
	if (strDup == NULL)
		return (NULL);
	y = 0;
	while (str[y] != '\0')
	{
		strDup[y] = str[y];
		y++;
	}
	return (strDup);
}
