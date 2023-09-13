#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
void main()
{
    system("color 0b");
    int a[20][20],b[20][20],c[20][20],i,j,r1,r2,c1,c2,sum,k;
    printf("\n Enter the row size of the first array:");
    scanf("%d",&r1);
     printf("\n Enter the column size of the first array:");
    scanf("%d",&c1);
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("elements-[%d][%d]:",i,j);
            scanf("%d",&a[i][j]);
        }
    }
     printf("\n Enter the row size of the second array:");
    scanf("%d",&r2);
     printf("\n Enter the column size of the second array:");
    scanf("%d",&c2);
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("elements-[%d][%d]:",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    printf("\n the first array:");
     for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
           printf(" %d",a[i][j]);
        }
        printf("\n");
    }
    printf("\n the second array:");
     for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
           printf(" %d",b[i][j]);
        }
        printf("\n");
    }
    if(c1==c2)
    {
        sum=0;
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                for(k=0;k<r1;k++)
                {
                    sum+=a[i][k]*b[k][j];
                }
                c[i][j]=sum;
                sum=0;
            }
        }
        printf("\n The product of the array:");
         for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                printf(" %d",c[i][j]);
            }
            printf("\n");
            Beep(750,800);
        }

    }
    else
        printf("\n The multiplication not posible");


}
