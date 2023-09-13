#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>
void main()
{
    system("COLOR 1B");
    int n,k,*a,i,key,bs(int*,int,int,int);
    printf("\n enter the size of the list");
    scanf("%d",&n);
    a=(int *)malloc(n*sizeof(int));
    printf("\n Enter the elements:");
    for(i=0;i<n;i++)
    {
        printf("\n Elements-[%d]:",i);
        scanf("%d",a+i);
    }
    printf("\n The elements is:");
    for(i=0;i<n;i++)
    {
        Beep(720,567);
        printf("\t %d",*(a+i));
    }
    printf("\n Enter the element you want to searched");
    scanf("%d",&key);
    k=bs(a,n-1,0,key);
    if(k==0)
        printf("\n %d element is not found",key);
    else
        printf("\n %d element found at %d position",key,k+1);
}
int bs(int *a,int high,int low,int k)
{
    int mid;
    if(low>high)
        return 0;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(a[mid]==k)
            return mid;
if(a[mid]>k)
            return (bs(a,mid-1,low,k));
else
    return (bs(a,high,mid+1,k));
    }
}
