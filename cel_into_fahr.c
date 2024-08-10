#include<stdio.h>
void main (){

    float c,f;
    printf("please enter the temperature in celsius:");
    scanf("%f",&c);
    f = c* 1.8 + 32;
    printf("the converted temperature from %f celsius to fahrenheit is %f\n",c,f);
}