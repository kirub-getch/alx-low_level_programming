#include "main.h"
/****************
*print_number: prints an intiger 
*
*Returns: no value 
**********/
void print_number(int n)
{
unsigned int num = n;
if (x < 0)
{
putchar('-');
num = -num;
}
if((num / 10) > 0)
print_number(num / 10);
putchar((num % 10) + '0');
}
