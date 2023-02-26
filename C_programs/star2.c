
/*
    Program to print the star pattern...
*/

#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=7;j++)
        {
            if(j>=5-i&&j<=3+i)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
    for(i=5;i<=7 ;i++)
    {
        for(j=1;j<=7;j++)
        {
            if(j>=((2*i-6)/2)&&j<=6-i)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}