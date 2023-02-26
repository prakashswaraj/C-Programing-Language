/*
     Program to find the folded array sum and no. of foldings...
*/

#include<stdio.h>

int main()
{
    int n,i,j,count=0;
    printf("enter the size of the array: ");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements of the array: ");
    for(i=1;i<=n;i++){
        scanf("%d",&arr[i]);
    }
    if(n%2==1){
        for(i=1;i<=(n+1)/2;i++){
            if(i!=(n+1)/2){
                arr[i]=arr[i]+arr[n-i+1];
                count++;
            }
            printf(" %d\t",arr[i]);
        }
        printf("\nthe no of foldings: %d\n",count);
    }
    if(n%2==0){
        for(i=1;i<=(n+1)/2;i++){
            if(i<=(n+1)/2){
                arr[i]=arr[i]+arr[n-i+1];
                count++;
            }
            printf("%d\t",arr[i]);
        }
        printf("\n the no of foldings: %d",count);
    }
    return 0;
}