#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
int a[20][20],n;
 int issparse();
 void main()
 {
     int i,j;
     printf("\n Enter the array size:");
     scanf("%d",&n);
     printf("\n Enter the data one by one:");
     for(i=0;i<n;i++)
     {
         for(j=0;j<n;j++)
         {
             printf("elements-[%d][%d]:",i,j);
             scanf("%d",&a[i][j]);
         }
     }
     printf("\n The data of the array is:");
     for(i=0;i<n;i++)
     {
         for(j=0;j<n;j++)
         {

             printf(" \t%d",a[i][j]);
         }
         printf("\n");
     }
     if(issparse())
        printf("the matrix is sparse matrix");
     else
        printf("the matrix is not sparse matrix");

 }
 int issparse()
 {
     int c=0,i,j;
      for(i=0;i<n;i++)
     {
         for(j=0;j<n;j++)
         {
            if(a[i][j]==0)
                c++;

         }

     }
     return (c>n);
 }
