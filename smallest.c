#include <stdio.h>
int main()
{
int n, d, smallest = 9;
printf("Enter a number: ");
scanf("%d", &n);
for (; n > 0; n /= 10)
{
    d = n % 10;

    if (d < smallest)
    {
        smallest = d;
    }
}
printf("Smallest digit = %d\n", smallest);
return 0;
}