#include<stdio.h>
#define size 10
int table[size]={0};
void in()
{
    int key,i,index,u,v,h1,h2,ch=1;//The function is given as h1(k)=2k+3 and h2(k)=3k+1
    while(ch){
    printf("\n Enter the value you want to insert:");
    scanf("%d",&key);
  h1=(2*key)+3;
  u=h1%size;
  h2=(3*key)+1;
  v=h2%size;
    for(i=0;i<size;i++)
    {
        index=(u+(v*i))%size;
        if(table[index]==0)
        {
            table[index]=key;
            break;
        }
    }
    if (i==size)
    {
        printf("\n The table is full cannot be inserted another elements");
    }
    printf("Want to continue(1/0):");
    scanf("%d",&ch);
    }
}
void dis()
{
    int i;
    printf("\n The hash table is:");
    for(i=0;i<size;i++)
    {
        if(table[i]==0)
            printf("_");
        else
            printf(" %d",table[i]);
    }
}
void se()
{
    int k,i,flag=0;

    printf("\n Enter the element you want to search:");
    scanf("%d",&k);
    for(i=0;i<size;i++)
    {
        if(table[i]==k)
        {
            printf("\n %d element found in %d position:",k,i);
            flag=1;
            return;
        }
    }
    if(flag==0)
        printf("%d element is not found",k);


}
void main()
{
    int op;

    while(1)
    {
    printf("\n Press.1:insertion \t 2:display \t 3:searching \t 4:Exit \n");
    printf("\n Enter your choice:");
    scanf("%d",&op);
    switch(op)
    {
    case 1:
        in();
        break;
    case 2:
        dis();
        break;
    case 3:
        se();
        break;
    case 4:
        exit(1);
    default:
        printf("wrong entry");
    }
    }
}
