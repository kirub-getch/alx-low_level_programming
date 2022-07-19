#include "main.h"
#include <stddef.h>
/**
 * _strchr - locates a character in a string
 * @s: the string
 * @c: the character
 *
 * Return: a pointer to a character aka the character found
 */
char *_strchr(char *s, char c)
{
int i = 0, j;
while (s[i])
{
i++;
}
for (j = 0; j <= i; j++)
{
if (c == s[j])
{
s += j;
return (s);
}
}
return ('\0');
}
