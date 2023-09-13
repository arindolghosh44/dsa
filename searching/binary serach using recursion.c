#include<stdio.h>
#include<stdlib.h>
int a[34];
int binarysearch(int low,int high,int se)
{
    if(low<=high)
    {
        int mid=(low+high)/2;
        if(a[mid]==se)
            return mid;
        if(a[mid]>se)
            return(binarysearch(low,mid-1,se));
        else
         return(binarysearch(mid+1,high,se));

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
        printf("elements-[%d]",i);
        scanf("%d",&a[i]);
    }
    printf("\n The array is:");
    for(i=0;i<n;i++)
    {
        printf(" %d",a[i]);
    }
    printf("\n What element you want to search:");
    scanf("%d",&item);
   int re=binarysearch(0,n-1,item);
    if(re==-1)
        printf("\n %d Element is not found",item);
    else
    {
        printf("\n%d element is found at %d position",item,re+1);
    }

}
