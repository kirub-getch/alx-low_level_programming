#include "main.h"
/**
* _isalpha - Shows 1 if the input is c
* letter Another cases, shows 0
*
* @c: The character in ASCII code
*
* Return: 1 for letters. Returns 0 otherwise
*/
int _isalpha(int c);
{
int result;
if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
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
