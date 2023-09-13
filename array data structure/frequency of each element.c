#include <stdio.h>
void main()
{
int i,n,j,count,a[24];
printf("enter the size of the array:");
scanf("%d",&n);
printf("enter the element of the array one by one:");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("the frequency of all element of the array:");
for(i=0;i<n;i++)
{

count=1;
for(j=i+1;j<n;j++)
{
if(a[j]==a[i])
{
count++;
a[j]=NULL;


}
}
if(count>0)
{


if(a[i]==0)
    continue;
else{

if(count==1)
    printf("\n%d element occurs %d times",a[i],count);
else if(count>0)
printf("\n%d element occurs %d times",a[i],count);
}
}


}

}
