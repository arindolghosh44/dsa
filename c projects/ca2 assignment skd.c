#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define Max 7
 struct node{
char name[56];
char phone[67];
char date[78];
int b;
char slot[89];
int cid;
};
struct node co[Max];
int slo=84,t1=1,t2=1,t3=1,t4=1,t5=1,t6=1,t7=1,t8=1,t9=1,t10=1,t11=1,t12=1;
void check();
void book(int ,int);
void ti();
void hb();
void print(int);
void fm();
void s();
int table(int);

void main()
{

    int ch,i=1,id=101;

    while(1)
    {

     printf(" \n ................................................................Restaurant............................................................................ ");

        printf("\n 1. Book a table \n 2.Check table availability \n 3. collection of the day \n 4.Total customer of the day \n 5.Highest bill of the day \n 6.Customer details \n  7.Food menu \n 0. Exit \n");
        printf(" \n Enter your choice according to the menu given below:");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            if(i<=84)
            {
            book(i,id);
            i++;
            id++;
            }
            break;
        case 2:
            check();
            break;
        case 6:
            print(i);
            break;
        case 3:
            ti();
            break;
        case 4:
            printf(" \n Total customer of the day is :%d",i-1);
            break;
        case 5:
            hb();
            break;
        case 7:
            fm();
            break;
        case 0:
            exit(1);
        default:
            printf(" \n wrong entry");
        }
    }
}
void fm()
{

    printf(".......................................MENU...........................................");
    printf("\n 1=Chicken Biryani                    Rs.200.0            2=Mutton Biryani                           Rs.350.0 ");
    printf(" \n 3= Biryani                           Rs.130.0            4=Butter chicken and Naan                  Rs.339.0 ");
    printf(" \n 5=Tandoori Chicken                   Rs.249.0            6=Punjabi chicken with Lachha paratha      Rs.359.0 ");
    printf("\n 7=Masala Kulcha                      Rs.110.0            8=Chilli Panner                            Rs.269.0 ");
    printf("\n 9=Chicken Hakka noodles              Rs.210.0            10=Fish Finger                             Rs. 99.0 ");
    printf(" \n 11=Ice Cream                         Rs. 89.0            12=soft drink                              Rs. 59.0 ");
}
void book(int i,int id)
{

    int ch,c=1,n,bill=0,s1,f=1;
    if(slo!=0)
{
    printf(" \n Name:");
    scanf("%s",&co[i].name);
    printf(" \n Phone number:");
    scanf("%s",&co[i].phone);
    printf("\n Date:");
    scanf("%s",&co[i].date);
    fm();
    while(c)
    {
         printf(" \n Enter your choice:");
         scanf("%d",&ch);
         switch(ch)
         {
        case 1:
            printf(" \n Plates:");
            scanf("%d",&n);
            bill=bill+(n*200);
            break;
            case 2:
            printf(" \n Plates:");
            scanf("%d",&n);
            bill=bill+(n*350);
            break;
            case 3:
            printf(" \n Plates:");
            scanf("%d",&n);
            bill=bill+(n*130);
            break;
            case 4:
            printf(" \n Plates:");
            scanf("%d",&n);
            bill=bill+(n*339);
            break;
            case 5:
            printf(" \n Plates:");
            scanf("%d",&n);
            bill=bill+(n*249);
            break;
            case 6:
            printf(" \n Plates:");
            scanf("%d",&n);
            bill=bill+(n*359);
            break;
            case 7:
            printf(" \n Plates:");
            scanf("%d",&n);
            bill=bill+(n*110);
            break;
            case 8:
            printf(" \n Plates:");
            scanf("%d",&n);
            bill=bill+(n*269);
            break;
            case 9:
            printf(" \n Plates:");
            scanf("%d",&n);
            bill=bill+(n*210);
            break;
            case 10:
            printf(" \n Plates:");
            scanf("%d",&n);
            bill=bill+(n*99);
            break;
            case 11:
            printf(" \n Plates:");
            scanf("%d",&n);
            bill=bill+(n*89);
            break;
            case 12:
            printf(" \n bottles:");
            scanf("%d",&n);
            bill=bill+(n*59);
            break;

         }
         printf(" \n Order more dish? 1=Yes 0=No");
         scanf("%d",&c);


    }
    s();
    while(f){
    printf(" \n Enter slot:");
    scanf("%d",&s1);
    int r=table(s1);
    if(r==99)
        printf(" \n There is no table in this particular slot ");
    else
    {
        printf("\n .........................................................");
        printf("Table number:%d",r);
        f=0;
    }
    }
    printf(" \n Successful!! \n");
    slo--;
    printf(" customer id=%d",id);
    co[i].cid=id;



}
else{
    printf("We have no slot:");

}


co[i].b=bill;



}
void s()
{
    printf(" \n ............................................................Time Slot..........................................................");
    printf(" \n 1=11.00-12.00                          2=12.00-13.00");
    printf(" \n 3=13.00-14.00                          4=14.00-15.00");
    printf(" \n 5=15.00-16.00                          6=16.00-17.00");
    printf(" \n 7=17.00-18.00                          8=18.00-19.00");
    printf(" \n 9=19.00-20.00                          10=20.00-21.00");
    printf(" \n 11=21.00-22.00                         12=22.00-23.00");
}
void print(int i)
{ int j;
    for(j=1;j<i;j++)
{
    printf(" \t  customer id is:%d",co[j].cid);
    printf(" \t  customer name:%s",co[j].name);
     printf(" \t  phone number is:%s",co[j].phone);
      printf(" \t  date =%s",co[j].date);
      printf("\t total bill=%d ",co[j].b);
      printf("\n");
}
}
int table(int s1)
{
    switch(s1)
    {
    case 1:
        if(t1<=Max)
       return t1++;
    else
        return 99;


    case 2:
        if(t2<=Max)
       return t2++;
    else
        return 99;


    case 3:
        if(t3<=Max)
       return t3++;
    else
        return 99;


    case 4:
        if(t4<=Max)
       return t4++;
    else
        return 99;

    case 5:
        if(t5<=Max)
       return t5++;
    else
        return 99;

    case 6:
        if(t6<=Max)
       return t6++;
    else
        return 99;

    case 7:
        if(t7<=Max)
       return t7++;
    else
        return 99;

    case 8:
        if(t8<=Max)
       return t8++;
    else
        return 99;

    case 9:
        if(t9<=Max)
       return t9++;
    else
        return 99;

    case 10:
        if(t10<=Max)
       return t10++;
    else
        return 99;

    case 11:
        if(t11<=Max)
       return t11++;
    else
        return 99;

    case 12:
        if(t12<=Max)
       return t12++;
    else
        return 99;

    default:
        printf("There is no table in our hotel for today ,please come tommorow");
    }
}
void ti()
{
    int j;
    int sum=0;
    for(j=1;j<=Max;j++)
     sum=sum+co[j].b;
     printf(" \n Total collection of the day:%d",sum);
}
void hb()
{
    int max=0,j,idd;
    for(j=1;j<=Max;j++)
    {
        if(max<co[j].b)
        {

            max=co[j].b;
            idd=j;
        }
    }
    printf(" \n Highest bill of the day:%d",max);
    printf(" \n Customer id =%d",co[idd].cid);
}
void check()
{
    int s7,i,bookt;
    s();
    printf(" \n Enter slot:");
    scanf("%d",&s7);
     switch(s7)
    {
    case 1:
          bookt=t1;
          break;


    case 2:
       bookt=t2;
          break;


    case 3:
       bookt=t3;
          break;


    case 4:
        bookt=t4;
          break;

    case 5:
       bookt=t5;
          break;


    case 6:
      bookt=t6;
          break;


    case 7:
      bookt=t7;
          break;

    case 8:
        bookt=t8;
          break;

    case 9:
        bookt=t9;
          break;


    case 10:
        bookt=t10;
          break;


    case 11:
        bookt=t11;
          break;


    case 12:
      bookt=t12;
          break;


    default:
        printf(" \n There is no table in our hotel for today ,please come tommorow ");
    }
for(i=1;i<=Max;i++)
{
    if(i<bookt)
        printf(" \n Table number-%d          Status-Booked",i);
    else
         printf(" \n Table number-%d          Status-Empty",i);
}

}
