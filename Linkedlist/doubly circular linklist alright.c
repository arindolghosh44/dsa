#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
typedef struct node{
int data;
struct node*next;
struct node*prev;
}st;
st*head,*tail,*newnode,*temp;
void cre()
{
    int ch=1;
    head=0;
    while(ch)
    {
        newnode=(st*)malloc(sizeof(st));
        printf("\n Enter the data:");
        scanf("%d",&newnode->data);
        if(head==0)
        {
            head=tail=newnode;
            head->next=head;
            head->prev=head;
        }
        else
        {
            tail->next=newnode;
            newnode->prev=tail;
            newnode->next=head;
            head->prev=newnode;
            tail=newnode;
        }
        printf("\n Want to continue(1/0):");
        scanf("%d",&ch);
    }

}
int getlength()
{
    temp=head;
    int i=1;
   do
    {
        temp=temp->next;
        i++;

    } while(temp!=tail);
    return i;
}
void display()
{
    temp=head;
    if(head==0)
    {
        printf("\n Invalid");
    }
    else
    {
        do
        {
            printf("\t %d",temp->data);
            temp=temp->next;
        }while(temp!=tail);
        printf("\t %d",temp->data);

    }
}
void insertbeg()
{
 newnode=(st*)malloc(sizeof(st));
 printf("\n Enter the data");
 scanf("%d",&newnode->data);
 if(head==0)
 {
     head=tail=newnode;
     newnode->prev=tail;
     newnode->next=head;
 }
 else
 {
     newnode->next=head;
     head->prev=newnode;
     newnode->prev=tail;
     tail->next=newnode;
     head=newnode;
 }
}
void insertend()
{
    newnode=(st*)malloc(sizeof(st));
 printf("\n Enter the data");
 scanf("%d",&newnode->data);
 if(head==0)
 {
     head=tail=newnode;
     newnode->prev=tail;
     newnode->next=head;
 }
 else
 {
     newnode->prev=tail;
     tail->next=newnode;
     newnode->next=head;
     head->prev=newnode;
     tail=newnode;
 }
}
void insertany()
{
    int pos,i=1,l;
    temp=head;
    printf("\n Enter position");
    scanf("%d",&pos);
    l=getlength();
    if(pos<1 || pos>l)
        printf("\n Invailld");
    else if(pos==1)
    {
        insertbeg();

    }
    else if(pos==l)
    {
       insertend();
    }
    else
    {
        newnode=(st*)malloc(sizeof(st));
 printf("\n Enter the data");
 scanf("%d",&newnode->data);
 while(i<pos)
 {
     temp=temp->next;
     i++;
 }
 newnode->prev=temp;
 newnode->next=temp->next;
 temp->next->prev=newnode;
 temp->next=newnode;
    }

}
void delfrombeg()
{
    temp=head;
    if(head==0)
        printf("\n Invalid");
    else if(head->next==head)
    {

        head=tail=0;
        free(temp);
    }
    else
    {
        head=head->next;
        head->prev=tail;
        tail->next=head;
        free(temp);
    }
}
void delfromend()
{
    temp=tail;
    if(head==0)
        printf("\n Invalid");
    else if(head->next==head)
    {

        head=tail=0;
        free(temp);
    }
    else
    {
        tail=tail->prev;
        tail->next=head;
        head->prev=tail;
        free(temp);

    }

}
void delfromany()
{
    int pos,i=1,l;

    printf("\n Enter the position");
    scanf("%d",&pos);
    l=getlength();
    if(pos<1 || pos>l)
        printf("\n Invalid");
    else if(pos==1)
    {
        delfrombeg();

    }
    else if(pos==l)
    {
       delfromend();
    }
    else
    {
        temp=head;
        while(i<pos)
        {
            temp=temp->next;
            i++;
        }
        temp->prev->next=temp->next;
        temp->next->prev=temp->prev;
        free(temp);
    }


}
void main()
{
    int ch;

    system("color 0b");
    while(1)
    {
        printf("\n\t 1.creation  2.insertion 3.deletion 4.display 5.exit \n");
        printf("\n Enter your choice:");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            cre();
            break;
        case 2:
            insertany();
            break;
        case 3:
            delfromany();
            break;
        case 4:
            display();
            break;
        case 5:
            exit(1);
        default:
            printf("\n invalid data");

        }
    }

}

