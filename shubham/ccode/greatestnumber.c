#include<stdio.h>
int main()


{
	int n1, n2, n3;
	printf("Enter 3 numbers\n");
	scanf("%d%d%d",&n1, &n2, &n3);


	if	(n1 >= n2 && n1 >= n3)
		printf("The Greatest number is =%d\n",n1);
	else if	(n2 >= n1 && n2 >= n3)
		printf("The Greatest number is =%d\n",n2);
	else if	(n3 >= n1 && n3 >= n2)
		printf("The Greatest number is =%d\n",n3);


return 0;
}
