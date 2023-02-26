
/*
    Program to check whether the number is armstrong or not...
*/

#include<stdio.h>
int main()
{
    int num,sum=0,x,n;
    printf("enter the number: ");
    scanf("%d",&num);
    n=num;
    while(num!=0)
    {
        x=num%10;
        sum=(sum+(x*x*x));
        num=num/10;
    }
    printf("\n the armstrong number is %d ",sum);
    if(sum==n)
    printf("\n the number is armstrong.\n");
    else
    printf("\n not an armstrong number.");
    return 0;
}