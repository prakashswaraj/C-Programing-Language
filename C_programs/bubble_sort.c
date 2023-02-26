
/*
    Program to implement bubble sort...
*/
#include<stdio.h>
int main()
{
    int i,j,n,temp,flag;
    printf("\n enter the size of the array: ");
    scanf("%d",&n);
    int arr[n];
    printf("\n enter the elements of the array:\n ");
    for (i=0;i<n;i++)  
        scanf("%d",&arr[i]);
    for(i=0;i<n-1;i++)
    {
        flag=0;
        for(j=0;j<n-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                flag=1;
            }
        }
        if(flag==0)
        break;
    }
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    return 0;
}