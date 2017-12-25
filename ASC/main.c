#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n,a[1005],i;
   freopen("nn.txt","r",stdin);
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
       printf("%c",a[i]);
   }
return 0;
}
