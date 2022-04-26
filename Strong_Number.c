#include<stdio.h>
int factorial(int d)
{
    int k=1;
    while(d!=0)
    {
        k=k*d;
        d=d-1;
    }
    return k;
}
int main()
{
    int n,i,sum=0,m,d,k;
    scanf("%d",&n);
    m=n;
    while(n!=0)
    {
        d=n%10;
        n=n/10;
        k=factorial(d);
        sum=sum+k;
    }
    if(m==sum)
    {
        printf("The number %d is a strong number",m);
    }
    else
    {
        printf("The number %d is not a strong number",m);
    }
}