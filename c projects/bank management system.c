#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>
struct user{
char ph[50];
char ac[50];
char password[50];
float balance;
};
void main()
{
    system("color 09");
    int opt,choice;
    FILE*fp;
    char cont='y';
    float amount;
    char filename[50],pword[50],phone[50];
    struct user use,use1;
    printf("\n What do you want to do?:");
    printf("\n \n 1.Register an account:");
    printf("\n 2.Login to an account:");

    printf("\n\n Enter your choice:\t");
    scanf("%d",&opt);
    if(opt==1)
    {
        system("cls");
        printf("\n Enter your account number:\t");
        scanf("%s",use.ac);
         printf("\n Enter your phone number:\t");
        scanf("%s",use.ph);
         printf("\n Enter your new password  number:\t");
        scanf("%s",use.password);
        use.balance=0;
        strcpy(filename,use.ph);
        fp=fopen(strcat(filename,".dat"),"w");
        fwrite(&use,sizeof(struct user),1,fp);
        if(fwrite!=0)
        {
            printf("\n The account successfully register");

        }
        else
            printf("\n Something went wrong");
    }

  else  if(opt==2)
    {
        system("cls");
        printf("\n Phone number:\t");
        scanf("%s",phone);
        printf("\n Password:\t");
        scanf("%s",pword);
        strcpy(filename,phone);
        fp=fopen(strcat(filename,".dat"),"r");
        if(fp==0)
        {
            printf("\n the account number not register:\t");
        }
        else{
        fread(&use,sizeof(struct user),1,fp);
        fclose(fp);
        if(!strcmp(pword,use.password))
        {
           while(cont=='y')
           {
               system("cls");
               printf("\n Press 1 to  balance inquiry:");
               printf("\n press 2 to depositing an cash:");
               printf("\n Press 3 to cash withdrawal:");
               printf("\n Press 4 to online transfer:");
               printf("\n Press 5 to change the password:");
               printf("\n Press 6 for Exit");
               printf("\n Enter your choice:");
               scanf("%d",&choice);
               switch(choice)
               {
               case 1:
                printf("\n Your balance is %.2f",use.balance);
                break;
               case 2:
                printf("\n Enter the amount:");
                scanf("%f",&amount);
                use.balance+=amount;
                fp=fopen(filename,"w");
        fwrite(&use,sizeof(struct user),1,fp);
        if(fwrite!=NULL)
        {
            printf("\n Successesfully deposite");

        }
        fclose(fp);
        break;
               case 3:
                     printf("\n Enter the amount:");
                scanf("%f",&amount);
                use.balance-=amount;
                fp=fopen(filename,"w");
        fwrite(&use,sizeof(struct user),1,fp);
        if(fwrite!=NULL)
        {
            printf("\n you have withdrawl Rs. %.2f amount ",amount);

        }

            fclose(fp);

        break;
               case 4:
                printf("\n Enter the phone number to transfer the balance:\t");
                scanf("%s",&phone);
                 printf("\n Enter the amount you want to transfer :\t");
                scanf("%f",&amount);
                        strcpy(filename,phone);
                fp=fopen(strcat(filename,".dat"),"r");
         if(fp==NULL)
        {
            printf("\n Your number is not register");
        }
        else{
        fread(&use1,sizeof(struct user),1,fp);
        fclose(fp);

                if(amount>use.balance)
                    printf("\n Insufficient  balance");
                else
                {
        fp=fopen(filename,"w");
        use1.balance+=amount;
         fwrite(&use1,sizeof(struct user),1,fp);
        fclose(fp);
        if(fwrite!=NULL)
        {
            printf("\n Your Transaction successefully done");
            strcpy(filename,use.ph);
            fp=fopen(strcat(filename,".dat"),"w");

           use.balance-=amount;
           fwrite(&use,sizeof(struct user),1,fp);
           fclose(fp);

        }
        else
            printf("\n Something wrong Occur");
                }


                }
break;
               case 5:
                printf("\n please enter your new password:");
                scanf("%s",pword);
                fp=fopen(filename,"w");
                strcpy(use.password,pword);
                fwrite(&use,sizeof(struct user),1,fp);
                if(fwrite!=NULL)
                printf("\n Password successfully changed");
                fclose(fp);
                break;
               case 6:
                exit(0);
               default:
                printf("\n wrong entry");
               }
                 printf("\n Do you want to continue the transaction(y/n):");
               scanf("%s",&cont);

           }

        }
        else
            printf("\n Invalid password");

    }




}
}
