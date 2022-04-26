#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int arr[n],i,sum=0;
	float average;
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		
	}
	for(i=0;i<n;i++)
     {
		sum=sum+arr[i];
     }
     average=float(sum)/n;
	printf("%.2f",average);
	return 0;
}