#include <stdio.h>
int main()
{
int N,i=2;
printf("Enter the Value of N: ");
scanf("%d",&N);
printf("Even numbers from 1 to %d are: ",N);
for(;i<=N;)
{ 
    printf("%d ",i);
    i = i + 2;
}
return 0;
}