#include<stdio.h>
#include<stdlib.h>
/*void main()
{
    int a[20],i,n,j,temp;
printf("\n Enter the size of the array:");
scanf("%d",&n);
printf(" \n Enter the elements of the array:");
for(i=0;i<n;i++)
{
    printf("element-[%d]",i);
    scanf("%d",&a[i]);
}
for(i=0;i<n-1;i++)
{
    for(j=i+1;j<n;j++)
    {
        if(a[j]<a[i])
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
}
printf("\n The sorted array is:");
for(i=0;i<n;i++)
{
    printf(" %d",a[i]);
}
}*/
void main()//best time complexity
{
    int a[20],i,n,j,temp,min;
printf("\n Enter the size of the array:");
scanf("%d",&n);
printf(" \n Enter the elements of the array:");
for(i=0;i<n;i++)
{
    printf("element-[%d]",i);
    scanf("%d",&a[i]);
}
for(i=0;i<n-1;i++)
{
    min=i;
    for(j=i+1;j<n;j++)
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
printf("\n The sorted array is:");
for(i=0;i<n;i++)
{
    printf(" %d",a[i]);
}
}
