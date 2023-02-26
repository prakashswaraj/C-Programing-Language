
/*
    Program to implement the dijkstra algorithm...
*/

#include<stdio.h>
int n,a[10][10],vis[10]={0};
void main()
{
    int v,i,j,ne,e=1,cost[10][10],d[10],min;
    printf("ente rhte no of vertices: ");
    scanf("%d",&n);
    printf("\nenter the adjacency matrix: ");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            scanf("%d",&a[i][j]);
            if(a[i][j] == 0)
                cost[i][j]=999;
            else
                cost[i][j] = a[i][j];
        }
    }
    printf("\n enter the starting vertex: ");
    scanf("%d",&v);
    for(i=1;i<=n;i++)
    {
        d[i]=cost[0][i];
        d[v] = 0;
        vis[v] =1;
        while(e<n-1)
        {
            min = 999;
            for(i=1;i<=n;i++)
            
            if(d[i]<min && !vis[i])
            {
                min = d[i];
                ne = i;
            }
        } 
        vis[ne] = 1;
        for(i=1;i<=n;i++)
        {
            if(!vis[i])
            {
                if(min + cost[ne][i]<d[i])
                d[i] = min + cost[ne][i];
            }
        }
        e++;   
    }
    for(i=1;i<=n;i++)
    {
        if(i!=v)
            printf("\n distance from starting vertex to %d , %d",i,d[i]);
    }
}