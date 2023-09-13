#include<stdio.h>
#include<stdlib.h>
void main()
{
    int a[100][100],i,j,n;
    printf("\n Enter the size:");
    scanf("%d",&n);
    printf("\n Enter the data of the  array:");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++){
        printf("elements-[%d][%d]",i,j);
        scanf("%d",&a[i][j]);
        }
    }
    printf("\n  the data are of the  array:");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("\t %d",a[i][j]);
        }
        printf("\n");


    }
    printf("\n  the data are of the transpose  array:");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("\t %d",a[j][i]);
        }
        printf("\n");


    }






    }
