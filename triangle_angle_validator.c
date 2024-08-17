#include<stdio.h>
void main()
{
    int angle1,angle2,angle3;
    printf("enter three angles:");
    scanf("%d%d%d",&angle1,&angle2,&angle3);
    if(angle1+angle2+angle3==180)
    {
        printf("Triangle is valid\n");
    }
    else
    {
        printf("Triangle is not valid\n");
    }
}
