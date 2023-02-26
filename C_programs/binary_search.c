/*
    Program to perform binary search...
*/

#include<stdio.h>
int main()
{
    int i,val,n,l,r,mid=0;
    printf("\n enter the size of the array:: ");
    scanf("%d",&n);
    int arr[n];
    printf("\n enter the value: ");
    scanf("%d",&val);
    printf("\n enter the elements of the array:: ");
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    l=0;
    r=n-1;
        while(l<=r)
        {
            mid=(l+r)/2;
            if(val==arr[mid])
            {
            printf("the value is present at %d",mid);
            break;
            }
            else if(val>arr[mid])
            l=mid+1;
            else
            r=mid-1;
            }
            if(l>r)
            printf("value is not present");
        return 0;
}