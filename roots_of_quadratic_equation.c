#include<stdio.h>
#include<math.h>
void main (){

    //equation is ax^2+bx+c
    int a,b,c,r1,r2;
    printf("please enter input values of a:b:c=");
    scanf("%d %d %d",&a,&b,&c);
    r1=(-b+sqrt(b*b-4*a*c))/(2*a);
    r2=(-b-sqrt(b*b-4*a*c))/(2*a);

    printf("the roots of above equation is %d %d",r1,r2);


}