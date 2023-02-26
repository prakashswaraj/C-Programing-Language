
/*
    Program to find the transpose of the matrix.
*/
#include<stdio.h>
void transpose(int [3][3],int,int);
void main(){
    int i,j,m,n;
    printf("enter the rows of the array: ");
    scanf("%d",&m);
    printf("enter the column of the array:  ");
    scanf("%d",&n);
    int arr[m][n];
    printf("entewr the elements of the array: ");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
  tranpose(arr,m,n);
    return 0;


    
    printf("\nthe given matrix is:\n");
       for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    printf("\nthe transposed matrix is \n");
       for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("%d\t",arr[j][i]);
        }
        printf("\n");
    }
    return 0;
}