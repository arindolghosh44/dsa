#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
int data;
struct node*next;
struct node*prev;

}cust;
cust*head,*temp,*n;
int c=0;
void cre()
{
    int ch=1;
    head=0;
    while(ch)
    {
        n=(cust*)malloc(sizeof(cust));
        printf("Enter the data:");
        scanf("%d",&n->data);
        n->prev=0;
        n->next=0;
        if(head==0)
        {
            head=temp=n;

        }
        else
        {
            n->prev=temp;
            temp->next=n;
            temp=n;

        }
        c++;
        printf("Want to continue(1/0):");
        scanf("%d",&ch);
    }
}
void display()
{
    temp=head;
    do{
        printf(" %d",temp->data);
        temp=temp->next;

    }while(temp->next!=0);
    printf(" %d",temp->data);
}
void inaf()
{
    int pos,i=1;
     n=(cust*)malloc(sizeof(cust));
     printf(" Enter the position:");
     scanf("%d",&pos);
     printf("Enter the data:");
     scanf("%d",&n->data);
     n->prev=0;
     n->next=0;
     if(pos==c)
     {
        temp=head;
        while(i<pos)
        {
            temp=temp->next;
            i++;
        }
        n->prev=temp;

temp->next=n;
temp=n;

     }
     else
     {
         temp=head;
         while(i<pos)
         {
             temp=temp->next;
             i++;
         }
         n->next=temp->next;
         temp->next->prev=n;
         n->prev=temp;
         temp->next=n;
     }

c++;
}

void inbf()
{
    int pos,i=1;
     n=(cust*)malloc(sizeof(cust));
     printf(" Enter the position:");
     scanf("%d",&pos);
     printf("Enter the data:");
     scanf("%d",&n->data);
     n->prev=0;
     n->next=0;
     if(pos==1)
     {

         n->next=head;
         head->prev=n;
         head=n;


     }
     else
     {
         temp=head;
         while(i<pos-1)
         {
             temp=temp->next;
             i++;
         }
         n->next=temp->next;
         temp->next->prev=n;
         n->prev=temp;
         temp->next=n;

     }
     c++;

}
void se()
{
    int v,flag=0,pos=1;
    printf(" \n Enter the element you want to search:");
    scanf("%d",&v);
    temp=head;
    while(temp!=0)
    {
        if(temp->data==v)
        {
            printf("%d element is found in %d position",v,pos);
            flag=1;
        }
        temp=temp->next;
        pos++;
    }
    if(flag==0)
    {
        printf("%d element is not found in this list",v);
    }
}
void del()
{

    int pos,i=1;
    printf("Enter the position you want to delete:");
    scanf(" %d",&pos);
    temp=head;
    if(temp==0)
    {
        printf("The list is empty");
    }

 else if(pos==c)
{

        while(i<pos)
        {
            temp=temp->next;
            i++;
        }
        temp->prev->next=0;
        free(temp);
}
else if(pos==1)
{

    head=temp->next;
    head->prev=0;
    free(temp);
}
else{

        while(i<pos)
        {
           temp=temp->next;

            i++;
        }
        temp->prev->next=temp->next;
        temp->next->prev=temp->prev;
        free(temp);
}

c--;

}
void rev()
{
   struct node*pre,*cu,*ne;
    pre=0;
    cu=ne=head;
    while(ne!=0)
    {
        ne=ne->next;
        cu->next=pre;
        pre=cu;
        cu=ne;

    }
    head=pre;
}
void count()
{
    temp=head;
    int cou=0;
    while(temp!=0)
    {
        temp=temp->next;
        cou++;
    }
    printf("\n The number of nodes in the array is : %d",cou);
}
void sort()
{
    int t;
    struct node *p,*q;
    for(p=head;p!=0;p=p->next)
    {
        for(q=head;q->next!=0;q=q->next)
        {
            if(q->data>q->next->data)
            {
                t=q->data;
                q->data=q->next->data;
                q->next->data=t;
            }
        }
    }
}

void main()
{
    int ch;
    while(1)
    {
        printf(" \n 1.creation\n 2.traversing \n 3.insert at after \n 4.insert at before \n 5.searching\n 6.deletion \n  7. reversing \n 8.counting \n 9.sorting \n 10.exit \n enter your choice");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            cre();
            break;
        case 2:
            display();
            break;
        case 3:
            inaf();
            break;
        case 4:
            inbf();
            break;
        case 5:
            se();
            break;
        case 6:
            del();
            break;
        case 7:
            rev();
            break;
        case 8:
            count();
            break;
        case 9:
            sort();
            break;
        case 10:
            exit(0);
        default:
            printf("\n Wrong Entry");


        }
    }
}
