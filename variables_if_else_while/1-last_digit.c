#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - entry of the program
 *
 * Description: assigns a rand num to n
 * prints if its positive or negative
 *
 * Return: 0 on success
*/

int main(void)
{
int n, digit;

srand(time(0));
n = rand() - RAND_MAX / 2;

digit = n % 10;
if (n < 0)
{
digit = -digit;
}
if (digit  == 0)
{
printf("Last digit of %d is %d and is 0\n", n, digit);
}
else if (digit < 6 && digit != 0)
{
printf("Last digit of %d is %d and is less than 6 and not zero\n", n, digit);
}
else
{
printf("Last digit of %d is %d is greater than 5\n", n, digit);
}
return (0);
}
