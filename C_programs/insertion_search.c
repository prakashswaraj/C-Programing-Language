

/*
    Program to implement the insertion search ....
*/

#include<stdio.h>
void insertion_sort(int arr[]);
int main()
{
    int i,n,result;
    printf("\n enter the size of the array: ");
    scanf("%d",&n);
    int arr[n];
    printf("\n enter the elements of the array::");
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    insertion_sort(arr);
      for(i=0;i<n;i++)
    printf("%d\t",arr[i]);
    return 0;

}
    void insertion_sort(int arr[])
    {
        int i,n,j,temp;
    for(i=1;i<n;i++)
    {
        temp=arr[i];
        j=i-1;
        while(j>=0&&arr[j]>temp)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }
    } 
