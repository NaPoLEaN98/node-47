#include<stdio.h>
#include <math.h>
int main()
{
double pri, CI;
double roi,n;//n is time
printf("Enter Ci details");
printf("Enter principle\nrate of intrest\ntime\n");
scanf("%lf %lf %lf",&pri,&roi,&n);

CI= pri * pow((1+roi/100),n);
printf("CI calculated is:%lf\n",CI-pri);


return 0;
}
