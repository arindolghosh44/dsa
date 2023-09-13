#include<stdio.h>
typedef struct node{
int data;
struct node*next;

}cust;
cust*top=0;
void push(int x)
{
    cust*n;
    n=(cust*)malloc(sizeof(cust));
    n->data=x;
    n->next=top;
    top=n;

}
void display()
{
    cust*temp;
    temp=top;
    if(top==0)
        printf("\n The stack is empty");
    else
    {
        while(temp!=0)
        {
            printf(" %d",temp->data);
            temp=temp->next;
        }
    }
}
void pop()
{

    cust*temp;
    temp=top;
    if(top==0)
        printf("\n Under flow");
        else
        {
            printf(" \n Pop element is %d",top->data);
            top=top->next;
            free(temp);
        }
}

void main()
   {
       int ch,da;
       while(1)
       {
           printf("\n Enter your choice:");
           scanf("%d",&ch);
           switch(ch)
           {
           case 1:
            printf("\n Enter data:");
            scanf("%d",&da);
            push(da);
            break;
           case 2:
            pop();
            break;
           case 3:
            display();
            break;
           case 4:
            exit(1);
           default:
            printf("\n wrong Entry");
           }
       }
   }



