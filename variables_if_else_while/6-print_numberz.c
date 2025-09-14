#include <stdio.h>

/**
* main - entry of the program
*
* Description: prints all single digit numbers in base 10
*
* Return: 0 on success
*
*/
int main(void)
{
int num = 0;
for (; num < 10; num++)
{
putchar('0' + num);
}
putchar('\n');
return (0);
}
