#include <stdio.h>
int main()
{
int n, i, s = 0;
printf("Enter a number: ");
scanf("%d", &n);
for (i = 1; i <= n; i++)
{
    if (i % 2 != 0)
    {
        s = s + i;
    }
}
printf("Sum of all the odd numbers: %d\n", s);
return 0;
}