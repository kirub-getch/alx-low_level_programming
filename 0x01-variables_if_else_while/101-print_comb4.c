#include <stdio.h>
/**
*main - entry point
*Return: always return 0 (success)
*/
int main(void)
{
int ones, tens, hund;
for (hund = 0 ; hund <= 9 ; hund++)
{
for (tens = hund + 1 ; tens <= 9; tens++)
{
for (ones = tens + 1; ones <= 9; ones++)
{
putchar(hund + '0');
putchar(tens + '0');
putchar(ones + '0');
if (hund == 7 && tens == 8 && ones == 9)
{
break;
}
else
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
