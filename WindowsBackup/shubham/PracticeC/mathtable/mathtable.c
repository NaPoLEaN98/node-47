#include<stdio.h>
int main()
{
int number;
register int count;

printf("Enter no. for multiplication you want\n");
scanf("%d",&number);
printf("multiplication table of %d\n",number);
printf("====================\n");

for(count=1;count<=10;count++)
{	
printf("%d * %d = %d\n",number,count,number*count);
}
printf("====================\n");

return 0;

}	
