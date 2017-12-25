#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,a[40],h,i;
    freopen("nn.txt","r",stdin);
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    h=a[0]*6;
    for(i=1;i<n;i++)
    {
        if(a[i]>a[i-1])
        {
            h=h+(a[i]-a[i-1])*6+5;
        }
        else if(a[i]<a[i-1])
        {
            h=h+(a[i-1]-a[i])*4+5;
        }
        else
        {
            h=h+5;
        }
    }
    printf("%d\n",h);

    return 0;
}
