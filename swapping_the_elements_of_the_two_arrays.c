#include<stdio.h>
void main(){
    int a[20],b[20];
    int i,n;
    printf("number of elements per array:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("%d)element of array a:",i+1);
        scanf("%d",&a[i]);
    }
    printf("\n");
    for(i=0;i<n;i++){
        printf("The Entered Elements of array a are : %d\n",a[i]);
    }

     printf("\n");
    for(i=0;i<n;i++){
        printf("%d) element of array b:",i+1);
        scanf("%d",&b[i]);
    }
    printf("\n");
    for(i=0;i<n;i++){
        printf("The Entered Elements of array b are : %d\n",b[i]);
    }
    for(i=0;i<n;i++){
        a[i]=a[i]+b[i];
        b[i]=a[i]-b[i];
        a[i]=a[i]-b[i];
        }
        
    printf("After Swapping :");
    printf("Elements of array a : ");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }printf("\n");
    printf("Elements of array b : ");
    for(i=0;i<n;i++){
        printf("%d ",b[i]);
    }
    printf("\n");







}