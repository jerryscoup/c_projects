//written by jerryscoup
//aim is to write basic code to identify if the inputed year is leap year or not
#include<stdio.h>
void main()
{
    int yr;//making a variable a
    printf("enter year:");
    scanf("%d",&yr);
    if((yr%400==0)||(yr%4==0)&&(yr%100!=0))
    {
        printf("leap year\n");
    }
    else
    {
        printf("not a leap year\n");
    }
}