#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*left,*right;//inorder traversing

};
struct node*cre()
{
    int x;
    struct node*newnode=(struct node*)malloc(sizeof(struct node));
    printf("\n Enter the data(-1 for no node):");
    scanf("%d",&x);
    if(x==-1)
    {
        return 0;
    }

        newnode->data=x;
        printf("\n Enter the left child of %d",x);
        newnode->left=cre();
        printf("\n Enter the right child of %d",x);
        newnode->right=cre();

    return (newnode);

}
void display(struct node*root)
{
    if(root!=0)
    {

        display(root->left);
         printf(" %d",root->data);
    display(root->right);

    }
}
void main()
{
    struct node*root=0;
    int ch;
    while(1)
    {
        printf("\n 1.Creation \n 2.display \n 3.exit\n Enter your choice");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            root=cre();
            break;
        case 2:
            display(root);
            break;
        case 3:
            exit(1);
        default:
            printf("\n Enter is wrong");

        }
    }
}
