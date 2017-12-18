#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int comp(const void *_p,const void *_q)
{
    char*p=(char*)_p;
     char*q=(char*)_q;
     return *p-*q;
}
int main()
{
    char str[45],sth[45];
    freopen("nn.txt","r",stdin);
    scanf("%s %s",str,sth);
    qsort(str,strlen(str),sizeof(str[0]),comp);
    qsort(sth,strlen(sth),sizeof(sth[0]),comp);
    if(strcmp(str,sth)==0)
    {
        printf("YES\n");
    }
    else
        printf("NO\n");
    return 0;
}
