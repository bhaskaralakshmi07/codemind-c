#include<stdio.h>
 int main()
{
	int size;
	scanf("%d",&size);
	int a[size],i,se,low,high,mid,flag=0;
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	scanf("%d",&se);
	low=0;
	high=size-1;
	while(low<=high)
	{
		mid=(low+high)/2;
		if(a[mid]==se)
		{
			flag=1;
			break;
		}
		else if(a[mid]<se)
		{
			low=mid+1;
        }
        else
        {
        	high=mid-1;
		}
		}
		if(flag==1)
		{
			printf("True");
		}
		else
		{
			printf("False");
		}
}