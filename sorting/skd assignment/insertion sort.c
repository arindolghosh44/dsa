#include<stdio.h>
#include<stdlib.h>
void main()//best case senario
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
for(i=1;i<n;i++)
{
    temp=a[i];
    j=i-1;
  while(j>=0 && a[j]>temp)
  {
      a[j+1]=a[j];
      j--;
  }
  a[j+1]=temp;
}

printf("\n The sorted array is:");
for(i=0;i<n;i++)
{
    printf(" %d",a[i]);
}
}
