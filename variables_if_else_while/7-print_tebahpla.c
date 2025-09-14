#include <stdio.h>

/**
* main - entry of the program
*
* Description: prints the alphabet in lowercase in reverse
*
* Return: 0 on success
*
*/
int main(void)
{
char alphabet = 'z', newline = '\n';

for (; alphabet >= 'a'; alphabet--)
{
putchar(alphabet);
}
putchar(newline);
return (0);
}
