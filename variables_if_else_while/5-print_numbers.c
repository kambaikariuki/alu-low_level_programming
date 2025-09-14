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
char num = '0', newline = '\n';
for (; num <= '9'; num++)
{
putchar(num);
}
putchar(newline);
return (0);
}
