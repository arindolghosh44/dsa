#include<stdio.h>
#include<stdlib.h>
#include<string.h>

 struct node
{
    char key[45];
    char value[45];

};
 int MyHash(char data[])
 {
     int k,u=0,n=0,i;
     k=strlen(data);
     for(i=1;i<=k;i++)
     {
         n=(int)data[i];
         u+=i*(n%31);
     }
     return (u%139);
 }
void main()
{
    int pos,j,pot,ch;
    char data[20],data1[20],p[45];
struct node t[139]={0};

     while(1)
    {
        printf("\n 1.insertion \n 2. display keys  and values\n 3.  searching\n Enter your choice \n ");
        scanf("%d",&ch);
        switch(ch)
            {
    case 1:
         printf("\n Enter the key:");
             scanf("%s",&data);
         printf("\n Enter the value:");
              scanf("%s",&data1);
    pos=MyHash(data);
  strcpy(t[pos].key,data);
    strcpy(t[pos].value,data1);
        break;
    case 2:
        for(j=0;j<=139;j++)
{

            printf("\n element[%d]",j);
           puts(t[j].key);
            puts(t[j].value);


    }




break;
    case 3:
        printf("Enter the key you want to search:");
        scanf("%s",&p);
         pot=MyHash(p);
if(pot==0)
 printf("%s element found  not in hash table",p);
else
   printf("%s element found %dposition in hash table",p,pot);
break;

    default:
        printf("wrong entry");
            }

            }

    }




