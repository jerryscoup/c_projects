//written by jerryscoup
//aim is to write a basic code in c for finding if the inputed number is +ve,-ve ,o;
#include<stdio.h>
void main ()
{
    int num;
    printf("enter a number:");
    scanf("%d",&num);
    if(num>0)//number is positive
    {
        printf("number is positive\n");
    }
    else if(num<0)//number is negative
    {
        printf("number is negative\n");
    }
    else//only case left number is 0
    {
        printf("number is 0\n");
    }
}