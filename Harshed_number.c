#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int r,s,sum=0;
    s=n;
    while(n!=0)
    {
        r=n%10;
        sum=sum+r;
        n=n/10;
    }
    if(s%sum==0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}