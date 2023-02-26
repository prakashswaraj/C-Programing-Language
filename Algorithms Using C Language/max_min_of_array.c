
/*
        Program to find the max and minimum of an array....
*/

#include<stdio.h>
int arr[20];
int main()
{
    int i,n,max,min;
    printf("\n enter the size of the array: ");
    scanf("%d",&n);
    printf("\n enter the elements of th earray: ");
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    max = arr[0];
    for(i=1;i<n;i++)
    {
        if(arr[i]>max)
        max = arr[i];
    }
    printf(" The max element is :- %d\n",max);
    min = arr[0];
    for(i=1;i<n;i++)
    {
        if(arr[i]<min)
        min = arr[i];
    }
    printf("The min element is :- %d",min);
    return 0;
}