#include<stdio.h>

	int main()
{
	double num;
	printf("Enter number\n");
	scanf("%lf",&num);
		
	
	if (num <= 0.0)
	{
		if(num == 0)
			printf("you entered 0\n");
		else printf("You entered negative number%lf\n",num);
	}
	else("Print number is positive%lf\n",num);
	


return 0;
}
