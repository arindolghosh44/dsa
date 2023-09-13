#include<stdio.h>
struct table{
int value;
int key;

};

void main()
{
    int temp,i,n;
    printf(" \n Enter the size of the hash table");//without collition maintaining
    scanf("%d",&n);
    printf(" \n Enter the elements :");
    struct table hash_table[n];
    for(i=0;i<n;i++)
    {
        printf("elements-[%d]:",i);
        scanf("%d",&temp);
        hash_table[temp%n].value=temp;
        hash_table[temp%n].key=temp%n;
    }
    printf("The hash table with key is:");
    printf("value\tkey\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t%d\n",hash_table[i].value,hash_table[i].key);
    }

}
