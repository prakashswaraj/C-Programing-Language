
/*
        Program to find the chain matrix...
*/

#include<stdio.h>
#include<limits.h>
#define INFY 9999
long int m[20][20];
int p[20],i,j,n;
int s[20][20];
void printoptimal(int i ,int j)
{
    if(i==j)
    {
        printf("A%d",i);
    }
    else
    {
        printf("(");
        printoptimal(i,s[i][j]);
        printoptimal(s[i][j]+1,j);
        printf(")");
    }
}

void matmultiply(void)
{
    long int q;
    int k;
    for(i=n;i>0;i--)
    {
        for(j=1;j<=n;j++)
        {
            if(i==j)
            {
                m[i][j]=0;
            }
            else
            {
                for(k=i;k<j;k++)
                {
                    q = m[i][k]+m[k+1][j]+p[i-1]*p[k]*p[j];
                    if(q<m[i][j])
                    {
                        m[i][j]=q;
                        s[i][j]=k;
                    }
                }
            }
        }
    }
}

int matrixchainorder(int p[] ,int i,int j)
{
    if(i==j)
    return 0;
    int k;
    int min = INT_MAX;
    int count;
    for(k=i;k<j;k++)
    {
        count = matrixchainorder(p,i,k) + matrixchainorder(p,k+1,j)+p[i-1]*p[k]*p[j];
        if(count<min)
        {
            min = count;
        }
    }
    return min;
}
void main()
{
    int k;
    printf("enter the no. of elements: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=i+1;j<=n;j++)
        {
            m[i][j]=0;
            m[i][j]=INFY;
            s[i][j]=0;
        }
    }
    printf("enter the dimension:");
    for(k=0;k<=n;k++)
    {
    printf("P%d",k);
    scanf("%d",&p[k]);
    }
    matmultiply();
    printf("cost matrix\n");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf("m[%d][%d] : %d" , i,j,m[i][j]);
        }
        printf("\n");
    }
    printf("s matrix \n");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf("s[%d][%d]: %d" ,i,j,s[i][j]);
        }
        printf("\n");
    }
    i=1;j=n;
    printf("\n multiply sequence: ");
    printoptimal(i,j);
    printf("\n minimum no. of multiplication is :  %d" , matrixchainorder(p,1,n));
}