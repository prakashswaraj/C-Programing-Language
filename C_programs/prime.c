
/*
    Program to check whether a number is prime or not ....
*/

#include<stdio.h>
int main()
{
    int num,count=0,i;
    printf("enter the number: ");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        if(num%i==0)
        count++;
    }
    if(count==2)
    printf("%d is a prime number",num);
    else
    printf("%dis not a prime number.",num);
    return 0;

}

