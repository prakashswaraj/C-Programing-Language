
/*
    Program to print he star pattern ....
*/
#include<stdio.h>
int main()
{
    int n,i,j,k;
    printf("\n enter the no of rows: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=i;j<n;j++)
        printf(" ");
    for(k=1;k<=n;k++)
    printf("*");
    printf("\n");
    }

}