#include<stdio.h>
void main(){
    int a[10][10];
    int t,i,j,p,q,k;
    printf("Enter the order of the matrix:");
    scanf("%d %d",&p,&q);
    printf("\nEnter %d values :",p*q);
    for(i=0;i<p;i++){
        for(j=0;j<q;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nElements of the matrix a :");
    for(i=0;i<p;i++){
        for(j=0;j<q;j++){
            for(k=j+1;k<q;k++)
            {
                if(a[i][j]>a[i][k]){
                    t=a[i][j];
                    a[i][j]=a[i][k];
                    a[i][k]=t;

                }
            }
        }

    }
    printf("\nAfter sorting elements of matrix a :");
    for(i=0;i<p;i++){
        for(j=0;j<q;j++){
            printf("%d\t",a[i][j]);
        }
    
}