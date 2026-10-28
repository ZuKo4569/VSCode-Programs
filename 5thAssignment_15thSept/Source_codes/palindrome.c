#include <stdio.h>
int main()
{
int n, original, d, reverse = 0;
printf("Enter a number: ");
scanf("%d", &n);
original = n;
for (; n > 0; n /= 10)
{
    d = n % 10;
    reverse = reverse * 10 + d;
}

if (original == reverse)
{
    printf("The number is a palindrome");
}
else
{
    printf("The number is not a palindrome");
}
return 0;
}
