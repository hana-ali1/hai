#include<stdio.h>
int main()
{
char operation;
double n1,n2;
printf("enter an operator(+,-,*,/):");
scanf("%c",&operation);
printf("enter two operands:");
scanf("%lf%lf",&n1,&n2);
switch(operation)
{
case '+':
printf("%.lf+%.lf=%.lf",n1,n2,n1+n2);
break;
case'-':
printf("%.lf-%.lf=%.lf",n1,n2,n1-n2);
break;
case '*':
printf("%.lf*%.lf=%.lf",n1,n2,n1*n2);
break;
case '/':
printf("%.lf/%.lf=%.lf",n1,n2,n1/n2);
break;
default:
printf("error operator is not correct");
}
return(0);
}
