#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>
int i,j,k,a,b,u,v,n,ne=1;
int min,mincost=0,*cost,*parent;
int find(int);
int uni(int,int);
void main()
{
    system("color 05");
    printf("\n Implementation of kruskal algorithm:");
    printf("\n Enter the number of vertexes:");
    scanf("%d",&n);
    printf("\n Enter the cost adjacency matrix:");
     parent=(int *)malloc(n*sizeof(int));
    cost=(int **)malloc(n*sizeof(int*));
    for(i=1;i<=n;i++)
        cost[i]=(int *)malloc(n*sizeof(int));
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            scanf("%d",*(cost+i)+j);
            if((*(cost+i)+j)==0)
                (*(cost+i)+j)=999;
        }
    }
    printf("\n The edges of minimum cost spanning tree are:");
    while(ne<n)
    {
        for(i=1,min=999;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                if(cost[i][j]<min)
                {
                    min=cost[i][j];
                    a=u=i;
                    b=v=j;
                }
            }
        }
        u=find(u);
        v=find(v);
        if(uni(u,v))
        {
            Beep(900,1200);
            printf("%d edges(%d , %d)= %d \n",ne++,a,b,min);

            mincost+=min;
        }
        cost[a][b]=cost[b][a]=999;
    }
    printf("\n \t Minimum cost=%d\n",mincost);
}
int find(int i)
{
    while(parent[i])
        i=parent[i];
    return i;
}
int uni(int i,int j)
{
    if(i!=j)
    {
        parent[j]=i;
        return 1;
    }
    return 0;
}
