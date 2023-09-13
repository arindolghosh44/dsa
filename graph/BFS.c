#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
int a[20][20],f=-1,r=-1,n;
int q[20],visited[20];
void BFS(int v)// BREADTH FIRST SERACH
{
    int i;
    for(i=0;i<n;i++)
    {
        if(a[v][i]!=0 && visited[i]==0)
        {
            r++;
            q[r]=i;
            visited[i]=1;
            printf(" %d ",i);
        }
    }
    f++;
    if(f<=r)
        BFS(q[f]);
}
void main()
{
    int i,j,v;
    system("color 0b");
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
    f=r=0;
    q[r]=v;
    visited[v]=1;
    printf("\n The BFS traversal is:");
    printf("\t %d",v);
    BFS(v);
    if(r!=n-1)
        printf("\n BFS traversal not possible");
}
