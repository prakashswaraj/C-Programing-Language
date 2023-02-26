
/*
    Program to implement the interpolation search ...
*/

#include<stdio.h>
int main()
{
    int pos,h,l,val,n,i;
    printf("\nenter the size of the array:: ");
    scanf("%d",&n);
    int arr[n];
    printf("\nenter the val::");
    scanf("%d",&val);
    printf("\n enter the elements of the array:: ");
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    l=0;
    h=n-1;
    while(l<=h)
    {
        pos=(l+((val-arr[l])*(h-l))/(arr[h]-arr[l]));
        if(val==arr[pos])
        {
            printf("\n%d is the location",pos);
            break;
        }
        else if(val>arr[pos])
        {
            l=pos+1;
        }
        else
        {
            h=pos-1;
        }

    }
    if(l>h)
    printf("\n element is not present:: ");
    return 0;

}