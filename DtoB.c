// C program to convert decimal to binary
#include <stdio.h>
int main ()
{
    int n; // declare variable n to store user input
    int remainder = 0; // initialize remainder to 0
    int binary = 0; // initialize binary to 0
    int base = 1; // initialize base to 1 (2^0)
    printf("Enter a number: "); // print prompt for user input
    scanf("%d", &n); // get user input
    for(; n!=0; n/=2) 
    {
        remainder = n % 2; // get remainder 
        binary = binary + remainder * base; // add remainder to binary number
        base = base * 10; // increase base by 10 for next digit 
    }
    printf("Binary equivalent: %d", binary); // print binary number
}