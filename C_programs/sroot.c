
/*
    Program to find the nature of the roots of the quadratic equation...
*/

#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    printf("\n coeff");
    scanf("\n%d%d%d",&a,&b,&c);
    float d=(b*b-4*a*c);
    if(d==0)
    printf("\n roots are same ");
    else if(d>0)
    {
        float r1=(-b+sqrt(d))/2*a;
        float r2=(-b-sqrt(d))/2*a;
        printf("%f%f",r1,r2);
    }
    else if(d<0)
    {
    printf("\n roots are imaginary::");
    }
    return 0;
}