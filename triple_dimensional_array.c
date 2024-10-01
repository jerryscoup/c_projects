#include<stdio.h>
void main(){
    int a[5][4][10];
    int i,j,k,s,c,d;
    printf("Enter no.of the classes:");
    scanf("%d",&c);
    printf("\nEnter no. of the sections:");
    scanf("%d",&s);
    printf("\nEnter the no. of the students:");
    scanf("%d",&d);
    for(i=0;i<c;i++){
        printf("\nEnter for %d class :",i+6);
        for(j=0;j<s;j++){
            printf("\nEnter for the section %d:",j+1);
            for(k=0;k<d;k++){
                printf("\nEnter student %d marks :",k+1);
                scanf("%d",&a[i][j][k]);

            }
        }
    }
    printf("\nStudents' results :\n");
    for(i=0;i<s;i++){
        printf("\n%dth class :",i+1);
        for(j=0;j<s;j++){
            printf("\nsection %d",j+1);
            for(k=0;k<d;k++){
                printf("\nStudents %d :",k+1);
                printf("%d\t",a[i][j][k]);


            }
            printf("\n");
        }
        printf("\n");
    }

}