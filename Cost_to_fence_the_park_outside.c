#include<stdio.h>
int fun(int l,int b,int w,int c)
{
    int area;
    area=((l+2*w)*(b+2*w))-l*b;
    printf("%d",area*c);
}
int main()
{
    int l,b,w,c;
    scanf("%d%d%d%d",&l,&b,&w,&c);
    fun(l,b,w,c);
}