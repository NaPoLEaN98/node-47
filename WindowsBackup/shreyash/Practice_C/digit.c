#include <stdio.h>
int main()
{
	int a,sum=0,num,count,temp,b,digit;
	printf("Enter the number:\n");
	scanf("%d",&num);
	//created for counting digits
	temp=1;
	b=num;
	digit=0;
	//To count number of digit in number
	while (temp<=b)
		{
		temp=temp*10;
		digit++;	
		}
		printf("Digits are %d\n",digit);
	
	for(count=1;count<=digit;count++)   // To add digits of a number
			{
			a=num%10;
			num=num/10;
			sum=sum+a;
			}	
	printf("The sum of all  digit is %d\n",sum);
	return 0;
}	
