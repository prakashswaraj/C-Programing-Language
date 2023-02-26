

/*
    Program to implement the heap sort using heapify and max heap...

*/

#include<stdio.h>
void maxheapify(int a[],int ,int);
void heapsort(int a[],int);
void maxheap(int a[],int beg,int end)
{
    int i;
    for(i=end/2;i>=beg;i--)
    maxheapify(a,i,end);
}
void maxheapify(int a[],int f,int size)
{
    int largest=f,l=2*f,r=2*f+1,temp;
    if(l<=size&&a[l]>a[largest])
    largest=l;
    if(r<=size&&a[r]>a[largest])
    largest=r;
    if(f!=largest)
    {
        temp=a[f];
        a[f]=a[largest];
        a[largest]=temp;
        maxheapify(a,largest,size);
    }

}
int main()
{
    int n,i;
    printf("\n enter the size of the array:: ");
    scanf("%d",&n);
    int a[n];
    printf("\n enter the elements of the array:: ");
    for(i=1;i<=n;i++)
    scanf("%d",&a[i]);
    maxheap(a,1,n);
    heapsort(a,n);
    printf("\n the sorted array is :: ");
    for(i=1;i<=n;i++)
    printf("\t%d",a[i]);
    return 0;
}
void heapsort(int a[],int size)
{
    int i,temp;
    for(i=size;i>=2;i--)
    {
        temp=a[1];
        a[1]=a[i];
        a[i]=temp;
        maxheapify(a,1,i-1);
    }

}