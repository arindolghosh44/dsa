#include <stdio.h>
void main()
{
int i,n,j,count,a[24];
printf("enter the size of the array:");
scanf("%d",&n);
printf("enter the element of the array one by one:");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("the duplicate element is/are:");
for(i=0;i<n;i++)
{
count=0;
for(j=i+1;j<n;j++)
{
if(a[j]==a[i])
{
count++;
a[j]=NULL;
}
}
if(count>=1)
{
    if(a[i]==0)
        continue;
    else
        printf(" %d",a[i]);

}

}
}
