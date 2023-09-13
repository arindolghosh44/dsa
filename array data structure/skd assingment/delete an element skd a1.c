#include <stdio.h>

void main()
{
    int a[20],n,i,pos;
    printf("enter the size of the array:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("element:[%d]",i);
        scanf("%d",&a[i]);
    }
     printf("element of arrays is:");
     for(i=1;i<=n;i++)
    {

        printf("%d",a[i]);
    }

printf(" \n enter the location in where you want to delete:");
scanf("%d",&pos);
i=1;
while(i!=pos)
    i++;
while(i<n){
    a[i]=a[i+1];
i++;
}
     printf("element of arrays is:");
 for(i=1;i<n;i++)
    {

        printf("%d",a[i]);
    }

}
