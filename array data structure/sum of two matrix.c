#include<stdio.h>
#include<stdlib.h>
void main()
{
    int a[100][100],b[100][100],c[100][100];
    int n,i,j;
    printf("\n Enter the size of the array:");
    scanf("%d",&n);
    printf("\n Enter the first array element:");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("elements-[%d][%d]",i,j);
            scanf("%d",&a[i][j]);

        }
    }
     printf("\n Enter the second array element:");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("elements-[%d][%d]",i,j);
            scanf("%d",&b[i][j]);

        }
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            c[i][j]=a[i][j]+b[i][j];

        }
    }
    printf("\n  the first array element:");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {

            printf("\n %d",a[i][j]);

        }
        printf("\n");
    }


    printf("\n  the second array element:");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {

            printf(" \n %d",b[i][j]);

        }
        printf("\n");
    }
    printf("\n The sum of the array is:");

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {

            printf("\n %d",c[i][j]);

        }
        printf("\n");
    }




}
