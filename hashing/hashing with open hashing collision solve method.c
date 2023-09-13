#include<stdio.h>
#define size 10
 struct node{
int data;
struct node*next;
};
struct node *head[size]={0},*c;
void in()
{
    int key,i,ch=1;
    while(ch)
    {
        printf("\n Enter the value:");
        scanf("%d",&key);
        i=key%size;
       struct node*ne=(struct node*)malloc(sizeof(struct node));
        ne->data=key;
        ne->next=0;
        if(head[i]==0)
        {
            head[i]=ne;
        }
        else{
            c=head[i];
            while(c->next!=0)
            {
                c=c->next;
            }
            c->next=ne;

        }
        printf("\n Want to continue(1/0):");
        scanf("%d",&ch);
    }


}
void dis()
{
    int i;
    printf("\n The Elements of the hash table");
   for(i=0;i<size;i++)
   {
       if(head[i]==0)
        continue;
       else
       {
           for(c=head[i];c!=0;c=c->next)
            printf(" %d",c->data);
       }
   }
}
void se()
{
    int key,index;
    printf("\n Enter the elements you want to search:");
    scanf("%d",&key);
    index=key%size;
    if(head[index]==0)
        printf("\n Elements is not found");
    else
    {
        c=head[index];
while(c!=0)
{
if(c->data==key){
printf("%d element is found at %d position",key,index);
return;
}
c=c->next;
}
if(c==0)
        {
              printf("\n Elements is not found");
        }
    }
}
void main()
{
    int op;

    while(1)
    {
    printf("\n Press.1:insertion \t 2:display \t 3:seraching \t 4:Exit \n");
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
