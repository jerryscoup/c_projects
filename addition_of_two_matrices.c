#include<stdio.h>
void main(){
    int a[10][10], b[10][10],d[10][10];
    int i,j,r,c,p,q;
    printf("Enter order of a matrix a:");
    scanf("%d %d",&r,&c);
    printf("Enter %d values",r*c);
    for(i=0;i<r;i++){
        for(j=0;j<c;j++)
        scanf("%d",&a[i][j]);

    }
    printf("\nEnter order of matrix b:");
    scanf("%d%d",&p,&q);
    for(i=0;i<r;i++){
        for(j=0;j<c;j++)
        scanf("%d",&a[i][j]);}
        printf("\nElements of array a :");
        for(i=0;i<r;i++){
            printf("\n");
            for(j=0;j<c;j++){
                printf("%d\t",a[i][j]);
            }
        }
        printf("\nEnters of array b :");
        for(i=0;i<p;i++){
            printf("\n");
            for(j=0;j<q;j++){
                printf("%d\t",b[i][j]);

            }
        }
        if(r==p && c==q){
            for(i=0;i<r;i++){
                for(j=0;j<q;j++){
                    d[i][j]=a[i][j]+b[i][j];

                }
            }
            printf("\nElements of aaray d:");
            for(j=0;j<q;j++){
                printf("%d\t",d[i][j]);
            }
        }
        else
        printf("\nAddition is not possible");
        


}