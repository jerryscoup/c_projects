#include<stdio.h>
void main()
{
    int num1,num2,num3;
    printf("enter number1,number2,number3:");
    scanf("%d%d%d",&num1,&num2,&num3);
    if(num1>=num2&&num1>=num3)
    {
        printf("biggest number is %d\n",num1);
    }
    else if(num2>=num1&&num2>=num3)
    {
        printf("biggest number is %d\n",num2);
    }
    else
    {
        printf("biggest number is %d\n",num3);
    }
}
