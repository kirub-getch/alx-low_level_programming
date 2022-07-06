#include "main.h"
/**
* _islower - Shows 1 if the input is a
* lowercase character. Another cases, shows 0
*
* @c: The character in ASCII code
*
* Return: 1 for lowercase. 0 for the rest.
*/
int _islower(int c);
{
int result;
if (c >= 97 && c <= 122)
{
result = 1;
}
else
{
result = 0;
}
putchar('\n');
return (result);
}
