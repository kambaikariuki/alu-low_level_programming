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
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n < 0)
{
printf("%d is negative\n", n);
}
else if (n == 0)
{
printf("%d is zero\n", n);
}
else
{
printf("%d is positive\n", n);
}
return (0);
}
