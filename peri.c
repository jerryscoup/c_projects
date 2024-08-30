#include<stdio.h>
void main(){

    int a,b,p,A;
    printf("enter the length :");
    scanf("%d",&a);
    printf("enter the breadth :");
    scanf("%d",&b);
    p = 2*(a+b);

     printf("the perimetre of rectangle having lenth : %d and breadth : %d is %d\n",a,b,p);
     A= a*b;
     printf("the area of rectangle having length : %d and breadth :%d is %d\n",a,b,A);
}