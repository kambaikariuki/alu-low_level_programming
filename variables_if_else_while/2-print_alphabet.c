#include <stdio.h>

/**
* main - entry of the program
*
* Description: prints the alphabet in lowercase
*
* Return: 0 on success
*
*/
int main(void)
{
char alphabet = 'a', newline = '\n';

for (alphabet; alphabet <= 'z'; alphabet++)
{
putchar(alphabet);
}
putchar(newline);
return (0);
}
