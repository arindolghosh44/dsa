#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
    int **mat,row,col,i,j;
    printf("\n How many rows you want to create:");
    scanf("%d",&row);
    mat=(int **)malloc(row*sizeof(int *));
    printf("\n How many columns you want to create:");
    scanf("%d",&col);
    for(i=0;i<row;i++)
    {
        mat[i]=(int *)malloc(col*sizeof(int));
    }
    printf("\n enter values in matrix:");
    for(i=0;i<row;i++)
        for(j=0;j<col;j++)
       // scanf("%d",&mat[i][j]);
       scanf("%d",*(mat+i)+j);
        printf("\n the list is:");
     for(i=0;i<row;i++){
        for(j=0;j<col;j++)
       // printf("\t %d",mat[i][j]);
       printf("\t %d",*(*(mat+i)+j));
        printf("\n");
     }
}
