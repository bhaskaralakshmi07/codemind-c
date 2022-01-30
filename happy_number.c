#include<stdio.h>
int main()
{
    int n,rem,res=0;
    scanf("%d",&n);
    while(n)
    {
        rem=n%10;
        n=n/10;
        res+=rem*rem;
        if(n==0 && res>9)
        {
            n=res;
            res=0;
        }
    }
    if(res==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}