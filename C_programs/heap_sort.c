
/*
    Program to implement the heap sort...
*/

#include<stdio.h>
void maxheap(int arr[],int ,int );
int heapsort(int arr[],int );
int main()
{
    int n,i;
    printf("\n enter the no of elememnts of the array:: ");
    scanf("%d",&n);
    int arr[n];
    printf("\n enter the elements of the array::");
    for(i=1;i<=n;i++)
    scanf("%d",&arr[i]);
    heapsort(arr,n);
    printf("\n the sorted array is ::");
    for(i=1;i<=n;i++)
    printf("%d\t",arr[i]);
    return 0;
}
int heapsort(int arr[],int n)
{
    int i,temp,res;
    for(i=n/2;i>=1;i--)
    {
        maxheap(arr,n,i);
    }
    for(i=n;i>=1;i--)
    {
        temp=arr[1];
        arr[1]=arr[i];
        arr[i]=temp;
        maxheap(arr,n,1);
    }
   return ;
}
void maxheap(int arr[],int n,int i)
{
    int temp;
    int largest=i;
    int left=2*i;
    int right=2*i+1;
    while(left<=n&&arr[left]>arr[largest])
    largest=left;
    while(right<=n&&arr[right]>arr[largest]);
    largest=right;
    if(largest!=i)
    {
        temp=arr[i];
        arr[i]=arr[largest];
        arr[largest]=temp;
        maxheap(arr,n,largest);
    }
    return ;
}