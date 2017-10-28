#include<stdio.h>
int main()
{
double a,b,c,d;
scanf("%lf£¬%lf£¬%lf£¬%lf",&a,&b,&c,&d);
if ((a<=1)&&(b<=1)&&(c<=1)&&(d<=30))
{
if(d<10)
{printf("%.2f\n",0.2+d*0.8);}
 if((d>=10)&&(d<20))
{
printf("%.2f\n",0.2+d*0.75);}
 if((d>=20)&&(d<30))
{
printf("%.2f\n",0.2+d*0.7);
}
}
else
{printf("Error\n");}
return 0;
}
