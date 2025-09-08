#include <stdio.h>
/**
* main - entry of program
*
* Description: prints the size of various types
* on the computer it is compiled and run on.
*
* Return: Always 0 (Success)
*/
int main(void)
{
printf("Size of an char: %d byte(s)\n", sizeof(char));
printf("Size of an int: %d byte(s)\n", sizeof(int));
printf("Size of an long int: %d byte(s)\n", sizeof(long int));
printf("Size of an long long int: %d byte(s)\n", sizeof(long long int));
printf("Size of an float: %d byte(s)\n", sizeof(float));
return (0);
}
