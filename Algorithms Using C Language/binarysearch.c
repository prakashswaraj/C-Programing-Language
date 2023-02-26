
/*
    Program to implement the binary search...
*/

#include<stdio.h>
int main()
{
    int i,j,n,val;
    printf("\n Enter the size of the array:");
    scanf("%d",&n);
    int arr[n];
    printf("\n Enter the elements of the array in a specific order: ");
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    printf("\n Enter the value to search: ");
    scanf("%d",&val);
    int start = 0, end = n-1,mid;
    
    for(i=0;i<n;i++)
    {
        mid = (start + end)/2;
        if(val==arr[mid])
        {
         printf("\n The location is %d",mid);
         break;
        }
        else if(val>arr[mid])
        start = mid+1;
        else
        end = mid - 1;
    }
   
    return 0;
}


#include<stdio.h>
int binary_search(int arr[] , int , int,int);
int main()
{
    int i,n,val,loc;
    printf("\n Enter the size of the array: ");
    scanf("%d",&n);
    int arr[n];
    printf("\n enter the elements of the array: ");
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    printf("\n enter the element to search: ");
    scanf("%d",&val);
    int start = 0,end = n-1;
    loc = binary_search(arr,val,start,end);
    printf(" The location is :- %d",loc);
    return 0;
}

int binary_search(int arr[],int val,int start,int end)
{  
    int mid;
    mid = (start+end)/2;
    if(val == arr[mid])
    return mid;
    else if(val > arr[mid])
    return binary_search(arr,val,mid+1,end);
    else
    return binary_search(arr,val,start,mid-1);
}