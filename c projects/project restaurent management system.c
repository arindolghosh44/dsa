#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h>
struct items{
char item[20];
float price;
int qty;

};
struct orders{
    char customer [50];
    char date[50];
    int numofitems;
struct items itm[50];
};
void generateBillHeader(char name[50],char date[30]){
    printf("\n \n");
    printf("\t binoy.Restaurent");
    printf("\n \t ------------------------------");
    printf("\n Date:%s",date);
    printf("\n Invoice to:%s",name);
    printf("\n");
    printf("---------------------------------\n");
    printf("item \t \t");
     printf("quantity \t \t");
      printf("total \t \t");
      printf("\n -----------------------------------");
      printf("\n \n");

}
void genearteBillBody(char item[67],int qty,float price)
{
printf("%s\t\t",item);
printf("%d\t\t",qty);
printf("%.2f\t\t",qty*price);
printf("\n");


}
void generateBillFooter(float total)
{
printf("\n");
float dis=0.1*total;
float nettotal=total-dis;
float cgst=0.09*nettotal,grandtotal=nettotal+2*cgst;
printf("-----------------------------------\n");
printf("Sub total\t\t\t%.2f",total);
printf("\n Discount @10%s\t\t\t%.2f","%",dis);
printf("\n \t\t\t--------------------");
printf("Net total\t\t\t%.2f",nettotal);
printf("\n Cgst @10%s\t\t\t%.2f","%",cgst);
printf("\n Sgst @10%s\t\t\t%.2f","%",cgst);
printf("\n-------------------------------------------");
printf("Grand total\t\t\t%.2f",grandtotal);
printf("\n --------------------------------------------");

}



void main()
{
    system("color A");
    struct orders ord;
    struct orders order;
    float total;
    int o,n,invoicefound=0,ch=1;
    char savefill='y';
    char name [50];
    FILE *fp;
    while(ch){
printf("\t =========================BINOY.RESTAURENT============================");
printf("\n \n Please select your preferred operation:\t");
printf("\n \n 1.Genearte invoice:");
printf("\n 2.show all invoice:");
printf("\n 3.search  invoice:");
printf("\n 4.Exit:");
printf("\n\nYour choice:\t");
scanf("%d",&o);
fgetc(stdin);
switch(o)
{
case 1:
system("cls");
printf("\n Enter the  name of the customer:\t");
fgets(ord.customer,50,stdin);
ord.customer[strlen(ord.customer)-1]=0;
strcpy(ord.date,__DATE__);
printf("Enter the number of items:\t");
scanf("%d",&n);
ord.numofitems=n;
for(int i=0;i<n;i++)
{
    fgetc(stdin);
    printf("\n\n");
    printf("\nPlease Enter the item %d: ",i+1);
    fgets(ord.itm[i].item,20,stdin);
    ord.itm[i].item[strlen(ord.itm[i].item)-1]=0;
    printf("\nPlease Enter the quantity: \t");
    scanf("%d",&ord.itm[i].qty);
    printf("\nPlease Enter the unit price:\t");
    scanf("%f",&ord.itm[i].price);
    total+=ord.itm[i].qty*ord.itm[i].price;
}
generateBillHeader(ord.customer,ord.date);
for(int i=0;i<ord.numofitems;i++)
{
genearteBillBody(ord.itm[i].item,ord.itm[i].qty,ord.itm[i].price);


}
generateBillFooter(total);
printf("\nDo you want to save the invoice[y/n]:\t");
scanf("%s",&savefill);
if (savefill=='y')
{
fp=fopen("C:\\Users\\DELL\\Desktop\\temp.txt","a+");
fwrite(&ord,sizeof(struct orders),n,fp);
if(fwrite!=0)
printf("\n SAVED SUCCESSSFULLY");
else
printf("\n ERROR SAVING");
fclose(fp);

}
break;
case 2:
system("cls");
fp=fopen("C:\\Users\\DELL\\Desktop\\temp.txt","r");
printf("\n ********************** your previous invoices**************************\n");
while(fread(&order,sizeof(struct orders),n,fp));
{
    float tot=0;

generateBillHeader(order.customer,order.date);
for(int i=0;i<order.numofitems;i++)
{
genearteBillBody(order.itm[i].item,order.itm[i].qty,order.itm[i].price);
tot+=order.itm[i].qty*order.itm[i].price;
}
generateBillFooter(tot);


}
fclose(fp);
break;
case 3:
    system("cls");
printf("\n Enter name of the customer:");
fgetc(stdin);
fgets(name,50,stdin);
name[strlen(name)-1]=0;
fp=fopen("C:\\Users\\DELL\\Desktop\\temp.txt","r");
printf("\n ********************** invoice of %s**************************\n",name);
while(fread(&order,sizeof(struct orders),n,fp));
{
 float tot=0;
if(!strcmp(order.customer,name)){
generateBillHeader(order.customer,order.date);
for(int i=0;i<order.numofitems;i++)
{
genearteBillBody(order.itm[i].item,order.itm[i].qty,order.itm[i].price);
tot+=order.itm[i].qty*order.itm[i].price;
}
generateBillFooter(tot);
invoicefound=1;
}



}
if(!invoicefound)
{
printf("\n  The invoice of the customer %s is not found",name);

}

fclose(fp);
break;
case 4:
printf("\n \t\t Bye Bye");
exit(0);
default:
printf("\n Please Enter the given cases");
}
printf("\n \n");
printf("\n Want to continue(1\0):");
scanf("%d",&ch);
    }

}


