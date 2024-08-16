#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter the values of a,b,c:");
    scanf("%d%d%d",&a,&b,&c);
    if(a<=b&&a<=c)
    {
        if(b<=c)
        {
        printf("sorted order:%d %d %d\n",a,b,c);
        }
        else
        {
        printf("sorted order :%d %d %d\n",a,c,b);
        }
    }
    else if(b<=a&&b<=c)
    {
        if(a<=c)
        {
        printf("sorted order:%d %d %d\n",b,a,c);
        }
        else
        {
        printf("sorted order:%d %d %d\n",b,c,a);
        }
    }
    else
    {
        if(a<=b)
        {
        printf("sorted order:%d %d %d\n",c,a,b);
        }
        else
        {
        printf("sorted order:%d %d %d\n",c,b,a);
        }
    }
}
