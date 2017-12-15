#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct {
    char name[1000];
    int win;
    int ping;
    int fair;
    int sum;
}Player;
int comp(Player*a,Player*b)
{
    return b->sum-a->sum;
}

int main()
{
    int n,i;
    freopen("nn.txt","r",stdin);
    scanf("%d",&n);
    Player stu[n];


    for(i=0;i<n;i++)
    {
        scanf("%s %d %d %d",stu[i].name,&stu[i].win,&stu[i].ping,&stu[i].fair);
        stu[i].sum=stu[i].win*3+stu[i].ping;
    }
    qsort(stu,n,sizeof(Player),comp);
    for(i=0;i<n;i++)
    {
        printf("%d %s %d\n",i+1,stu[i].name,stu[i].sum);
    }
return 0;
}

