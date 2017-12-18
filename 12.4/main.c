#include <stdio.h>
#include <stdlib.h>
 typedef struct{
 int year;
 int month;
 int day;
 }Date;
 typedef struct
 {
 char name[15];
 Date bir;
 char xing;
 char dian[16];
 char gu[16];
 }per;

int main()
{
    int n,j,k,i;
    freopen("nn.txt","r",stdin);
    scanf("%d",&n);
    per a[n];
    for(i=0;i<n;i++)
    {
        scanf("%s %d/%d/%d  %c %s %s",a[i].name,&a[i].bir.year,&a[i].bir.month,&a[i].bir.day,&a[i].xing,a[i].gu,a[i].dian);
        printf("%s %d/%d/%d %c %s %s\n",a[i].name,a[i].bir.year,a[i].bir.month,a[i].bir.day,a[i].xing,a[i].gu,a[i].dian);
    }

    scanf("%d",&j);
    for(i=0;i<j;i++)
    {
        scanf("%d",&k);
        if(k<n)
        {
            printf("%s %s %s %c %d/%d/%d\n",a[k].name,a[k].gu,a[k].dian,a[k].xing,a[k].bir.year,a[k].bir.month,a[k].bir.day);
        }
        else{
            printf("Not Found\n");
        }

    }
    return 0;
}
