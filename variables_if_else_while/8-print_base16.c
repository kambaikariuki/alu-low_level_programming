#include <stdio.h>

/**
* main - Entry of the program
*
* Description: prints base 16 numbers
*
* Return: 0 on success
*/
int main(void)
{
char num = '0', letter = 'a', newline = '\n';
for (; num <= '9'; num++)
{
putchar(num);
}
for (; letter <= 'f'; letter++)
{
putchar(letter);
}
putchar(newline);
return (0);
}
