#include<stdio.h>
#include<stdlib.h>
void main()
{
    int a[25],i,n,item,f=0;
    printf("\n how many element you want to insert:");
    scanf("%d",&n);
    printf("\n Elements are :");
    for(i=1;i<=n;i++)
    {
        printf("elements-[%d]",i);
        scanf("%d",&a[i]);
    }
    printf("\n The array is:");
    for(i=1;i<=n;i++)
    {
        printf(" %d",a[i]);
    }
    printf("\n What element you want to search:");
    scanf("%d",&item);
    for(i=1;i<=n;i++)
    {
        if(item==a[i])
        {
            f=i;
            break;
        }

    }
    if(f==0)
        printf("\n The asked element %d is not found in the array list",item);
    else
        printf("\n the asked element %d is found in %d position",item,f);








}
