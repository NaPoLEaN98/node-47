#include<stdio.h>
int main()

{
	int year;
	printf("===WELCOME USER===\n");
	printf("Enter year = \n");
	scanf("%d",&year);
	if (year % 4 == 0)
		printf("%d year is leap year\n",year);
	else 
		printf("%d not a leap year\n",year);

return 0;
}
