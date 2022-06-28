#include<stdio.h>
int main()
{
    int n,sq,c=1,temp;
    scanf("%d",&n);
    temp=n;
    sq=n*n;
    while(n!=0)
    {
        c=c*10;
        n=n/10;
    }
    if(sq%c==temp)
    {
        printf("Automorphic Number");
    }
    else
    {
        printf("Not an Automorphic Number");
    }
    return 0;
}