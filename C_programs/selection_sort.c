
/*
    Program to implement the selection sort...
*/

#include<stdio.h>
int main()
{
    int i,n,j,min,temp;
    printf("\n enter the size of the array:: ");
    scanf("%d",&n);
    int arr[n];
    printf("\n enter the elements of the array::");
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(i=0;i<n;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min])
            min=j;
        }
        if(min!=i)
        {
            temp=arr[min];
            arr[min]=arr[i];
            arr[i]=temp;
        }
    }
    for(i=0;i<n;i++)
    printf("%d\t",arr[i]);
    return 0;


}