
/*
    Program to find the root of the quadratic equation
    and to check whether the roots are real , imaginary ...
*/

#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    float d;
    printf("\n enter the value of coeff \n");
    scanf("%d%d%d",&a,&b,&c);
    d=(b*b-4*a*c);
    printf("\n %d",d);
    if(d==0)
    printf("roots are same ");
    else
    { 
    if(d>0)
    {
        float r1=(-b+sqrt(d))/2*a;
        float r2=(-b-sqrt(d))/2*a;
        printf("%f/t%f",r1,r2);
    }
    else 
    {
        printf("\n roots are imaginary ");
    }
    }
    return 0;
}