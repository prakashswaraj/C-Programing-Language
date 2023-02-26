
/*
    Program to implement the quick sort...

*/

#include<stdio.h>
int partition(int a[],int lb,int ub);
void qs(int a[],int lb,int ub);
int main()
{
    int n,i;
    printf("\n enter the size of the array:: ");
    scanf("%d",&n);
    int a[n];
    printf("\n enter the elements of the array:: ");\
    for(i=0;i<n;i++)
    scanf("%d",&a [i]);
    qs(a,0,n-1);
    printf("\n the sorted element is::\n");
    for(i=0;i<n;i++)
    printf("%d\t",a[i]);
    return 0;
}
void qs(int a[],int lb,int ub)
{
    int loc;
    if(lb<ub)
    {
        loc=partition(a,lb,ub);
        qs(a,lb,loc-1);
        qs(a,loc+1,ub);
    }
}
int partition(int a[],int lb,int ub)
{
    int start,end,temp,pivot;
    start=lb,end=ub;
    pivot=a[lb];
    while(start<end)
    {
        while(a[start]<=pivot)
        {
            start++;
        }
        while(a[end]>pivot)
        {
            end--;
        }
    
    if(start<end)
    {
        temp=a[start];
        a[start]=a[end];
        a[end]=temp;
    }
    }
    temp=a[lb];
    a[lb]=a[end];
    a[end]=temp;
    return end;

}

