#include<stdio.h>
#include<math.h>
int main()
{
int n,m,p=1,i;
scanf("%d %d",&m,&n);
for(i=0;i<n;i++)
{
    p=p*m;
    p=p%1000;
}

printf("The last 3 digits of %d ** %d is: %03d\n",m,n,p);
return 0;
}
