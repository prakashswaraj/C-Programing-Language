

/*
    Program to implement the jump search using function.....
*/

#include<stdio.h>
#include<math.h>
int jump_search(int arr[],int low,int high,int val,int n)
{
    int step,i;
    step=sqrt(n);
    for(i=0;i<step;i++)
    {
        if(val<arr[step])
        {
            high=step-1;
        }
        else
        low=step+1;
    }
    for(i=low;i<=high;i++)
    {
    
        if(val==arr[i])   
        return i; 
    }
     return -1;
}
int main()
{
    int low,high,val,n,i,pos;
    printf("\n enter the size of the array:: ");
    scanf("%d",&n);
    int arr[n];
    printf("\n enter the value:: ");
    scanf("%d",&val);
    printf("\n enter the elements of the array:: ");
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    pos=jump_search(arr,0,n-1,val,n);
    if(pos==-1)
    printf("\n the value is not present: ");
    else
    printf("the value %d is present at %d ",val,pos);
    return 0;


}