#include <stdio.h>

/**
* main - Entry of program
*
* Description: prints _putchar followed by a new line
*
* Return: 0 on success
*
*/
int main(void)
{
char output[8] = "_putchar";
int i = 0;

for (i = 0; i < 8; i++)
{
putchar(output[i]);
}
putchar('\n');
return (0);
}
