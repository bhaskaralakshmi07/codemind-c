#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n],os=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2!=0)
        os=os+a[i];
    }
    printf("%d",os);
    return 0;
}