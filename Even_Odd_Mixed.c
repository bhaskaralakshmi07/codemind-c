#include<stdio.h>
int main()
{
    int n,r,count=0,odd=0;
    scanf("%d",&n);
    while(n!=0)
    {
      r=n%10;
      n=n/10;
      if(r%2==0)
      {
          count++;
      }
      else
      {
          odd++;
      }
    }
      if(odd==0)
      {
          printf("Even");
      }
      else if(count==0)
      {
         printf("Odd");
      }
      else
      {
          printf("Mixed");
      }
      return 0;
}