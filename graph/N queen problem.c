#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<conio.h>
int board[20],count;
void main()
{
    int i,j,n;
void queen(int row ,int n);
    printf("\n \n Enter the number of queens:\n");
    scanf("%d",&n);
    queen(1,n);

}
void print(int n)
{
    int i,j;
    printf("\n \n solution %d:\n\n",++count);
    for(i=1;i<=n;++i)
    {
        printf("\t %d",i);
    }
     for(i=1;i<=n;++i)
     {
         printf("\n\n%d",i);
         for(j=1;j<=n;++j)
         {
             if(board[i]==j)
                printf("\t Q");
             else
                printf("\t-");
         }
     }
}
int place(int row,int col)
{
    int i;
    for(i=1;i<=row-1;++i)
    {
        if(board[i]==col)
            return 0;



else if(abs(board[i]-col)==abs(i-row))
            return 0;

    }
    return 1;
}

void queen(int row,int n)
{
    int col;
    for(col=1;col<=n;++col)
    {
        if(place(row,col))
        {
            board[row]=col;
            if(row==n)
                printf(n);
            else
                queen(row+1,n);
        }
    }
}
