#include<stdio.h>
int main()
{
double a, b, result;
int operation;
printf("Enter the Operation you want to perform:\n");
printf("1 for addition\n2 for substraction\n3 for multiplication\n4 for division\n");
scanf("%d",&operation);
printf("Enter your numbers:\n");
scanf("%lf %lf",&a, &b);
printf("%lf %lf\n", a, b);
switch (operation)
{
	case 1:
		result=a+b;
		printf("addition is:%lf\n",result);
		break;
	case 2:
		result=a-b;
		printf("Substaction is:%lf\n",result);
		break;
	case 3:
		result=a*b;
		printf("Multiplication is:%lf\n",result);
		break;
	case 4:
		result=a/b;
		printf("division is:%lf\n",result);
		break;
	default:printf("Invalid input\n");
}

return 0;
}
