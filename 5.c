#include<stdio.h>
int main()
{
int n;
n=2;
printf(" enter your number");
scanf("%d", &n);
while (n%2==0)
{
printf("your number is even %d ",n);
}
printf("your number is odd %d",n);
return(0);
}
