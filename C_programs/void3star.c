
/*
    Program to print the star  pattern...
*/

#include<stdio.h>
int main()
{
    int i,j,k=0,n,m;
    printf("\nenter the no. of rows: ");
    scanf("%d",&n);
    printf(" j represent the no. of coloumns: \n");
    m=n/2+1;
    for(i=1;i<=n;i++)
    {
        i<=m?k++:k--;
        for(j=1;j<=m;j++)
        {
            if(j<=k)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");    
    }
    return 0;
}