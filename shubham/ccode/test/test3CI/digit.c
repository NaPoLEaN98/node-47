#include <stdio.h>
int main()
{
int a,sum=0,num,count;
printf("Enter the 5 digit number:\n");
scanf("%d",&num);
for(count=1;count<=5;count++)
{
a=num%10;
num=num/10;
sum=sum+a;
}	
printf("The sum of all 5 digit is %d",sum);
return 0;
}	
