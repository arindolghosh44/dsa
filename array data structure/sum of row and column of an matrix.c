 #include<stdio.h>
#include<stdlib.h>
void main()
{
    int a[100][100],i,j,n,sumr[100],sumc[100];
    printf("\n Enter the size:");
    scanf("%d",&n);
    printf("\n Enter the data of array:");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
        printf("elements-[%d][%d]",i,j);
        scanf("%d",&a[i][j]);
        }
    }
    printf("\n the data are of the array:");
    for(i=0;i<n;i++)
    {

       for(j=0;j<n;j++)
       {
           printf(" %d",a[i][j]);
       }
       printf("\n");
    }
    for(i=0;i<n;i++)
    {
        sumr[i]=0;

        for(j=0;j<n;j++)
        {
            sumr[i]=sumr[i]+a[i][j];

        }
    }
     for(i=0;i<n;i++)
    {
        sumc[i]=0;

        for(j=0;j<n;j++)
        {
            sumc[i]=sumc[i]+a[j][i];

        }
    }

    printf("\n The sum of row and column of the matrix");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf(" %d",a[i][j]);
            printf("%d",sumr[i]);
            printf("\n");
        }
        for(j=0;j<n;j++)
        {
            printf(" %d",sumc[j]);
            printf("\n \n");

        }

    }





}
