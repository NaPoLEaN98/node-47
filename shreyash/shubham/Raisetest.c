#include<stdio.h>
#include "Raise.h"	

int main()
{
int a,b,result;
printf("Enter a number\n");
scanf("%d",&a);
printf("Enter the power of number\n");
scanf("%d",&b);
result=Raise(a,b);
printf("%d raised to %d is %d\n",a,b,result);	
return 0;
}
