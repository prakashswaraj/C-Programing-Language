
/*
    Program to implement bubble sort...
*/

#include<stdio.h>
int main()
{
    int i,n,j,temp,flag=0;
    printf("enter the size of the array: ");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements of the array: ");
    for(i=0;i<n;i++){
        scanf("%d",&arr [i]);
    }
    for(i=0;i<n;i++){
        for(j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                flag = 1;
                 temp = arr[j];
                arr[j]= arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    if(flag==0){
        printf("the array is sorted:");
    }
        printf("TThe sorted array is: \n");
        for(i=0;i<n;i++){
            printf("%d\t",arr[i]);
        }
        return 0;
}