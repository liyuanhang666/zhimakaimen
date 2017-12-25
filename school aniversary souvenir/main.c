#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n,a[105],i,sum=1;
     a[1]=1;
   scanf("%d",&n);
   for(i=2;i<=n;i++)
   {
       a[i]=a[i-1]+i;
       sum=sum+a[i];
   }
   printf("%d\n",sum);
    return 0;
}
