#include <stdio.h>
#include <stdlib.h>
struct code{
char mi;
char jie;
};
int main()
{   char b[100];
int i,j;
     struct code a[ ]={{'a','d'},{'b','z'},{'z','a'},{'d','b'},{'\0'}};
    scanf("%s",b);
    for(i=0;b[i]!='\0';i++)
    {
        for(j=0;j<4;j++)
        {
            if(b[i]==a[j].mi)
            {
                b[i]=a[j].jie;
                break;
            }
        }
    }
    printf("%s\n",b);
    return 0;
}
