
/*
    Program to find the sum of the digits of a number entered by the user...
*/

#include<stdio.h>
int main()
{
    int n,x,sum=0;
    printf("enter the number:");
    scanf("%d",&n);
    while(n!=0)
    {
        x=n;
        x=x%10;
        sum=sum+x;
        n=n/10;
    }
    printf("%d",sum);
    return 0;
}