
/*
    Program to shuffle the elements of the array...
*/

#include<stdio.h>

int main(){
    int n,i,temp;
    printf("enter the size of the array: ");
    scanf("%d",&n);
    int arr[2*n];
    printf("enter the elements of the array: ");
    for(i=1;i<=2*n;i++){
        scanf("%d",&arr[i]);
    }

    for(i=1;i<=n;i++){
        arr[i+1] = arr[n+i];
        temp = arr[i];
        printf("%d\t",temp);
        printf("%d\t",arr[i+1]);
    }
    return 0;
}