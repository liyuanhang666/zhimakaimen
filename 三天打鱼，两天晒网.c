#include<stdio.h>
int main()
{  int a,b;
scanf("%d",&a);
b=a%5;
if((b==1||b==2||b==3))
{
    printf("Fishing in day %d\n",a);
}
else{
    printf("Drying in day %d\n",a);
}
return 0;
}
