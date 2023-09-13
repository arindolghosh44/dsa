#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>
#define ENTER 13
#define TAB 9
#define BKSPC 8

struct user
{
    char fullname[50];
    char email[50];
    char password[50];
    char username[50];
    char phone[50];

};
void takeinput(char ch[50])
{
    fgets(ch,50,stdin);
    ch[strlen(ch)-1]=0;


}
void generateusername(char email[50],char username[50])
{
    for(int i=0;i<strlen(email);i++)
    {

        if(email[i]=='@')
            break;
        else
            username[i]=email[i];

    }
}
void takepassword(char pwd[50])
{
    int i;
    char ch;
    while(1)
    {
        ch=getch();
        if(ch== ENTER || ch==TAB)
        {

           pwd[i]='\0';
         break;
        }
        else if(ch==BKSPC)
        {
if(i>0)
{
    i--;
    printf(" \b \b");
}
        }
        else
        {
            pwd[i++]=ch;
            printf("* \b");
        }


    }
}
void main()
{
    FILE*fp;
    struct user use;
    struct user use1;
    char username[50],pword[50];
    char password2[50];
    system("COLOR 0b");
    int opt,ch=1,userfound=0;
    while(ch){
    printf("\n\t\t\t\t --------------------Welcome to the authentication system------------------------");
    printf("\n Please choose your operation:");
    printf("\n Press 1. for signup");
    printf("\n Press 2. for Login");
    printf("\n Press 1. for termination");

    printf("\n\n Your choice:\t");
    scanf("%d",&opt);
    fgetc(stdin);
    switch(opt)
    {
    case 1:
        system("cls");
        printf("\n Enter the full name:\t");
        takeinput(use.fullname);
          printf("\n Enter your email:\t");
        takeinput(use.email);
         printf("\n Enter your contact number:\t");
        takeinput(use.phone);
         printf("\n Enter new password:\t");
        takepassword(use.password);
        printf("\n Confirm your password:");
        takepassword(password2);
        printf("\n %s",use.password);
         Beep(750,300);
        if(!strcmp(use.password,password2))
        {
            generateusername(use.email,use.username);
            fp=fopen("Users.dat","a+");
            fwrite(&use,sizeof(struct user),1,fp);
            if(fwrite!=0)
            {
                printf("\n User registration success!@!!,\t your  name is %s",use.fullname);

            }
            else
            {

                printf("\n \n something went wrong!!! TRY AGAING");
                Beep(750,300);
            }

        }
        else
            printf("\n Your password does not matched");
            fclose(fp);
break;
    case 2:
system("cls");
        printf("\n Enter the user name:");
        takeinput(username);

printf("\n Enter the password:");
        takepassword(pword);
        fp=fopen("Users.dat","r");
        while(fread(&use1,sizeof(struct user),1,fp))
        {


                 if(!strcmp(use1.fullname,username))
                  {
                      printf("\n\t\t\t\tWelcome %s",use1.fullname);
                      printf("\n\n|Full name:\t %s",use1.fullname);
                      printf("\n|Email:\t %s",use1.email);
                      printf("\n|  User name:\t %s",use1.fullname);
                      printf("\n|Contact number:\t %s",use1.phone);


                  }



              else
                  {

                      printf("\n\n invalid password");
                      Beep(800,300);
                  }
                  userfound=1;
                  fclose(fp);
        }
        if(!userfound)
        {
            printf("\n\n your name is not register!");
        }

case 3:
        exit(0);
    default:
        printf("\n Wrong entry");
    }

    printf("\n Do you want to continue(1/0):");
    scanf("%d",&ch);
    }



}
