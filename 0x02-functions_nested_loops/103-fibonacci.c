#include <stdio.h>
/**
 * main - the main printing function
 * Return: 0
 */
int main(void)
{
int i = 0;
long j = 1, k = 2, sum = k;
{
k += j;
if (k % 2 == 0)
sum += k;
j = k - j;
++i;
}
printf("%ld", sum);
return (0);
}
