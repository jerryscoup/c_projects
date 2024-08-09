#include<math.h>
#include<stdio.h>
void main (){
float p,r,t,amt,si,ci;
printf("please enter principle amount;");
scanf("%f",&p);
printf("please enter the time period;");
scanf("%f",&t);
printf("please enter the rate of interest;");
scanf("%f",&r);
si=(p*r*t)/100;
printf("the si is %f\n",si);
ci=(p*(pow(1+r/100,t)))-p;
printf("the ci is %f\n",ci);



}