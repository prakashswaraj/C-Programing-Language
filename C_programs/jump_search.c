

/*
    Program to implement the jump search ...
*/

#include<stdio.h>
int main()
{
    int i,val,js=2,n,h,l,jumpc=0;
    printf("\n enter the size of the array:: ");
    scanf("%d",&n);
    int arr[n];
    printf("\n enter the element");
    scanf("%d",&val);
    printf("\n ente the elements of the array: ");
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    l=0;
    h=js;
    while(h<=n-1)
    {
    if(val==arr[l])
    printf("%d",l);
    if(val==arr[h])
    printf("%d",h);
    if(val>arr[l]&&val>arr[h])
    {
        l=l+js;
        h=h+js;
    }
    }
    if(h==n)
    {
        for(i=l;i<=h;i++)
        {
            if(val==arr[i])
            {
                printf("%d is the location of the value:: ",i);
                break;
            }
        }
        if(i==h)
        printf("element is not present in the list: ");
    }
    return 0;


}