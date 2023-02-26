
/*
    Program to reverse the element of the array...

*/

#include<stdio.h>
int main()
{
    int n,i;
    printf("\n enter the size of the array: ");
    scanf("%d",&n);
    int arr1[n],arr2[n];
    printf("enter the elements of the array: ");
    for(i=0;i<n;i++)
    scanf("%d\t",&arr1[i]);
    for(i=0;i<n;i++)
    {
        arr2[i]=arr1[(n-1)-i];
    }
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr2[i]);
    }
    return 0;
}