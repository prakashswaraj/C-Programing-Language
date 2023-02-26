
/*
     Program to find the no. of repeataion of each element of an array....
*/

#include<stdio.h>
int main(){
    int n,i,j,count = 1;
    printf("enter the size: ");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements of the array: ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count == arr[i]){
            printf("%d\t",count);
        }
        while(count!=1){
            count--;
        }
    }
    return 0;
}