#include <stdio.h>
/**
* main - Print numbers from 00 to 99
*
* Return: Always 0 (Success)
*/
int main(void)
{
int i, j;
for (i = 0; i <= 99; i++)
{
for (j = i ; j <= 99; j++)
{
if (i != j)
{
putchar(i / 10 + 48);
putchar(i % 10 + 48);
putchar(' ');
putchar(j / 10 + 48);
putchar(j % 10 + 48);	
if ((i / 10 == 9 && j % 10 == 9 ) && (i % 10 == 8 && j / 10 == 9))
{
break;
}

putchar(' ');
putchar(',');	
}
}
putchar('\n');
}
return (0);
}
