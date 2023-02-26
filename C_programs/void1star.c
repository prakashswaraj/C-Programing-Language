/*
    Program to print the star pattern.
*/

#include<stdio.h>
int main()
{
    int i,j,k=0,n;
    printf("rows and coloumn are same.\n");
    printf("enter the no of rows in odd no. form: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        i<=(n/2+1)?k++:k--;
        for(j=1;j<=n;j++)
        {
            if(j<=(n/2+2)-k||j>=(n/2)+k)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
    return 0;

}