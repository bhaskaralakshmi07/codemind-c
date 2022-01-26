#include<stdio.h>
int main()
{
    int n,r,d,sum=0,p=1;
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        p*=r;
        sum+=r;
        n=n/10;
    }
   d=p-sum;
   printf("%d",d);
   return 0;
}