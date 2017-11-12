#include<stdio.h>
int main()
{
    int a,i,j,h;
    scanf("%d",&a);
    for(i=1; i<=a; i++)
    {
    for(j=1;j<=i;j++)
    {
        printf(" ");
    }
        for(j=1;j<=a;j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

