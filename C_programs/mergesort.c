
/*
    Program to implement the merge sort...
*/

#include<stdio.h>
void ms(int arr[],int lb,int ub);
void merge(int arr[],int lb,int mid,int ub);
int main()
{
    int n,lb,ub,mid,k;
    printf("\n enter the size of the array: ");
    scanf("%d",&n);
    int arr[n];
   lb=0;
   ub=n-1;
    printf("\n enter the elements of the array: ");
    for(lb=0;lb<=ub;lb++)
    scanf("%d",&arr[lb]);
    ms(arr,0,n-1);
  printf("\n the sorted array  is ::\n\n");
        for(lb=0;lb<=ub;lb++){
            printf("%d\t",arr[lb]);
        }
    return 0;
}

void merge(int arr[],int lb,int mid,int ub)
{
    int i,j,k,n;
    printf("\n enter the size of the array:");
    scanf("%d",&n);
    int b[n];
    i=lb;
    j=mid+1;
    k=lb;
    while(i<=mid&&j<=ub)
    {
        if(arr[i]<arr[j])
        {
            arr[k]=arr[i];
            i++;
        }
        else
        {
            b[k]=arr[j];
            j++;
        }
        k++;
    }
    if(i>mid)
    {
        while(j<=ub)
        {
            b[k]=arr[j];
            j++;k++;
        }
    }
    else
    {
        while(i<=mid)
        {
            b[k]=arr[i];
            i++;k++;
        }
    }
    
    for(i=lb;i<k;i++)
    {
        arr[i]=b[i];
    }   
}
void ms(int arr[],int lb,int ub)
{
    int mid;
    if(lb<ub)
    {
        mid=(lb+ub)/2;
        ms(arr,lb,mid);
        ms(arr,mid+1,ub);
        merge(arr,lb,mid,ub);
    }
}