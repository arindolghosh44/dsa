#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
int a[20][20],n;
int visited[20];
void DFS(int v)// DEPTH FIRST SERACH
{
    int i;
    for(i=0;i<n;i++)
    {
        if(a[v][i]!=0 && visited[i]==0)
        {

            visited[i]=1;
            printf(" %d ",i);
            DFS(i);
        }
    }
}
void main()
{
    int i,j,v;
    system("color 01");
    printf("\n Enter the number of vertexes:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        visited[i]=0;
    }
    printf("\n Enter the data in matrix format:");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }

    }
    printf("\n Enter the first vertex:");
    scanf("%d",&v);
    visited[v]=1;
    printf("\n The DFS traversal is:");
    printf("\t %d",v);
    DFS(v);
}
