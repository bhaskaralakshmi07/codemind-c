#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int arr[a],i,c=0,j;
    int flag=0;
    for (i=0; i<a; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (i=0; i<a ;i++)
    {
        flag=0;
        for (j=0; j<a ;j++)
        {
            if (i!=j && j>i)
            {
                if (arr[j]==arr[i] && arr[j]!=0)
                {
                    flag=1;
                    arr[j]=0;
                    break;
                }
            }
        }
        if (flag==1)
        {
            c++;
        }
    }
    printf("%d",c);
    return 0;
}