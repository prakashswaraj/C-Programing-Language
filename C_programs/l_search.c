
/*
    Program to implement the linear search ...

*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,n,num;
    printf("\n ente rthe size of the array: ");
    scanf("%d",&n);
    int arr[n];
    printf("\n enter the elements of the array: ");
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    printf("\n enter the element to search: ");
    scanf("%d",&num);
     i=0;
    while(i!=n-1)
    {
        if(arr[i]==num)
        return i;
        else
        i++;
    }
    if(i==n)
    printf("\n element is not present in the array.");
}