#include<stdio.h>
int main()
{
    int number,rev=0,temp,count=0;
    scanf("%d",&number);
    number+=1;
    for(;number;number++)
    {
        temp=number,rev=0,count=0;
        for(int i=1;i<=number/2;i++)
        {
            if(number%i==0)
            {
                count++;
            }
        }
        if(count==1)
        {
            while(temp)
            {
                rev=(rev*10)+temp%10;
                temp/=10;
            }
            if(number==rev)
            {
                printf("%d",number);
                break;
            }
        }
    }
}