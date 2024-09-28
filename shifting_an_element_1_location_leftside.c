#include<stdio.h>
void main(){
    int a[20];
    int i,n,t;
    printf("number of element in a array:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("%d)element of array :",i+1);
        scanf("%d",&a[i]);
    }
    printf("\n");
    for(i=0;i<n;i++){
        printf("The Entered Elements of array  are : %d\n",a[i]);
    }
    t=a[0];
    for(i=0;i<n;i++){
        if(i==n-1){
            a[i]=t;
        }
        else
        a[i]=a[i+1];
    }
    printf("\nAfter Shifting :");
    printf("The elements of array a :");
    for(i=0;i<n;i++){
        printf(" %d",a[i]);
    }
    printf("\n");
}