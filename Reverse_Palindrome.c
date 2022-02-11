#include<stdio.h>
int reverse(int n)
{
    int rev=0,rem;
    while(n>0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    return rev;
} 
  int main()
  {
      int x;scanf("%d",&x);
      do
      {
          x=x+reverse(x);
      }
      while(x!=reverse(x));
      printf("%d",x);
  }