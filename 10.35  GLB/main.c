#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
    int t;
    char str[105];
    freopen("nn.txt","r",stdin);
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s",str);
        char*p=strstr(str,"GLB");
        if(p!=NULL)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}
