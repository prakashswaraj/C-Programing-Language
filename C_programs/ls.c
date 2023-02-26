
/*
     Program to implement the linear search in best time complexity....
*/

#include<stdio.h>
int main()
{
    
    int n,i,val;
    int arr[n];
    printf("\n enter the size of the array::\n");
    scanf("%d",&n);
    printf("\n enter the val::");
    scanf("%d",&val);
    printf("\n enter the elements:: ");
    for ( i = 0; i < n; i++)
    {
       scanf("%d",&arr[i]); /* code */
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]==val)
        {
            printf("%d",i);
            break;
        }
        if(i==n)
        printf("element is not present:: ");
    }
    return 0;
    

}