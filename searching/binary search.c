#include<stdio.h>
#include<stdlib.h>
void main()
{
    int a[25],i,n,item,f=-1,high,low,mid;
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
    high=n-1;
    low=0;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(a[mid]==item)
        {
            f=mid;
            break;
        }
        else if(item<a[mid])
            high=mid-1;
        else if(item>a[mid])
            low=mid+1;
    }
       if(f<0)
        printf("\n The asked element %d is not found in the array list",item);
    else
        printf("\n the asked element %d is found in %d position",item,f);




}
