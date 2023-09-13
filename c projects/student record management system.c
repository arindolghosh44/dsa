#include<stdio.h>
#include<conio.h>
void addstudent();
void studentrecords();
void searchstudent();
void de();
typedef struct student{
char first_name[20];
char last_name[20];
int roll_no;
char classes[10];
char vill[20];
float per;

}thor;
void main()
{
    int ch;
    while(ch!=5)
    {
        printf("\t\t\t ---------------STUDENT DATABASE MANAGEMENT SYSTEM------------------\t \t \n");
        printf("\t\t\t  1.ADD STUDENT RECORD\n");
        printf("\t\t\t  2.STUDENT RECORDS\n");
        printf("\t\t\t  3.SEARCH STUDENT RECORD\n");
        printf("\t\t\t  4.DELETE STUDENT RECORD\n");
        printf("\t\t\t  5.EXIT\n");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:

            addstudent();

            break;
        case 2:
        studentrecords();

           break;
            case 3:
                 searchstudent();

           break;
            case 4:
                de();
                break;
            case 5:
                exit(0);
            default:
                printf("\n wrong entry");

        }

    }

}
void addstudent(){
char another;
FILE*fp;
thor info;
do{

    printf("\t\t\t\t =====================ADD STUDENT INFO================================");
    fp=fopen("C:\\Users\\DELL\\Desktop\\student record.txt","a");

    printf("\n\t\t\t Enter first name:   ");
    scanf("%s",info.first_name);
    printf("\n\t\t\t Enter last name:   ");
    scanf("%s",info.last_name);
    printf("\n\t\t\t Enter roll no:   ");
    scanf("%d",&info.roll_no);
    printf("\n\t\t\t Enter class name:   ");
    scanf("%s",info.classes);
    printf("\n\t\t\t Enter address:   ");
    scanf("%s",info.vill);
     printf("\n\t\t\t Enter amount of money :   ");
    scanf("%f",&info.per);
    printf("\n\t\t\t!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\t");
    if(fp==NULL)
    {

        printf("\t\t\t cannot open the file \n");
    }
    else{
        printf("\t\t\t Record stored successfully!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n");
    }
    fwrite(&info,sizeof(thor),1,fp);
    fclose(fp);
   //printf("\n Do you want to add another record:\n");
    scanf("%c",&another);

}while(another=='y'||another=='Y');

}
void studentrecords()
{
    FILE*fp;
    thor info;
    fp=fopen("C:\\Users\\DELL\\Desktop\\student record.txt","r");
     printf("\t\t\t\t =====================STUDENT RECORDS================================");

      if(fp==NULL)
    {

        printf("\t\t\t cannot open the file \n");
    }
    else{
        printf("\t\t\t Record !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n");
        printf("\t\t\t\t\t=============================================\n\n");
        while(fread(&info,sizeof(thor),1,fp))
            {
            printf("\n\t\t\t\t\t STUDENT NAME:%s %s",info.first_name,info.last_name);
            printf("\n\t\t\t\t\t ROLL NO:%d",info.roll_no);
            printf("\n\t\t\t\t\t CLASS:%s ",info.classes);
            printf("\n\t\t\t\t\t ADDRESS:%s ",info.vill);
            printf("\n\t\t\t\t\t AMOUNT:%f",info.per);
            printf("\n\t\t\t\t\t ====================================\n");


        }
        fclose(fp);

    }


}
 void searchstudent()

{
    FILE*fp;
    thor info;
    int roll, found=0;

     fp=fopen("C:\\Users\\DELL\\Desktop\\student record.txt","r");

    printf("\t\t\t\t=======================SEARCH STUDENT=======================\n");
    printf("\t\t\t\t Enter roll no:  ");
    scanf("%d",&roll);


      while(fread(&info,sizeof(thor),1,fp))
            {
                if(info.roll_no==roll)
                    {
                        found=1;
            printf("\n\t\t\t\t\t STUDENT NAME:%s %s",info.first_name,info.last_name);
            printf("\n\t\t\t\t\t ROLL NO:%d",info.roll_no);
            printf("\n\t\t\t\t\t CLASS:%s ",info.classes);
            printf("\n\t\t\t\t\t ADDRESS:%s ",info.vill);
            printf("\n\t\t\t\t\t AMOUNT:%f",info.per);
            printf("\n\t\t\t\t\t ====================================\n");

                }
        }

        if(found==0)
        {
            printf("\n\t\t\t Record not found\n");
        }


        fclose(fp);

}

void de()
{
    FILE*fp,*fp1;
    thor info;
    int roll,found=0;
    printf("\t\t\t\t=======================DELETE STUDENT RECORD=======================\n");
     fp=fopen("C:\\Users\\DELL\\Desktop\\student record.txt","r");
      fp1=fopen("C:\\Users\\DELL\\Desktop\\temp.txt","w");
      printf("\n Enter roll no:");
      scanf("%d",&roll);
      if(fp==NULL)
      {
          printf("\n \t\t\t cannot open\t\t\t");
      }
     while(fread(&info,sizeof(thor),1,fp))
            {
                if(info.roll_no==roll)
                    {
                        found=1;
                    }
                    else{

                        fwrite(&info,sizeof(thor),1,fp1);

                    }
            }
            fclose(fp);
            fclose(fp1);

    if(found==1)
    {
        remove("C:\\Users\\DELL\\Desktop\\student record");
        rename("C:\\Users\\DELL\\Desktop\\student record","C:\\Users\\DELL\\Desktop\\temp");
        printf("\n\t\t\t\t RECORD DELETED SUCCESSFULLY!!!!!!!!!!!!!!!!!!!!!!!\n");
    }
    else{

          printf("\n\t\t\t\t RECORD  NOT DELETED!!!!!!!!!!!!!!!!!!!!!!!\n");
    }














}
