#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        char str[105];
        int con[26]={0};
        int flag=0;
        scanf("%s",str);
        for(j=0;str[j]!='\0';j++)
        {
            con[str[j]-'a']++;
        }
        for(j=0;str[j]!='\0';j++)
        {
            if(con[str[j]-'a']==1)
            {
                flag=1;
                printf("%c\n",str[j]);
                break;
            }
        }
        if(flag==0)
        {
            printf("NO\n");
        }
    }

    return 0;
}
