
/*
        Program to implememnt the quicksort algorithm...
*/

#include<stdio.h>
int arr[20],n,i;start,end;
void quick_sort(int arr[],int,int);
int partition(int arr[],int , int);
int main()
{
    printf("\n enter the size of the array: ");
    scanf("%d",&n);
    printf("\n enter the elements of the array: ");
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    quick_sort(arr,0,n-1);
    for(i=0;i<n;i++)
    printf(" %d\t" ,arr[i]);
    return 0;
}
void quick_sort(int arr[],int start,int end)
{
    int loc;
    if(start>end)
    {
        loc = partition(arr,start,end);
        quick_sort(arr,start,loc-1);
        quick_sort(arr,loc+1,end);
    }
}

int partition(int arr[] , int start ,int end )
{
    int lb,ub,temp,pivot;
    lb = start;
    ub = end;
    pivot = arr[lb];
   
        while(lb<ub)
    {
        while(pivot<=arr[lb])
        {
            lb++;
        }
        while (pivot>arr[ub])
        {
            ub--;
        }
        if(lb<ub)
        {
            temp = arr[lb];
            arr[lb]=arr[ub];
            arr[ub] = temp;
        } 
    }    
        temp = arr[lb];
        arr[lb]= arr[end];
        arr[end] = temp;
        return end;  
}