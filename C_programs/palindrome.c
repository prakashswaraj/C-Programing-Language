
/*
    Program to check the number is palindrome or not ...
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
        sum=sum*10+x;
        num=num/10;
    }
    printf("\nthe palindrome number is %d",sum);
    if(sum==n)
    printf("\nthe number is palindrome.\n");
    else
    printf("\nnot a palindrome number.\n");
    return 0;
    
}