#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node*next;
};
struct node*temp,*newnode,*tail,*head,*current,*previous;
int c=0;
void cre()
{
    tail=0;
    int choice=1;
    while(choice)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("enter data:");
        scanf("%d",&newnode->data);
        newnode->next=0;
        if(tail==0)
        {
            tail=newnode;
            tail->next=newnode;//creation only using tail pointer

        }
        else
        {
            newnode->next=tail->next;
            tail->next=newnode;
            tail=newnode;
        }

        c++;
        printf("want to continue(1/0):");
        scanf("%d",&choice);
    }
}
void inaf()
{
    int pos,i=1;
    printf("enter the position:");
    scanf("%d",&pos);
     newnode=(struct node*)malloc(sizeof(struct node));
     printf("enter the data:");
    scanf("%d",&newnode->data);
    newnode->next=0;
      if(tail==0)
        printf("The list is empty");
else{
    temp=tail->next;
    while(i<pos)
    {
        temp=temp->next;
        i++;
    }

    newnode->next=temp->next;
    temp->next=newnode;
     if(pos==c)
        tail=newnode;
}


c++;


}
void inbf()
{
     int pos,i=1;
    printf("enter the position:");
    scanf("%d",&pos);
     newnode=(struct node*)malloc(sizeof(struct node));
      printf("enter the data:");
    scanf("%d",&newnode->data);
    if(tail==0)
        printf("The list is empty");
        else{
         temp=tail->next;
         if(pos==1)
     {

         newnode->next=temp;
         tail->next=newnode;
     }

else{

    while(i<pos-1)
    {
        temp=temp->next;
        i++;
    }

    newnode->next=temp->next;
    temp->next=newnode;

}
        }
c++;

}
void se()
{
    int item,pos=1,flag=0;
    printf("enter the element you want to search:");
    scanf("%d",&item);
    temp=tail->next;
    while(temp->next!=tail->next)
    {
        if(temp->data==item){
            printf(" %d element found in %d position",item,pos);
            flag=1;
        return;
        }
        temp=temp->next;
        pos++;
    }
    if(flag==0)
        printf("The element is not found in this linklist");
}
void dis()
{
    if(tail==0)
        printf("the list is empty");//only using tail pointer
    else{
    temp=tail->next;
    while(temp->next!=tail->next)
    {
        printf(" %d",temp->data);
        temp=temp->next;

    }
    printf(" %d",temp->data);
    }

}
void rev()
{
    struct node*pre,*cu,*ne;
    cu=tail->next;
    ne=cu->next;
    if(tail==0)
        printf("\n the list is empty");
    else if (tail->next==tail){
            printf("\n only one element present in the linklist");
            dis();

    }
    else{
        while(cu!=tail)
        {
            pre=cu;
            cu=ne;
            ne=cu->next;
            cu->next=pre;
        }
        ne->next=tail;
        tail=ne;
    }

}
void delb()
{
    temp=tail->next;
    if(tail==0)
        printf("The linklist is empty");
    else if(temp==tail)
    {
        tail=0;
        free(temp);
    }
        else
        {
            tail->next=temp->next;
            free(temp);
        }
    }

void della()
{
    current=tail->next;
    if(tail==0)
        printf("Invalid data");
    else if(current->next==current)
        {
            tail=0;
    free(current);
        }
        else{

            while(current->next!=tail->next)
            {
                previous=current;
                current=current->next;
            }
            previous->next=tail->next;
            tail=previous;
            free(current);

        }
}
void delat()
{
  struct node*nextnode;
    int pos,i=1;

    printf("enter the node position which you want to delete:");
    scanf("%d",&pos);

    if(pos==1)
    {
       delb();
    }
    else if(pos==c)
    {
        della();
    }
else{
            temp=tail->next;
    while(i<pos-1)
    {
        temp=temp->next;
        i++;
    }
    nextnode=temp->next;
    temp->next=nextnode->next;
free(nextnode);

}

c--;


}
void count()
{
    temp=tail->next;
    int cou=1;
    while(temp->next!=tail->next)
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
    for(p=tail->next;p!=tail;p=p->next)
    {
        for(q=tail->next;q->next!=tail->next;q=q->next)
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
        printf("\n 1.creation \n 2.Insertion at after \n 3. Insertion at before \n 4.searching \n 5.traversing \n 6.Reversing the list \n 7.Deletion of a particular node \n 8.counting\n 9.sorting \n 10.Exit\n Enter your choice \n ");
        scanf(" %d",&ch);
        switch(ch)
        {
        case 1:
            cre();
            break;
        case 2:
            inaf();
            break;
        case 3:
            inbf();
            break;
        case 4:
            se();
            break;
        case 5:
            dis();
            break;
        case 6:
            rev();
            break;
        case 7:
            delat();
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
            printf("wrong entry");
        }
    }
}
