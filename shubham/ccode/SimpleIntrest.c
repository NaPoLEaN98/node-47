#include<stdio.h>
int main()
{
double principle,SI;
float r, t;
printf("Enter SI details:\n");
printf("Enter principle\nEnter Rate\nEnter time\n");
scanf("%lf %f %f",&principle, &r, &t);
SI= (principle*r*t)/100;

printf("SI calculated is %lf\n",SI);


return 0;
}
