#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node*next;
};
struct node*current,*tail,*nextnode,*previous,*newnode,*temp;
int c=0;
void cre()
{
    tail=0;
     int ch=1;
     while(ch)
     {
         newnode=(struct node*)malloc(sizeof(struct node));
         printf("\n Enter the data:");
         scanf("%d",&newnode->data);
         if(tail==0){
            tail->next=tail=newnode;//this line is must
         }
         else
         {
          newnode->next=tail->next;
           tail->next=newnode;
           tail=newnode;
         }
         printf("\n Want to continue(1/0):");
         scanf(" %d",&ch);
         c++;
     }
}
void inaf()
{
    int pos,i=1;
    printf("\n Enter the position you want to insert:");
    scanf("%d",&pos);
    temp=tail->next;
    while(i<pos)
    {
        temp=temp->next;
        i++;
    }

         newnode=(struct node*)malloc(sizeof(struct node));
         printf("\n Enter the data:");
         scanf("%d",&newnode->data);
         newnode->next=temp->next;
         temp->next=newnode;
         if(pos==c)
            tail=newnode;
            c++;
}
void inbf()
{
    int pos,i=1;
    printf("\n Enter the position you want to insert:");
    scanf("%d",&pos);
     newnode=(struct node*)malloc(sizeof(struct node));
         printf("\n Enter the data:");
         scanf("%d",&newnode->data);
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

            c++;
}
}
void se()
{
    int item,p=1,flag=0;
    printf("\n Enter the element want to search:");
    scanf("%d",&item);
    temp=tail->next;
    while(temp->next!=tail->next)
    {
      if(temp->data==item)
      {
          printf(" %d element found at %d position:",item,p);
          flag=1;
          return;
      }
      temp=temp->next;
      p++;
    }
    if(flag==0)
        printf(" %d element is not found",item);
}
void dis()
{
    if(tail==0)
        printf("\n The linklist is empty");
    else
    {
        temp=tail->next;
        while(temp->next!=tail->next)
        {
            printf(" %d",temp->data);
            temp=temp->next;
        }
        printf(" %d",temp->data);
        printf("\n  The reverse element is: %d",tail->next->data);
    }
}
void delat()
{
    int pos,i=1;
    printf("\n Enter the position who want to delete: ");
    scanf("%d",&pos);
    temp=tail->next;
    if(pos==1)
    {
        tail->next=temp->next;
        free(temp);
    }
    else if(pos==c)
    {
        while(i<pos-1)
        {
            temp=temp->next;
            i++;
        }

           temp->next=tail->next;
           nextnode=tail;
           tail=temp;
           free(nextnode);


    }
        else{
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
void main()
{
    int ch;
    while(1)
    {
        printf("\n 1.creation \n 2.Insertion at after \n 3. Insertion at before \n 4.searching \n 5.traversing \n 6.Deletion of a particular node \n 7.Exit\n Enter your choice \n ");
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
            delat();
            break;


        case 7:
            exit(0);
        default:
            printf("wrong entry");
        }
    }
}


