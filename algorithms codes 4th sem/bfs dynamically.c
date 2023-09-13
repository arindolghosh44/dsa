#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int **a,*q,*visited,f,r,n;
void main()
{
    int i,j,v;
    void bfs(int );
    f=r=-1;
    printf("\n enter the number of list:");
    scanf("%d",&n);
    visited=(int *)malloc(n*sizeof(int));
     q=(int *)malloc(n*sizeof(int));
    for(i=1;i<=n;i++)
        visited[i]=0;
    a=(int **)malloc(n*sizeof(int*));
    for(i=1;i<=n;i++)
        a[i]=(int *)malloc(n*sizeof(int));
        printf("\n enter the list elements:");
        for(i=1;i<=n;i++)
            for(j=1;j<=n;j++)
            scanf("%d",*(a+i)+j);
        printf("\n enter the starting vertixs:");
        scanf("%d",&v);
        f=r=0;
        q[r]=v;
         printf("\n the bfs traversal is:");
        visited[v]=1;
        printf(" \t %d",v);

        bfs(v);
}
void bfs(int v)
{
    int i;
    for(i=1;i<=n;i++)
    {
        if(a[v][i]!=0 && visited[i]==0)
        {
            r++;
            q[r]=i;
            visited[i]=1;
            printf(" %d",i);

        }
    }
    f++;
    if(f<=r)
        bfs(q[f]);
}

