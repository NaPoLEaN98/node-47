#include <stdio.h>
int main()
{
	int num,i,temp=1;
	printf("Enter the number\n");
	scanf("%d",&num);
	for (i=1;i<=num;i++)
		{
			temp=temp*i;

		}		

	printf("The %d! =%d\n", num, temp );

return 0;
}	
