
/*
    Program to implement the linear search ....
*/

#include<stdio.h>
int main()
{
    int i,val,n;
    
    printf("\n enter the no of  elements of the array\n\n");
    scanf("%d",&n);
    int arr[n];
    printf("enter tne vale\n");
    scanf("%d",&val);
    printf("\n enter the elements of the array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(val==arr[i])
        {
            printf("\n the location is %d",i);
            break;
        }
    }
    if(i==n)
    printf("\n the element is not present in the list: ");
    
    return 0;

}