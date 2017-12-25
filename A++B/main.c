#include <stdio.h>
#include <stdlib.h>
int fun(int a)
{
    int h=0,j,k=1,i;
    if(a>100)
    {
        for(i=0;i<2;i++)
        {
            j=a%10;
            a=a/10;
            h=h+j*k;
            k=k*10;
        }
    }
    return h;
}
int main()
{
    int a,b,h;
    scanf("%d %d",&a,&b);
    h=a+b;
    if(h>100)
    {
        printf("%d\n",fun(h));
    }
    else if(h==100)
    {
        printf("%d\n",00);
    }
    else
    {
        printf("%d\n",h);
    }
    return 0;

}
