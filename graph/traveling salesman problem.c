#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
int matrix[20][20],visited_cities[10],limit,cost=0;
int tsp(int c)
{
    int count,nearest_city=999;
    int minimum=999,temp;
    for(count=0;count<limit;count++)
    {
        if((matrix[c][count]!=0) && visited_cities[count]==0)
        {
if(matrix[c][count]<minimum)
    minimum=matrix[count][0]+matrix[c][count];
temp=matrix[c][count];
nearest_city=count;
        }
    }
    if(minimum!=999)
        cost=cost+temp;
    return nearest_city;
}
void minimum_cost(int city)
{
    Beep(900,567);
    int nearest_city;
    visited_cities[city]=1;
    printf("\t %d",city+1);
    nearest_city=tsp(city);
    if(nearest_city==999)
    {
        nearest_city=0;
        printf("\t %d",nearest_city+1);
        Beep(1200,900);
        cost=cost+matrix[city][nearest_city];
        return;
    }
    minimum_cost(nearest_city);
}
void main()
{
    int i,j;
    Beep(900,800);
    system("color 06");
    printf("\n Total number of cities:");
    scanf("%d",&limit);
    printf("\n Enter the cost matrix:");
    for(i=0;i<limit;i++)
    {
        printf("Enter %d element in row[%d]:\n",limit,i+1);
        for(j=0;j<limit;j++)
        {
            scanf("%d",&matrix[i][j]);
        }
        visited_cities[i]=0;
    }

    printf("\n_________PATH_______________:\t");
    minimum_cost(0);
    printf("\n MINIMUM _COST:\t");
    printf("\n \n \n");
    printf("%d\n",cost);
}
