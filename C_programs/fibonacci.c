
/*
     Program to perform the fibonacci series...
*/

#include<stdio.h>
int fib(int);
int main()
{
    int i,n,result;
    printf("\nenter the no.of terms in the series: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        result=fib(i);
        printf(" %d\t",result);
    }
    return 0;
}
int fib(int n)
{
    if(n==0)
    return 0;
    else if(n==1)
    return 1;
    else
    return (fib(n-1)+fib(n-2));
}