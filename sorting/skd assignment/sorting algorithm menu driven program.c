#include<stdio.h>
#include<stdlib.h>
int a[20],n;
void input()
{
   int i;
printf("\n Enter the size of the array:");
scanf("%d",&n);
printf(" \n Enter the elements of the array:");
for(i=1;i<=n;i++)
{
    printf("element-[%d]",i);
    scanf("%d",&a[i]);
}
}
void display()
{
    int i;
    printf(" \n The elements of the array is:");
    for(i=1;i<=n;i++)
        printf(" %d",a[i]);
}
void unsort()
{
    int temp,i,j;
    for(i=1;i<=n/2;i++)
    {
        for(j=(n/2+1);j<=n;j++)
        {
          temp=a[i];
          a[i]=a[j];
          a[j]=temp;
        }
    }


}
void bubblesort()
{
    int i,j,temp,flag;
    for(i=1;i<=n;i++)
{
    flag=1;
    for(j=1;j<=n-i;j++)
    {
        if(a[j]>a[j+1])
        {
            flag=0;
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;

        }
    }
    if(flag==1)
        break;
}
}
void insertionsort()
{
    int i,j,temp;
    for(i=2;i<=n;i++)
{
    temp=a[i];
    j=i-1;
  while(j>=1 && a[j]>temp)
  {
      a[j+1]=a[j];
      j--;
  }
  a[j+1]=temp;
}
}
void selectionsort()
{
    int i,min,j,temp;
    for(i=1;i<=n-1;i++)
    {
    min=i;
    for(j=i+1;j<=n;j++)
    {
        if(a[j]<a[min])
        {
           min=j;
        }
    }
    if(min!=i)
    {
         temp=a[i];
            a[i]=a[min];
            a[min]=temp;
    }
   }
}
void main()
{
    int ch;
    while(1)
    {
        printf("\n 1.input \n 2.display \n 3.unsort \n 4.bubblesort \n 5.insertionsort \n 6.selection sort \n 7.Exit");
        printf("\n Enter your choice:");
        scanf(" %d",&ch);
        switch(ch)
        {
        case 1:
            input();
            break;
        case 2:
            display();
            break;
        case 3:
            unsort();
            break;
        case 4:
            bubblesort();
            break;
        case 5:
            insertionsort();
            break;
        case 6:
            selectionsort();
            break;
        case 7:
            exit(0);
        default:
            printf("\n wrong entry");
        }
    }
}
