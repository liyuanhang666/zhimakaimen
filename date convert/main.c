#include<stdio.h>
void fun(int n,int *mon,int *day)
{
    int a[12]={31,28,31,30,31,30,31,31,30,31,30,31},i=0,h=0,sum=0;
    if(h+a[i]>n)
    {
        *mon=1;
        *day=n-a[0];
    }

  while(h+a[i]<n)
  {
      h=h+a[i];
      sum=sum+a[i];
      i++;
  }
  *mon=i+1;
  *day=n-sum;
}
int main()

{

    int n,month,day;

    scanf("%d",&n);

fun(n,&month,&day) ;

printf("%dÔÂ%dÈÕ\n",month, day) ;

    return 0;

}
