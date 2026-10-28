#include <stdio.h>
int main()
{
int n, d, p = 1;
printf("Enter a number: ");
scanf("%d", &n);
for (; n > 0; n /= 10)
{
    d = n % 10;
    p = p * d;
}
printf("Product of Digits = %d\n", p);
return 0;
}