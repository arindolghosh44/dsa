#include<stdio.h>
#include<stdlib.h>
void main()
{
    int a[100],i,j,n,max,min,t=0,p[100],r,sum[100];
    printf("\n Enter the size:");
    scanf("%d",&n);
    printf("\n Enter the data of the first array:");
    for(i=0;i<n;i++)
    {
        printf("elements-[%d]",i);
        scanf("%d",&a[i]);
    }
    printf("\n  the data are of the first array:");
    for(i=0;i<n;i++)
    {

        printf(" %d",a[i]);
    }

    printf("\n Enter the data of the first array:");
    for(i=0;i<n;i++)
    {
        printf("elements-[%d]",i);
        scanf("%d",&p[i]);
    }
    printf("\n  the data are of the first array:");
    for(i=0;i<n;i++)
    {

        printf(" %d",p[i]);
    }
    for(i=0;i<n;i++)
        sum[i]=a[i]+p[i];
    printf("\n  Array1 Array2 Array3 \n");
    for(i=0;i<n;i++)
    {

        printf("\n [%d]+[%d]=%d",a[i],p[i],sum[i]);
    }





    }
