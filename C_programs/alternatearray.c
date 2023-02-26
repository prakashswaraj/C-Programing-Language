
/*
    Program to find the sum of elements of odd positions or even positions
    based on the number of inputs entered by the user....
*/

#include<stdio.h>
int main(){
    int i,n,sum = 0;
    printf("enter the size: ");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elemnts  of the array: ");
    for(i=1;i<=n;i++){
        scanf("%d",&arr[i]);
    }
    if(n%2==1){
    for(i=1;i<=(n+1)/2;i++){
        sum = sum + arr[2*i-1];
    }
    printf("\n the sum is %d",sum);
    }
    if(n%2==0){
        for(i=1;i<=n/2;i++){
            sum = sum + arr[2*i-1];
        }
        printf("\nthe sum is %d",sum);
    }
    return 0;
    
}