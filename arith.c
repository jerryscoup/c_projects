#include<stdio.h>
void main (){

    int x,y;
    printf("please enter the first number:");
    scanf("%d",&x);
    printf("please enter the second number:");
    scanf("%d",&y);

    printf("the sum of x:%d and y:%d is:%d\n",x,y,x+y);
    printf("the difference of x:%d and y:%d is:%d\n",x,y,x-y);
    printf("the product of x:%d and y:%d is:%d\n",x,y,x*y);
    printf("the quotient of x:%d and y:%d is:%d\n",x,y,x/y);
    printf("the modulus of x:%d and y:%d is:%d",x,y,x%y);

}