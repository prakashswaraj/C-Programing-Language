
/*
    Program to implement the quick sort...
*/

#include<stdio.h>
int partition(int a[],int lb,int ub);
void quick_sort(int a[],int lb,int ub);
int main()
{
    int n,i,lb,ub;
    printf("\nenter the size of the array:: ");
    scanf("%d",&n);
    int a[n];
    printf("\n enter the elements of the array: ");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    quick_sort(a,0,n-1);
    printf("\n the sorted array is:: ");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}
void quick_sort(int a[],int lb,int ub)
{
    int location;
    if(lb<ub)
    {
        location=partition(a,lb,ub);
        quick_sort(a,lb,location-1);
        quick_sort(a,location+1,ub);
    }
}
int partition(int a[],int lb,int ub)
{
    int start,end,temp,location,flag;
    location=start=lb;
    end=ub;
    flag=0;
    while(flag!=1)
    {
        while(a[location]<=a[end]&&(location!=end))
        {
            end--;
        }
        if(location==end)
        flag=1;
        else if(a[location]>a[end])
        {
            temp=a[location];
            a[location]=a[end];
            a[end]=temp;
            location=end;
        }
        if(flag!=1)
        {
            while(a[location]>=a[start]&&(location!=start))
            start++;
            if(location==start)
            flag=1;
            else if(a[location]<a[start])
            {
                temp=a[location];
                a[location]=a[start];
                a[start]=temp;
                location=start;
            }
    
        }
    }
    return location;

}
