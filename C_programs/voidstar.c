/*
    Program to print the star pattern..
*/

#include<stdio.h>
int main()
{
    int i,j;
    for(j=1;j<=7;j++)
    {
    if(j<=4||j>=4)
    printf("*");
    else
    printf(" ");
    }
    for(i=2;i<=4;i++)
    {
        for(j=1;j<=7;j++)
        {
        if(j==i||j==8-i)
        printf("*");
        else
        printf(" ");
        }
        printf("\n");
    }
    return 0;
}
