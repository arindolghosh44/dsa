#include<stdio.h>
#include<stdlib.h>
int a[34];
int interpolation(int bottom,int top ,int item)
{
    int mid;
    while(bottom<=top)
    {
        mid=bottom+(top-bottom)*((item-a[bottom])/(a[top]-a[bottom]));
        if(item==a[mid])
            return mid+1;
        if(item<a[mid])
            top=mid-1;
        else
            bottom=mid+1;
    }
    return -1;
}
void main()
{
    int i,n,item;
    printf("\n how many element you want to insert:");
    scanf("%d",&n);
    printf("\n Elements are :");
    for(i=0;i<n;i++)
    {
        printf(" \n elements-[%d]",i);
        scanf("%d",&a[i]);
    }
    printf("\n The array is:");
    for(i=0;i<n;i++)
    {
        printf(" %d",a[i]);
    }
    printf("\n What element you want to search:");
    scanf("%d",&item);
   int re=interpolation(0,n-1,item);
    if(re==-1)
        printf("\n %d Element is not found",item);
    else
    {
        printf("\n%d element is found at %d position",item,re);
    }

}
