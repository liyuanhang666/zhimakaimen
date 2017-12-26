#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
   char a[1005],b[1005];
   int i,n;
   freopen("nn.txt","r",stdin);
   scanf("%s",a);
   n=strlen(a);

   for(i=0;a[i]!='\0';i++)
   {
       b[n-1]=a[i];

       n--;
   }
   b[i]='\0';

   if(strcmp(a,b)==0)
{

       for(i=0;a[i]!='\0';i++)
       {
           if(i!=0)
           printf("*%c",a[i]);
           else
           {
               printf("%c",a[i]);
           }
       }
       printf("\n");
   }

   else
   {
       printf("%s\n",a);
   }

    return 0;
}
