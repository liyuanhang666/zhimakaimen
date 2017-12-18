#include <stdio.h>
#include <stdlib.h>
#include<string.h>
typedef struct
{
    char name[25];
    char log[25];
    double pri;
    int num;
}date;
int comp(date* a,date* b)
{
    return b->num - a->num;
}
int main()
{
   int n,i;
   date a[30];
   //freopen("nn.txt","r",stdin);
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       scanf("%s %s %lf %d",a[i].name,a[i].log,&a[i].pri,&a[i].num);
   }
   qsort(a,n,sizeof(date),comp);
   for(i=0;i<n;i++)
   {
       printf("%s %s %.2f %d\n",a[i].name,a[i].log,a[i].pri,a[i].num);
   }
    return 0;
}
