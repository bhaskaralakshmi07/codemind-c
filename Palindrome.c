#include<stdio.h>
int main()
{
    int n,m,rev=0,rem;
    scanf("%d",&n);
    m=n;
    while(n>0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    if(m==rev)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}