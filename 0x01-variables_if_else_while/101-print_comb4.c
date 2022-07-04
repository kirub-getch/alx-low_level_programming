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
for (tens = 0 ; tens <= 9; tens++)
{
for (ones = tens + 1; ones <= 9; ones++)
{
putchar("%d%d%d", hund, tens, ones);
putchar(',');
putchar(' ');
}
}
}
return (0);
}
