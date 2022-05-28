#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,count=0,a[n];
    for(i=0;i<n;i++)
    {
       scanf("%d",&a[i]); 
    }
    for(i=0;i<n-1;i++)
    {
        if(a[i]<a[i+1])
        {
            count++;
            break;
        }
    }
    if(count==0)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;
}