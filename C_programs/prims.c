/*
    Program to implemen the prims algorithm...
*/

#include<stdio.h>
int a[50][50],q[50],vis[50],n;
void main()
{
    int c=1,t=0;
    int v,i,j;
    printf("\n enter the no. of vertices");
    scanf("%d",&n);
    printf("enter the adjacency matrix");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n enter the starting node: ");
    scanf("%d",&v);
    vis[v]=1;
    int x,y;
    while(c<n)
    {
        int min = 999,x=0,y=0;
        for(i=0;i<n;i++)
        {
            if(vis[i])
            {
                for(j=0;j<n;j++)
                {
                    if(!vis[j]&&a[i][j])
                    {
                        if(min>a[i][j])
                        {
                            min = a[i][j];
                            x=i;
                            y=j;
                        }
                    }
                }
            }
        }
        printf("(%d,%d)",x,y);
        vis[y]=1;
        t = t + a[x][y];
        c++;
    }
    printf("\ntotal weight: %d" , t);
}