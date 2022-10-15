#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],x,max=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&x);
    for(int i=0;i<n;i++)
    {
        if (arr[i]>max)
        {
            max=arr[i];
        }
    }
    for(int i=0;i<n;i++)
    {
        int c=0;
        c=arr[i]+x;
        if(c>=max)
        {
            printf("True ");
        }
        else{
            printf("False ");
        }
    }
}