#include "main.h"
/**
* _puts_recursion - prints a string, followed by a new line
* @s: pointer to string
* Return: nothing
**/
void _puts_recursion(char *s)
{
if (*s == '\0')
{
_putchar ('\n');
}
else 
{
putchar (*s);
_puts_recursion (++s);
}
}
