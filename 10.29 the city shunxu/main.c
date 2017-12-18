#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
    int n,i,j,k;
    char str[20][35];
    char t[35];
    freopen("nn.txt","r",stdin);
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",str[i]);
    }
    for(j=0;j<n-1;j++)
    {
        for(k=j;k<n;k++)
        {
            if(strcmp(str[j],str[k])>0)
            {
                strcpy(t,str[j]);
                strcpy(str[j],str[k]);
                strcpy(str[k],t);
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%s\n",str[i]);
    }
    return 0;
}
