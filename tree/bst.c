#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node * lc;
    struct node * rc;

}cust;
cust*root;
cust* create(cust*root,int k)
{


   if(root==0)
   {
       root=(cust*)malloc(sizeof(cust));//creation
       root->data=k;
       root->lc=0;
       root->rc=0;
       return(root);

   }
   if(k<root->data)
    root->lc=create(root->lc,k);
   else
    root->rc=create(root->rc,k);

   return (root);
}


void preorder(cust*root)
{
   if(root!=0){
        printf(" %d",root->data);
        preorder(root->lc);
        preorder(root->rc);
    }
}


void postorder(cust*root)
{
    if(root!=0)
    {

        postorder(root->lc);
        postorder(root->rc);
        printf(" %d",root->data);
    }
}
void inorder(cust*root)
{
    if(root!=0)
    {

        inorder(root->lc);
         printf(" %d",root->data);
        inorder(root->rc);

    }
}
cust * search(cust*root,int item)
{

    if(root==0)
        return 0;
    else
    {
        if(root->data==item)//searching the element
            return root;
        else if(item<root->data)
            return (search(root->lc,item));
        else
        return (search(root->rc,item));

    }
}
int nodecount(cust*root)
{
    int ld,rd,tot;
    if (root==0)
        return 0;
    else{
        ld=nodecount(root->lc);//how many nodes are present in the tree
         rd=nodecount(root->rc);
         tot=ld+rd+1;
         return (tot);


    }
}
int depth(cust*root)
{
    int td,h1d,h2d;
    if(root==0)
        return 0;
    else{
        h1d=depth(root->lc);//depth of the tree
        h2d=depth(root->rc);
        if(h1d>h2d)
            td=h1d+1;
        else
            td=h2d+1;
            return (td);



    }
}
void del(cust*root,int ele)
{
    int f=0;
    cust*temp,*tempparent,*parent,*droot;//deletion
    parent=0;
    droot=root;
    while(droot!=0)//parent child selection
    {
        if(droot->data==ele)
        {
            f=1;
            break;

        }
        parent=droot;
         if(droot->data>ele)
            droot=droot->lc;
        else
            droot=droot->rc;
    }
    if(f==0){
        printf("\n element you want to delete is not present \n");
    return;
    }
     if(droot->lc==0 && droot->rc==0)
    {

        if(parent==0)
        {
            root=0;
            free(droot);
            return;
        }
        if(parent->lc==droot)
            parent->lc=0;
        else
            parent->rc=0;

    }
    if(droot->lc!=0 && droot->rc!=0)
    {
        temp=droot->rc;
        tempparent=droot;
        while(temp->lc!=0)
        {
            tempparent=temp;
            temp=temp->lc;
        }
        droot->data=temp->data;
        if(tempparent->rc==temp)
            tempparent->rc=temp->rc;
        else
            tempparent->lc=temp->rc;
        free(temp);

    }
    if(droot->lc==0 && droot->rc!=0)
    {
        if(parent==0)
        {
            root=droot->rc;
            free(droot);
            return;
        }
        if(parent->lc==droot)
        {
            parent->lc=droot->rc;
        }
        else
        {
            parent->rc=droot->rc;

        }
        free(droot);
    }
     if(droot->lc!=0 && droot->rc==0)
    {
        if(parent==0)
        {
            root=droot->lc;
            free(droot);
            return;
        }
        if(parent->lc==droot)
        {
            parent->lc=droot->lc;
        }
        else
        {
            parent->rc=droot->lc;

        }
        free(droot);
    }

}



void main()
{
    cust*temp;
    int ch,k,item,v,d,ele;
    root=0;
    while(1)
    {
        printf("\n 1. creation \n 2. Inorder traversing \n 3. preorder traversing \n 4.postorder traversing \n 5. seraching \n 6.how many nodes\n 7.depth of the tree\n 8.deletion \n 9.exit\n Enter your choice");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            printf(" \n Enter the number:");
            scanf("%d",&k);
            root=create(root,k);
            break;
        case 2:
            printf("\n Inorder traversing is:");
            inorder(root);
            break;
        case 3:
             printf("\n preorder traversing is:");
            preorder(root);
            break;
        case 4:
             printf("\n postorder traversing is:");
            postorder(root);
            break;
        case 5:
            printf(" \n What element you want to search:");
            scanf("%d",&item);

            temp=search(root,item);
            if(temp==0)
                printf(" \n Element is not found");
            else
                printf("\n element found");
            break;
        case 6:
            v=nodecount(root);
            printf("\n total nodes in the tree are:%d",v);
            break;
        case 7:
            d=depth(root);
            printf("\n Depth of this tree is:%d",d);
            break;
        case 8:
            printf("\n what element you want to delete:");
            scanf("%d",&ele);
            del(root,ele);
            break;

        case 9:
            exit(1);
        default:
            printf(" \n wrong entry");

        }
    }
}
