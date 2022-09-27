#include<stdio.h>
//Function declaration
int Raise(int,int);

//Function Definition
int Raise(int x,int y)
{
int total=1, count;
for(count=1;count<=y;count++)
{
total=total*x;
}	
return total;
}	
//Main function
int main()
{
int a,b,result;
printf("Enter a number\n");
scanf("%d",&a);
printf("Enter the power of number\n");
scanf("%d",&b);
result=Raise(a,b);
printf("%d raised to %d is %d",a,b,result);	
return 0;
}
