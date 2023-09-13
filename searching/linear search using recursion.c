#include<stdio.h>
#include<stdlib.h>
int a[34];
int lse(int i,int se,int n)
{
    if(a[i]==se)
        return i;
    else if(i<n)
         (lse(i+1,se,n));
    else
        return -1;

}
void main()
{
    int i,se,n,res;
    printf("\n Enter the array size:");
    scanf("%d",&n);
    printf("\n Enter the array elements:");
    for(i=0;i<n;i++)
    {
        printf("Elements-[%d]",i);
        scanf("%d",&a[i]);
    }
    printf("\n Enter the searched element:");
    scanf("%d",&se);
    res=lse(0,se,n);
    if(res==-1)
        printf(" Not found");
    else
        printf("at %d position",res+1);
}
