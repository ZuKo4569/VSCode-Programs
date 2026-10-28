#include <stdio.h>
int main()
{
int n, d, largest = 0;
printf("Enter a number: ");
scanf("%d", &n);
for (; n > 0; n /= 10)
{
    d = n % 10;

    if (d > largest)
    {
        largest = d;
    }
}
printf("Largest digit = %d\n", largest);
return 0;
}
