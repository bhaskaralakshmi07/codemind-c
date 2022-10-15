#include<stdio.h>
int main()
{
    int num,total=0,count=1;
    scanf("%d",&num);
    for(int i=1;i<=num;i++)
    {
        count=1;
        for(int x=1;x<=i/2;x++)
        {
            if(i%x==0)
            count++;
        }
        if(count==9)
        {
            printf("%d ",i);
            total++;
        }
    }
    printf("
Total=%d",total);
}