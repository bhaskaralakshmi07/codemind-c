#include<stdio.h>
int fun(int n)
{
    int r,m=0;
    while(n>=1)
    {
        r=n%10;
        m=m+r;
        n=n/10;
    }
    return m;
}
int main()
{
    int k,q;
    scanf("%d",&k);
    while(k>9)
    {
        k=fun(k);
        q=k;
    }
    printf("%d",q);
}