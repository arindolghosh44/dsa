#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<stdbool.h>
#define v 5
int minkey(int key[],bool mstset[])
{
    int min=INT_MAX,min_index;
    int V;
    for(V=0;V<v;V++)
        if(mstset[V]==false && key[V]<min)
        min=key[V],min_index=V;
    return min_index;

}
int PrimMst(int graph[v][v],int parent[v])
{
    int i;
    printf("Edge\t weight\n");
    for(i=1;i<v;i++)
        printf("%d-%d \t %d \n",parent[i],i,graph[i][parent[i]]);
}
void primset(int graph[v][v])
{
    int parent[v];
    int key[v];
    bool mstset[v];
    int i;
    for(i=0;i<v;i++)
        key[i]=INT_MAX,mstset[i]=false;
    key[0]=0;
    parent[0]=-1;
    int count;
    for(count=0;count<v-1;count++)
    {
        int u=minkey(key,mstset);
        mstset[u]=true;
        int V;
        for(V=0;V<v;V++)
            parent[V]=u,key[u]=graph[u][V];

    }
    PrimMst(graph,parent);

}
void main()
{
    int graph[v][v]={{0,2,0,6,0},{2,0,3,8,5},{0,3,0,0,7},{6,8,0,0,9},{0,5,7,9,0}};
    primset(graph);

}
