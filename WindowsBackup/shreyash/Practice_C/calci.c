#include<stdio.h>
int main ()
{
float a, b, result; 
int choice;
printf("Enter the two NO.\n");
scanf("%f %f",&a, &b);
printf("==============================\n");
printf("Please select your operation\n");
printf(" 1:Addition\n 2:Substraction\n 3:Multiplication\n 4:Division\n");
scanf("%d",&choice);
switch(choice)
{
 case 1:
	 result=a+b;
	 break;
 case 2:
 	result=a-b;
	break;
 case 3:
	result=a*b;
	break;
 case 4:
	result=a/b;
	break;
default:
printf("Invalid option,Read carefully\n");
}	
printf("The Result of you operation is %f\n",result);

printf("==============================\n");
return 0;




}	
