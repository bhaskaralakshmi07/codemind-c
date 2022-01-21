#include<stdio.h>
int main()
{    
    int i,a,b=0;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        if(a%i==0)
        {
            b++;
        }
    }
    if(b==2)
    {
        printf("prime");
    }
    else
    {
        printf("not a prime"); 
    }
}