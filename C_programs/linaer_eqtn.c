
/*
    Program to check whether the linear equations in two variable 
    will give the unique solution , no solution or infinite solution...
*/

#include<stdio.h>
int main()
{
    float a1,a2,b1,b2,c1,c2,x,y;
    char exp1,exp2;
    printf("\n enter the first linear equation : \n");
    scanf("%c",&exp1);
    printf("\n enter the second linear equation : \n");
    scanf("%c",&exp2);
    printf("\n enter the coefficient of respective linear equations: \n\n");
    scanf("%f%f%f%f%f%f",&a1,&a2,&b1,&b2,&c1,&c2);
    if(a1/a2==b1/b2&&a1/a2==c1/c2&&b1/b2==c1/c2)
    {
        printf("\nINFINITE SOLUTION!!");
    }
    else if(a1/a2==b1/b2&&a1/a1!=c1/c2)
    printf("\n NO SOLUTION!!");
    if(a1/a2!=b1/b2)
    {
        printf("\n unique solution will occur!!\n");
        x=(b1*c2-b2*c1)/(a1*b2-a2*b1);
        y=(a1*c2-a2*c1)/(a1*b2-a2*b1);
        printf("\n the value of x = %f\n",x);
        printf("\n the value of y = %f\n",y);
    }

}