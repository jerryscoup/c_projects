#include<stdio.h>
void main(){
    int a[10][10];
    int s,i,j,r,c;
    printf("Enter order of matrix a:");
    scanf("%d%d",&r,&c);
    printf("Enter %d values",r*c);
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nElements of array a:");
    for(i=0;i<r;i++){
        printf("\n");
        for(j=0;j<c;j++)
        {
            printf("%d\t",a[i][j]);
        }
    }
    s=0;
    if(r==c){
        for(i=0;i<r;i++){
            for(j=0;j<c;j++){
                if(i+j==0 || i+j==2 || i+j==4)
                s=s+a[i][j];
            }
        } printf("\nSum of diagonal elements : %d",s);

    }
    else
    printf("\nAddition is not possible");
    

}