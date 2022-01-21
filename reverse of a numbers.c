#include<stdio.h>
int main()
{
    int n,rem,rn=0;
    scanf("%d",&n);
    while(n!=0)
    {
        rem=n%10;
        n=n/10;
        rn=rn*10+rem;
    }
    printf("%d",rn);
}