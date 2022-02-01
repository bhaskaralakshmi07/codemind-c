#include<stdio.h>
int main()
{
    int l,b,w,c,area,total;
    scanf("%d%d%d%d",&l,&b,&w,&c);
    if(l<=w*2 || b<=w*2)
    {
        printf("Impossible");
    }
    else
    {
        area=l*b-((l-2*w)*(b-2*w));
        total=area*c;
        printf("%d",total);
    }
}