#include <stdio.h>
int main()
{
int n, i;
double f = 1;
printf("Enter a number: ");
scanf("%d", &n);
if (n < 0)
{
    printf("Factorial is not defined for negative integers.");
    return 1;
}
for (i = 1; i <= n; i++)
{
    f = f * i;
}
printf("Factorial of %d is: %.0f\n", n, f);
return 0;
}