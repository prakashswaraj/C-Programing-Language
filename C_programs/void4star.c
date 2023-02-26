
/*
    Program to print the star pattern ...
*/

#include<stdio.h>
int main()
{
    int i,j,n,m=0;
    printf("enter the no. of rows:");
    scanf("%d",&n);
    m=n+4;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            if(j>=i&&j<=4+i)
            {
                printf("*");
            }
            else
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}