
/*
    Program to implement the prims algorithm...
*/

#include<stdio.h>
int arr[50][50],n,i,j,visited[50];

int main()
{
    int v,c=0,t=0;
    printf("\n enter the no of vertex: ");
    scanf("%d",&n);
    printf("\n enter the adjacency matrix: ");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n enter the starting vertex:  ");
    scanf("%d",&v);
    visited[v] = 1;
    int x,y;
    while(c<n)
    {
        int min = 999,x=0,y=0;
        for(i=0;i<n;i++)
        {
                if(visited[i])
                {
                    for(j=0;j<n;j++)
                    {
                        if(arr[i][j] && visited[j])
                        {
                            if(min>arr[i][j])
                            {
                                min=arr[i][j];
                                x=i;
                                y=j;
                            }
                        }
                    }
                }   
        }
        printf("(%d,%d)",x,y);
        visited[y]= 1;
        t = t+arr[x][y];
        c++;
    }
    printf(" The total weight is: %d",t);
    return 0;
}