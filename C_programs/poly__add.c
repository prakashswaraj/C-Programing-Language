
/*
    Program to add the two polynomials...
*/

#include<stdio.h>
int main()
{
    int arr1[10],arr2[10],i,j,k,n,m,l;
    int sum[10];
    printf("\nenter the degree of the first polynomial and second polynomial:  ");
    scanf("%d%d",&n,&m);
    if(n>m)
    l=n;
    else
    l=m;
    printf("enter the cofficient of first polynomial: ");   
    for(i=l;i>=0;i--)
    {
        printf("x^%d :  ",i);
         scanf("%d",&arr1[i]);
    }
    printf("enter the coefficient of second polynomial: ");  
    for(j=l;j>=0;j--)
    {
        printf("x^%d :  ",j);
        scanf("%d",&arr2[j]);
    }
    for(k=l;k>=0;k--)
    {
        sum[k]=arr1[k]+arr2[k];
    }
    for(k=l;k>=0;k--)
    {
        printf("%d*x^%d + ",sum[k],k);
    }
    return 0;
    
}