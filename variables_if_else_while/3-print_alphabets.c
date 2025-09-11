#include <stdio.h>

/**
* main - entry of the program
*
* Description: prints the alphabet in lowercase
* then in uppercase
*
* Return: 0 on success
*
*/
int main(void)
{
char a = 'a', b = 'A', newline = '\n';

for (; a <= 'z'; a++)
{
putchar(a);
}
for (; b <= 'Z'; b++)
{
putchar(b);
}
putchar(newline);
return (0);
}
