
/*
        Program to implement breadth first search....
*/

#include<stdio.h>
int arr[20][20],q[20],visited[20]={0},f=0,r=-1,n,v,i,j;
void bfs(int);
int main()
{
    printf("\n enter the no of nodes: ");
    scanf("%d",&n);
    printf("\n enter the starting vertex: ");
    scanf("%d",&v);
    printf("\n enter the adjacency matrix: ");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        scanf("%d ",&arr[i][j]);
        printf("\n");
    }
 
    bfs(v);
    for(i=0;i<n;i++)
    {
        if(visited[i])
        printf("%d",i);
    }
    return 0;
}

void bfs(int v)
{
    for(i=0;i<n;i++)
    {
        if(arr[v][i] && !visited[i])
        q[++r] = i;
    }
    if(f<=r)
    {
        visited[q[f]] = 1;
    }
}   