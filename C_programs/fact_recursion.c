
/*
    Program to find the factorial of a number using recursion....
*/

#include <stdio.h>
double fact(double);
int main()
{
    double num, factorial;
    printf("\n enter the number: ");
    scanf("%lf",&num);
    factorial=fact(num);
    printf("\n the factorial of the number is %lf",factorial);
    return 0;
}
double fact(double num)
{
    if(num==0)
    return 1;
if(num>=1)
    {
        return (num*fact(num-1));
    }
}