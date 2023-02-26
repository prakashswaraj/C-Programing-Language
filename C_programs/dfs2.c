
/*
     Program to implement the dfs conncept...
*/

#include<stdio.h>

int arr[20][20],s[20],visited[20],i,j,n,top=-1;
void dfs(int);

void main()
{
    int v;
    printf("\n enter the no of vertices: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        s[i]=0;
        visited[i]=0;
    }
    printf("\n enter the adjacency matrix: ");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        scanf("%d",&arr[i][j]);
    }
    printf("\n enter the starting vertex: ");
    scanf("%d",&v);
    dfs(v);
    printf("\n the reachable nodes are: ");
    for(i=1;i<=n;i++)
    {
        if(visited[i])
        printf("%d\t",i);
    }
}

void dfs(int v)
{
    for(i=1;i<=n;i++)
    {
        if(arr[v][i] && !visited[i])
        s[++top] = i;
    }
    if(top!=-1)
    {
        visited[s[top]]=1;
        dfs(s[top--]);
    }
}
