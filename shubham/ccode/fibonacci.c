#include<stdio.h>
int main()
{
	int i, n;
	int t1= 0, t2= 1;
	printf("Enter number =\n");
	scanf("%d",&n);
	int nextterm;
	nextterm =t1+t2;
	printf("%d,%d", t1, t2);
	
	for(i=3;i<=n;++i)
	{
		printf(",%d",nextterm);
	
			t1 = t2;
			t2 = nextterm;
			nextterm = t1+t2;
			
	}



return 0;
}
