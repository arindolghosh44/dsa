#include<stdio.h>
#include<stdlib.h>
void main()
{
int a[20],i,n,j,temp,flag;
printf("\n Enter the size of the array:");
scanf("%d",&n);
printf(" \n Enter the elements of the array:");
for(i=0;i<n;i++)
{
    printf("element-[%d]",i);
    scanf("%d",&a[i]);
}
printf("\n The sorted array list is:");
for(i=0;i<n-1;i++)
{
    flag=1;
    for(j=0;j<n-1-i;j++)
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
for(i=0;i<n;i++)
{
    printf(" %d",a[i]);
}


}
