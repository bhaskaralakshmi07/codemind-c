#include<stdio.h>
int main()
{
    int n,i=0,rem,k;
    scanf("%d",&n);
    while(n!=0)
    {
        rem=n%10;
        n=n/10;
        k=rem;
        if(k>i)
        {
            i=k;
        }
    }
    printf("%d",i);
}