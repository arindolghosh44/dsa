#include<stdio.h>
#include<stdlib.h>
void main()
{
    int a[100][100],i,j,n,sumr,suml;
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
           printf("\t %d",a[i][j]);
       }
       printf("\n");
    }
    sumr=0;
    for(i=0;i<n;i++)
        sumr=sumr+a[i][i];
    for(i=0;i<n;i++)
        suml=suml+a[i][n-i];
    printf("\n The sum of right diagonal element:%d",sumr);
     printf("\n The sum of left diagonal element:%d",suml);






}
