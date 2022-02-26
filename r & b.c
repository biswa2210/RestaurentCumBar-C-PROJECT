#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>
#include <stdio.h>
#include <windows.h>
#include<dos.h>
#include<stdbool.h>
#define KEY_UP 72
#define KEY_DOWN 80
#define ESC_KEY 27
/*
CREATED BY BISWARUP BHATTACHARJEE
EMAIL    : bbiswa471@gmail.com
PHONE NO : 6290272740
*/
int main_exit;
void menu();
struct bill{
        int seno;
         int cuno1;
char username[154];
}aka,ala;
int c1=0;
    int luck1,luck2,luck3;

struct sill{
        int seeno;
         int cuno2;
char naam[154];
}baba,aba;
int cc1c=0;
    int gok1,gok2,gok3;

int i,j;
int main_exit;
void menu();
struct orderttop{
        int leri;
         int billi;
int viky;

char ordert[1544];
}hku,icu;
struct ordert{
        int goru;
         int nonbill;
int kallu;

char nonorder[1544];
}aku,cku;
struct date{
    int month,day,year;

    };
    int w1;
struct {

    char name[60];
    int acc_no,age;
    char address[60];
    char adhar[15];
    double phone;
    char acc_type[10];
    float amt;
    struct date dob;
    struct date order;
    struct date withdraw;

    }add,upd,check,rem,transaction;
    struct ordeer{
        int loru;
         int softdbill;
int mallu;

char softdorder[1544];
}aa,cc;
struct ordertable{
        int gchoru;
         int vegbill;
int nulle;

char vegor[1544];
}kaku,maku;


void new_acc()

{
    system("color e");
    int choice;
    FILE *ptr;

    ptr=fopen("record.dat","a+");
    Serial_no:
    system("cls");
    printf("\t\t\t\xB2\xB2\xB2\ ADD RECORD  \xB2\xB2\xB2\xB2");
    printf("\n\n\nEnter today's date(mm/dd/yyyy):");
    scanf("%d/%d/%d",&add.order.month,&add.order.day,&add.order.year);
    printf("\nEnter the Serial number:");
    scanf("%d",&check.acc_no);
    while(fscanf(ptr,"%d %s %d/%d/%d %d %s %s %lf %s %f %d/%d/%d\n",&add.acc_no,add.name,&add.dob.month,&add.dob.day,&add.dob.year,&add.age,add.address,add.adhar,&add.phone,add.acc_type,&add.amt,&add.order.month,&add.order.day,&add.order.year)!=EOF)
    {
        if (check.acc_no==add.acc_no)
            {
                printf("Serial no. already in use!");
                goto Serial_no;

            }
    }
    add.acc_no=check.acc_no;
    printf("\nEnter the name: ");
    scanf("%s",add.name);
    printf("\nEnter the date of birth(mm/dd/yyyy): ");
    scanf("%d/%d/%d",&add.dob.month,&add.dob.day,&add.dob.year);
    printf("\nEnter the age :: ");
    scanf("%d",&add.age);
    printf("\nEnter the address :: ");
    scanf("%s",add.address);
    printf("\nEnter the adhar number :: ");
    scanf("%s",add.adhar);
    printf("\nEnter the phone number :: ");
    scanf("%lf",&add.phone);
    printf("\nEnter the amount to order relief fund :: ");
    scanf("%f",&add.amt);
    printf("\nType your pancard no :: ");
    scanf("%s",add.acc_type);

        fprintf(ptr,"%d %s %d/%d/%d %d %s %s %lf %s %f %d/%d/%d\n",add.acc_no,add.name,add.dob.month,add.dob.day,add.dob.year,add.age,add.address,add.adhar,add.phone,add.acc_type,add.amt,add.order.month,add.order.day,add.order.year);


    fclose(ptr);
    printf("\nSerial created successfully!");
    printf("\n\nNow, Your Serial number is :: %d",add.acc_no);
    add_invalid:
    printf("\n\n\n\t\tEnter 1 to go to the main menu and 0 to exit:");
    scanf("%d",&main_exit);
    system("cls");
    if (main_exit==1)
        menu();
    else if(main_exit==0)
            exit(0);
    else
        {
            printf("\nInvalid!\a");
            goto add_invalid;
        }
}

void erase(void)
{
    FILE *old,*newrec;
    int test=0;
    old=fopen("record.dat","r");
    newrec=fopen("new.dat","w");

    printf("Enter the Serial no. of the customer you want to delete ");
    SetColor(46);
           printf(":: ---->  ");
           SetColor(44);
    scanf("%d",&rem.acc_no);
    while (fscanf(old,"%d %s %d/%d/%d %d %s %s %lf %s %f %d/%d/%d",&add.acc_no,add.name,&add.dob.month,&add.dob.day,&add.dob.year,&add.age,add.address,add.adhar,&add.phone,add.acc_type,&add.amt,&add.order.month,&add.order.day,&add.order.year)!=EOF)
   {
        if(add.acc_no!=rem.acc_no)
            fprintf(newrec,"%d %s %d/%d/%d %d %s %s %lf %s %f %d/%d/%d\n",add.acc_no,add.name,add.dob.month,add.dob.day,add.dob.year,add.age,add.address,add.adhar,add.phone,add.acc_type,add.amt,add.order.month,add.order.day,add.order.year);

        else
            {test++;
            printf("\nRecord deleted successfully!\n");
            }
   }
   SetColor(46);
   fclose(old);
   fclose(newrec);
   remove("record.dat");
   rename("new.dat","record.dat");
   if(test==0)
        {
            printf("\n\nRecord not found!!\a\a\a");
            erase_invalid:
              printf("\n\nEnter 0 to try again,1 to return to main menu and 2 to exit : ");
              scanf("%d",&main_exit);

                 if (main_exit==1)
                    menu();
                else if (main_exit==2)
                {
                                  SetColor(43);
                    system("cls");
                    printf("\n\n\n\n\n\t\tTHIS SITE IS DEVLOPED BY ME (........BISWA......)\n\n\n\n\n");
                    exit(0);

                }

                else if(main_exit==0)
                {    SetColor(46);
                system("cls");
                    erase();
                }

                else
                    {printf("\nInvalid!\a");
                    goto erase_invalid;}
        }
    else
        {printf("\n\nEnter 1 to go to the main menu and 0 to exit : ");
        scanf("%d",&main_exit);
        system("cls");
        if (main_exit==1)
            menu();
        else
        {
                          SetColor(43);
                    system("cls");
                    printf("\n\n\n\n\n\t\tTHIS SITE IS DEVLOPED BY ME (........BISWA......)\n\n\n\n\n");
                    exit(0);

        }

        }

}

struct tb{

     int sn;
    char nm[100];
    float tamt;
    float gst;

}o,v;
void tdr()
{
        float bcn=0;
    float scn=0;
      float gcn=0;
         float pcn=0;

float vb=0,nvb=0,db=0,sdb=0;
    FILE *pot;
    pot=fopen("tc.dat","a+");
    tsb:
printf("\n\nEnter your serial number :: ");
scanf("%d",&v.sn);
while(fscanf(pot,"%d %f %f %s \n",&o.sn,&o.tamt,&o.gst,o.nm)!=EOF)
{
    if(v.sn==o.sn)
    {
        printf("\n\nAlready exists");
        goto tsb;
    }
}
o.sn=v.sn;
printf("\n\nEnter your name :: ");
scanf("%s",o.nm);
system("cls");
SetColor(46);
printf("\n\nEnter your veg bill :: ");
SetColor(44);
scanf("%f",&vb);
SetColor(43);
printf("\n\nEnter your non-veg bill :: ");
SetColor(46);
scanf("%f",&nvb);
SetColor(45);
printf("\n\nEnter your drinks bill :: ");
SetColor(42);
scanf("%f",&db);
SetColor(41);
printf("\n\nEnter your soft drinks bill :: ");
SetColor(43);
scanf("%f",&sdb);
SetColor(44);
printf("\n\nEnter your total number of bronze cupons :: ");
SetColor(41);
scanf("%f",&bcn);
SetColor(55);
printf("\n\nEnter your total number of silver cupons :: ");
SetColor(44);
scanf("%f",&scn);
SetColor(45);
printf("\n\nEnter your total number of gold cupons :: ");
SetColor(41);
scanf("%f",&gcn);
SetColor(46);
printf("\n\nEnter your total number of platinum cupons :: ");
SetColor(47);
scanf("%f",&pcn);
float fak=0;
float cal=0;
fak=vb+nvb+db+sdb;
vb=0;
nvb=0;
db=0;
sdb=0;
float c1=0,c2=0,c3=0,c4=0;
o.gst=((fak*18)/100);
cal=fak+o.gst;
c2=(bcn)*(500);
c3=(scn)*(1100);
c4= (gcn)*(2100);
c1=(pcn)*(3100);
o.tamt=((cal)-(c1+c2+c3+c4));
printf("\n\n your gst :: %f",o.gst);
if(o.tamt<0)
{
         o.tamt=o.tamt*(-1);
         SetColor(55);
    printf("\n\nYour excess amount :: %f\n\n\nCollect the ammount......\n\n\n",o.tamt);
        fprintf(pot,"%d %f %f %s \n",o.sn,o.tamt,o.gst,o.nm);
           system("pause");
fclose(pot);
counter3();
}
else
    {
               SetColor(46);
        printf("\n\nYour total bill amount :: %f\n\n\nSubmit the ammount......\n\n\n",o.tamt);
        system("pause");
        fprintf(pot,"%d %f %f %s \n",o.sn,o.tamt,o.gst,o.nm);
fclose(pot);
counter3();
    }
   c3_invalid:
    SetColor(46);
   printf("\n\n\n\n\n\n\n\t\t\t***** Enter 1 to go billing counter and 2 to exit the program *****");
    SetColor(43);
   printf("\n\t\t-----------------------------------------------------------------------------------\n\n");
     SetColor(42);
   printf("\t\t\tenter your choice :: ");
   SetColor(44);
   int n1;
   scanf("%d",&n1);
  if(n1==1)
   {
      counter3();
   }
     else if(n1==2)
   {
                    SetColor(43);
                    system("cls");
                    printf("\n\n\n\n\n\t\tTHIS SITE IS DEVLOPED BY ME (........BISWA......)\n\n\n\n\n");
                    exit(0);
   }
                else
                    {
                        printf("\nInvalid!\a\a\a");
                        goto c3_invalid;
                    }

}
void tbsee()
{
    system("cls");
    FILE *hot;
    hot=fopen("tc.dat","r");
    SetColor(44);
printf("Serial.no");
    SetColor(43);
printf("\tExcess. or Total amt\t\t\tGst\t\t\tName\n\n------------------------------------------------------------------------------------------------------------------------------------------------------->\n\n");
    while(fscanf(hot,"%d %f %f %s \n",&o.sn,&o.tamt,&o.gst,o.nm)!=EOF)
{
       SetColor(46);
    printf("   %d\t\t    %.2f\t\t     \t\t%.2f\t\t\t%s\n\n",o.sn,o.tamt,o.gst,o.nm);
}
fclose(hot);

    for(int i=0;i<1;i++)
{
system("color A");
Sleep(1000);
system("color B");
Sleep(1000);
system("color C");
Sleep(1000);
system("color A");
Sleep(1000);
system("color B");
Sleep(1000);
system("color D");
system("color E");
Sleep(1000);
system("color F");
}
   c3_invalid:
    SetColor(46);
   printf("\n\n\n\n\n\n\n\t\t\t***** Enter 1 to go billing counter and 2 to exit the program *****");
    SetColor(43);
   printf("\n\t\t-----------------------------------------------------------------------------------\n\n");
     SetColor(42);
   printf("\t\t\tenter your choice :: ");
   SetColor(44);
   int nn1;
   scanf("%d",&nn1);
  if(nn1==1)
   {
      counter3();
   }
     else if(nn1==2)
   {
                    SetColor(43);
                    system("cls");
                    printf("\n\n\n\n\n\t\tTHIS SITE IS DEVLOPED BY ME (........BISWA......)\n\n\n\n\n");
                    exit(0);
   }
                else
                    {
                        printf("\nInvalid!\a\a\a");
                        goto c3_invalid;
                    }

}

void see(void)
{
    FILE *ptr;
    int test=0,rate;
    int choice;
    float time;
    float intrst;
    ptr=fopen("record.dat","r");
    printf("Do you want to check by\n1.Serial no\n2.Name\nEnter your choice:");
    scanf("%d",&choice);
    if (choice==1)
    {   printf("\n\nEnter the Serial number :-->  ");
        scanf("%d",&check.acc_no);

        while (fscanf(ptr,"%d %s %d/%d/%d %d %s %s %lf %s %f %d/%d/%d",&add.acc_no,add.name,&add.dob.month,&add.dob.day,&add.dob.year,&add.age,add.address,add.adhar,&add.phone,add.acc_type,&add.amt,&add.order.month,&add.order.day,&add.order.year)!=EOF)
        {
            if(add.acc_no==check.acc_no)
            {   system("cls");
                test=1;

                printf("\n\nSerial NO.:%d\n\nName:%s \n\nDOB:%d/%d/%d \n\nAge:%d \n\nAddress : %s \n\nAdhar No : %s \n\nPhone number : %.0lf \n\nType Of Serial : %s \n\nAmount for relief fund : $ %.2f \nDate Of order : %d/%d/%d\n\n",add.acc_no,add.name,add.dob.month,add.dob.day,add.dob.year,add.age,add.address,add.adhar,add.phone,
                add.acc_type,add.amt,add.order.month,add.order.day,add.order.year);

            }
        }
    }


    fclose(ptr);
     if(test!=1)
        {   system("cls");
            printf("\n\nRecord not found!!\a\a\a");
            see_invalid:
              printf("\n\n\nEnter 0 to try again,1 to return to main menu, 3 to order details of customers and 2 to exit ::  ");
              scanf("%d",&main_exit);
              system("cls");
                 if (main_exit==1)
                    menu();
                else if (main_exit==2)
                    {              SetColor(43);
                    system("cls");
                    printf("\n\n\n\n\n\t\tTHIS SITE IS DEVLOPED BY ME (........BISWA......)\n\n\n\n\n");
                    exit(0);
}
                else if(main_exit==0)
                    see();
                           else if(main_exit==3)
                           {
                               int dd;
                               system("cls");
                               printf("\n1------------->veg\n2------------->soft drinks\n3------------->hard drinks\n4------------->Non-veg\n\n\n");
                               scanf("%d",&dd);
                               switch(dd)
                               {
                                   case 1: seen();
                                                break;
                                    case 2: softsee();
                                                break;
                                    case 3: drinkssee();
                                                break;
                                case 4: nonsee();
                                                break;
                               }

                           }

                else
                    {
                        system("cls");
                        printf("\nInvalid!\a");
                        goto see_invalid;}
        }
    else
        {printf("\nEnter 1 to go to the main menu and 0 to exit ::  ");
        scanf("%d",&main_exit);}
        if (main_exit==1)
        {
            system("cls");
            menu();
        }

        else
           {

                          SetColor(43);
                    system("cls");
                    printf("\n\n\n\n\n\t\tTHIS SITE IS DEVLOPED BY ME (........BISWA......)\n\n\n\n\n");
                    exit(0);

            }

}
int laora=0;
 void seen()
{
    system("cls");
  int tester=0;
    int gchorual;
FILE *ot;
ot=fopen("khao.dat","r");
printf("\n\nenter your serial number :: ");
scanf("%d",&gchorual);

while(fscanf(ot,"%d %d %d %s \n",&kaku.gchoru,&kaku.nulle,&kaku.vegbill,kaku.vegor)!=EOF)
{
if(kaku.gchoru==gchorual)
{
    laora++;
    printf("\n\nYour total number of non-veg items  ::  %d",kaku.nulle);
printf("\n\nTotal  amount for non-veg items ::  %d",kaku.vegbill);
printf("\n\nYour orders :: %s",kaku.vegor);
}
}
printf("\n\n\n\n\n\n\n");
fclose(ot);
     if(laora==0)
        {   system("cls");
            printf("\nRecord not found!!\a\a\a");
            see_invalid:
              printf("\n\n\n\nEnter 0 to try again,1 to return to main menu and 2 to exit  ::  ");
              scanf("%d",&main_exit);
              system("cls");
                 if (main_exit==1)
                    menu();
                else if (main_exit==2)
                    {              SetColor(43);
                    system("cls");
                    printf("\n\n\n\n\n\t\tTHIS SITE IS DEVLOPED BY ME (........BISWA......)\n\n\n\n\n");
                    exit(0);
}
                else if(main_exit==0)
                    orderdetails();
                else
                    {
                        system("cls");
                        printf("\nInvalid!\a");
                        goto see_invalid;}
        }
    else
        {printf("\n\n\n\nEnter 1 to go to the main menu,2 to again and 0 to exit :   ");
        scanf("%d",&main_exit);}
        if (main_exit==1)
        {
            system("cls");
            menu();
        }
        if (main_exit==2)
        {
            system("cls");
            orderdetails();
        }
        else
           {

                          SetColor(43);
                    system("cls");
                    printf("\n\n\n\n\n\t\tTHIS SITE IS DEVLOPED BY ME (........BISWA......)\n\n\n\n\n");
                    exit(0);

            }
}
 void seento()
{
    system("cls");
  int tester=0;
    int gchorual;
FILE *ott;
ott=fopen("khao.dat","r");
printf("Serial.no\t\tNo.of Items\t\tBill\t\t\t Orders\n--------------------------------------------------------------------------------------------------------------------------------------");
while(fscanf(ott,"%d %d %d %s \n",&kaku.gchoru,&kaku.nulle,&kaku.vegbill,kaku.vegor)!=EOF)
{

    laora++;
    printf("\n\n %d\t\t\t    %d\t\t\t%d\t\t\t%s",kaku.gchoru,kaku.nulle,kaku.vegbill,kaku.vegor);


}
printf("\n\n\n\n\n\n\n");
fclose(ott);
     if(laora==0)
        {   system("cls");
            printf("\nRecord not found!!\a\a\a");
            see_invalid:
              printf("\n\n\n\nEnter 0 to try again,1 to return to main menu and 2 to exit  ::  ");
              scanf("%d",&main_exit);
              system("cls");
                 if (main_exit==1)
                    menu();
                else if (main_exit==2)
                    {              SetColor(43);
                    system("cls");
                    printf("\n\n\n\n\n\t\tTHIS SITE IS DEVLOPED BY ME (........BISWA......)\n\n\n\n\n");
                    exit(0);
}
                else if(main_exit==0)
                    orderdetails();
                else
                    {
                        system("cls");
                        printf("\nInvalid!\a");
                        goto see_invalid;}
        }
    else
        {
            SetColor(43);
            printf("\n\n\n\nEnter 1 to go to the main menu,2 to again and 0 to exit :: -->  ");
    SetColor(42);
        scanf("%d",&main_exit);}
        if (main_exit==1)
        {
            system("cls");
            menu();
        }
        if (main_exit==2)
        {
            system("cls");
            orderall();
        }
        else
           {

                          SetColor(43);
                    system("cls");
                    printf("\n\n\n\n\n\t\tTHIS SITE IS DEVLOPED BY ME (........BISWA......)\n\n\n\n\n");
                    exit(0);

            }
}
void nonseeto()
{
    system("cls");
        int tester=0;
    int gorual;
FILE *utp;
utp=fopen("khetesurukorun.dat","r");
printf("Serial.no\t\tNo.of Items\t\tBill\t\t\t Orders\n--------------------------------------------------------------------------------------------------------------------------------------");

while(fscanf(utp,"%d %d %d %s \n",&aku.goru,&aku.kallu,&aku.nonbill,aku.nonorder)!=EOF)
{

    tester++;
    printf("\n\n %d\t\t\t    %d\t\t\t%d\t\t\t%s",aku.goru,aku.kallu,aku.nonbill,aku.nonorder);


}

printf("\n\n\n\n\n");
 if(tester==0)
    {

        printf("\n\n\n\nhey fucking guy...\n\nthis serial is not found...");
    }
printf("\n\n\n\n\n\n\n");
fclose(utp);
  c3_invalid:
    SetColor(46);
   printf("\n\n\n\n\n\n\n\t\t\t***** Enter 1 to again and 2 to exit the program *****");
    SetColor(43);
   printf("\n\t\t----------------------------------------------------------------------------------\n\n");
     SetColor(42);
   printf("\t\t\tenter your choice :: ");
   SetColor(44);
   scanf("%d",&w1);
  if(w1==1)
   {
      orderall();
   }
     else if(w1==2)
   {
                    SetColor(43);
                    system("cls");
                    printf("\n\n\n\n\n\t\tTHIS SITE IS DEVLOPED BY ME (........BISWA......)\n\n\n\n\n");
                    exit(0);
   }
                else
                    {
                        printf("\nInvalid!\a\a\a");
                        goto c3_invalid;
                    }
}
void drinkseento()
{
     int serial;
FILE *chhut;
chhut=fopen("ganja.dat","r");
printf("Serial.no\t\tNo.of Items\t\tBill\t\t\t Orders\n--------------------------------------------------------------------------------------------------------------------------------------");

int u=0;
while(fscanf(chhut,"%d %d %d %s \n",&hku.leri,&hku.viky,&hku.billi,hku.ordert)!=EOF)
{

    u++;
printf("\n\n %d\t\t\t    %d\t\t\t%d\t\t\t%s",hku.leri,hku.viky,hku.billi,hku.ordert);

}

 if(u==0)
    {

        printf("\n\n\n\nhey fucking guy...\n\nthis serial is not found...");
    }
printf("\n\n\n\n\n\n\n");
fclose(chhut);
c3_invalid:
    SetColor(46);
   printf("\n\n\n\n\n\n\n\t\t\t***** Enter 1 to again and 2 to exit the program *****");
    SetColor(43);
   printf("\n\t\t----------------------------------------------------------------------------------\n\n");
     SetColor(42);
   printf("\t\t\tenter your choice :: ");
   SetColor(44);
   scanf("%d",&w1);
  if(w1==1)
   {
      orderall();
   }
     else if(w1==2)
   {
                    SetColor(43);
                    system("cls");
                    printf("\n\n\n\n\n\t\tTHIS SITE IS DEVLOPED BY ME (........BISWA......)\n\n\n\n\n");
                    exit(0);
   }
                else
                    {
                        printf("\nInvalid!\a\a\a");
                        goto c3_invalid;
                    }
}
void sofsee()
{
      system("cls");
    int w1;
    int tester=0;
    int lorual;
FILE *myut;
myut=fopen("khabenki.dat","r");
printf("Serial.no\t\tNo.of Items\t\tBill\t\t\t Orders\n--------------------------------------------------------------------------------------------------------------------------------------");


while(fscanf(myut,"%d %d %d %s \n",&aa.loru,&aa.mallu,&aa.softdbill,aa.softdorder)!=EOF)
{
    tester++;
    printf("\n\n %d\t\t\t    %d\t\t\t%d\t\t\t%s",aa.loru,aa.mallu,aa.softdbill,aa.softdorder);

}
 if(tester==0)
    {

        printf("\n\n\n\nhey fucking guy...\n\nthis serial is not found...");
    }
printf("\n\n\n\n\n\n\n");
fclose(myut);
  c3_invalid:
    SetColor(46);
   printf("\n\n\n\n\n\n\n\t\t\t***** Enter 1 to go again and 2 to exit the program *****");
    SetColor(43);
   printf("\n\t\t----------------------------------------------------------------------------------\n\n");
     SetColor(42);
   printf("\t\t\tenter your choice :: ");
   SetColor(44);
   scanf("%d",&w1);
  if(w1==1)
   {
      orderall();
   }
     else if(w1==2)
   {
                    SetColor(43);
                    system("cls");
                    printf("\n\n\n\n\n\t\tTHIS SITE IS DEVLOPED BY ME (........BISWA......)\n\n\n\n\n");
                    exit(0);
   }
                else
                    {
                        printf("\nInvalid!\a\a\a");
                        goto c3_invalid;
                    }
}
void orderall()
{
    SetColor(42);
    system("cls");
    printf("<------------------------------------------->\n||\n||");
    SetColor(46);
    printf("\t1.VEG\n||\n||\n||\n||\t2.NON-VEG\n||\n||\n||\n||\t3.DRINKS\n||\n||\n||\n||\t4.SOFT-DRINKS\n||\n||\n||\n||\t5.BACK\n||\n");
    SetColor(42);
    printf("<------------------------------------------->");
    int fu=0;
    int po=0;
    while(1)
    {
        fu=0;
        switch(fu=getch())
        {
            case KEY_DOWN: po++;
                                                    if(po==1)
                                                    {
                                                            SetColor(42);
    system("cls");
    printf("<------------------------------------------->\n||\n||");
    SetColor(46);
    printf("\t1.VEG");
     SetColor(44);
    printf("*");
        SetColor(46);
    printf("\n||\n||\n||\n||\t2.NON-VEG\n||\n||\n||\n||\t3.DRINKS\n||\n||\n||\n||\t4.SOFT-DRINKS\n||\n||\n||\n||\t5.BACK\n||\n");
    SetColor(42);
    printf("<------------------------------------------->");
        if(getch()==13)
        seento();
                                                    }
                                                                                                      if(po==2)
                                                    {
                                                            SetColor(42);
    system("cls");
    printf("<------------------------------------------->\n||\n||");
    SetColor(46);
    printf("\t1.VEG\n||\n||\n||\n||\t2.NON-VEG");
        SetColor(44);
    printf("*");
        SetColor(46);
    printf("\n||\n||\n||\n||\t3.DRINKS\n||\n||\n||\n||\t4.SOFT-DRINKS\n||\n||\n||\n||\t5.BACK\n||\n");
    SetColor(42);
    printf("<------------------------------------------->");
     if(getch()==13)
    nonseeto();

                                                    }
                                                                                                      if(po==3)
                                                    {
                                                            SetColor(42);
    system("cls");
    printf("<------------------------------------------->\n||\n||");
    SetColor(46);
    printf("\t1.VEG\n||\n||\n||\n||\t2.NON-VEG\n||\n||\n||\n||\t3.DRINKS");
        SetColor(44);
    printf("*");
        SetColor(46);
    printf("\n||\n||\n||\n||\t4.SOFT-DRINKS\n||\n||\n||\n||\t5.BACK\n||\n");
    SetColor(42);
    printf("<------------------------------------------->");
    if(getch()==13)
    {
        system("cls");
        drinkseento();
    }

                                                    }
                                                                                                      if(po==4)
                                                    {
                                                            SetColor(42);
    system("cls");
    printf("<------------------------------------------->\n||\n||");
    SetColor(46);
    printf("\t1.VEG\n||\n||\n||\n||\t2.NON-VEG\n||\n||\n||\n||\t3.DRINKS\n||\n||\n||\n||\t4.SOFT-DRINKS");
    SetColor(44);
    printf("*");
    SetColor(46);
    printf("\n||\n||\n||\n||\t5.BACK\n||\n");
    SetColor(42);
    printf("<------------------------------------------->");
        if(getch()==13)
        sofsee();
                                                    }
                                                                                                                                                       if(po==5)
                                                    {
                                                            SetColor(42);
    system("cls");
    printf("<------------------------------------------->\n||\n||");
    SetColor(46);
    printf("\t1.VEG\n||\n||\n||\n||\t2.NON-VEG\n||\n||\n||\n||\t3.DRINKS\n||\n||\n||\n||\t4.SOFT-DRINKS\n||\n||\n||\n||\t5.BACK");
     SetColor(44);
    printf("*");
      SetColor(46);
    printf("\n||\n");
    SetColor(42);
    printf("<------------------------------------------->");
      if(getch()==13)
    {
        orderdetails();
    }
                                                    }
                                                    if(po==6)
                                                    {
                                                        po=1;
                                                              SetColor(42);
    system("cls");
    printf("<------------------------------------------->\n||\n||");
    SetColor(46);
    printf("\t1.VEG");
     SetColor(44);
    printf("*");
        SetColor(46);
    printf("\n||\n||\n||\n||\t2.NON-VEG\n||\n||\n||\n||\t3.DRINKS\n||\n||\n||\n||\t4.SOFT-DRINKS\n||\n||\n||\n||\t5.BACK\n||\n");
    SetColor(42);
    printf("<------------------------------------------->");
            if(getch()==13)
        seento();
                                                    }
                                                    break;            case KEY_UP: po--;
                                                    if(po==1)
                                                    {
                                                            SetColor(42);
    system("cls");
    printf("<------------------------------------------->\n||\n||");
    SetColor(46);
    printf("\t1.VEG");
     SetColor(44);
    printf("*");
        SetColor(46);
    printf("\n||\n||\n||\n||\t2.NON-VEG\n||\n||\n||\n||\t3.DRINKS\n||\n||\n||\n||\t4.SOFT-DRINKS\n||\n||\n||\n||\t5.BACK\n||\n");
    SetColor(42);
    printf("<------------------------------------------->");
            if(getch()==13)
        seento();
                                                    }
                                                                                                      if(po==2)
                                                    {
                                                            SetColor(42);
    system("cls");
    printf("<------------------------------------------->\n||\n||");
    SetColor(46);
    printf("\t1.VEG\n||\n||\n||\n||\t2.NON-VEG");
        SetColor(44);
    printf("*");
        SetColor(46);
    printf("\n||\n||\n||\n||\t3.DRINKS\n||\n||\n||\n||\t4.SOFT-DRINKS\n||\n||\n||\n||\t5.BACK\n||\n");
    SetColor(42);
    printf("<------------------------------------------->");
    if(getch()==13)
    nonseeto();
                                                    }
                                                                                                      if(po==3)
                                                    {
                                                            SetColor(42);
    system("cls");
    printf("<------------------------------------------->\n||\n||");
    SetColor(46);
    printf("\t1.VEG\n||\n||\n||\n||\t2.NON-VEG\n||\n||\n||\n||\t3.DRINKS");
        SetColor(44);
    printf("*");
        SetColor(46);
    printf("\n||\n||\n||\n||\t4.SOFT-DRINKS\n||\n||\n||\n||\t5.BACK\n||\n");
    SetColor(42);
    printf("<------------------------------------------->");
        if(getch()==13)
    {
        system("cls");
        drinkseento();
    }
                                                    }
                                                                                                      if(po==4)
                                                    {
                                                            SetColor(42);
    system("cls");
    printf("<------------------------------------------->\n||\n||");
    SetColor(46);
    printf("\t1.VEG\n||\n||\n||\n||\t2.NON-VEG\n||\n||\n||\n||\t3.DRINKS\n||\n||\n||\n||\t4.SOFT-DRINKS");
    SetColor(44);
    printf("*");
    SetColor(46);
    printf("\n||\n||\n||\n||\t5.BACK\n||\n");
    SetColor(42);
    printf("<------------------------------------------->");
    if(getch()==13)
        sofsee();
                                                    }
                                                                                                                                                       if(po==5)
                                                    {
                                                            SetColor(42);
    system("cls");
    printf("<------------------------------------------->\n||\n||");
    SetColor(46);
    printf("\t1.VEG\n||\n||\n||\n||\t2.NON-VEG\n||\n||\n||\n||\t3.DRINKS\n||\n||\n||\n||\t4.SOFT-DRINKS\n||\n||\n||\n||\t5.BACK");
     SetColor(44);
    printf("*");
      SetColor(46);
    printf("\n||\n");
    SetColor(42);
    printf("<------------------------------------------->");
      if(getch()==13)
    {
        orderdetails();
    }
                                                    }
                                                    if(po==0)
                                                    {
                                                        po=5;
                                                              SetColor(42);
    system("cls");
    printf("<------------------------------------------->\n||\n||");
    SetColor(46);
    printf("\t1.VEG\n||\n||\n||\n||\t2.NON-VEG\n||\n||\n||\n||\t3.DRINKS\n||\n||\n||\n||\t4.SOFT-DRINKS\n||\n||\n||\n||\t5.BACK");
     SetColor(44);
    printf("*");
      SetColor(46);
    printf("\n||\n");
    SetColor(42);
    printf("<------------------------------------------->");
    if(getch()==13)
    {
      orderdetails();
    }
                                                    }
                                                    break;
        case ESC_KEY: menu();
                        break;
        }
    }

}
 void softsee()
{
    system("cls");
    int w1;
    int tester=0;
    int lorual;
FILE *myut;
myut=fopen("khabenki.dat","r");
printf("\n\nenter your serial number :: ");
scanf("%d",&lorual);

while(fscanf(myut,"%d %d %d %s \n",&aa.loru,&aa.mallu,&aa.softdbill,aa.softdorder)!=EOF)
{
if(aa.loru==lorual)
{
    tester++;
    printf("\n\nYour total number of drinks ::  %d",aa.mallu);
printf("\n\nTotal  amount for soft drinks ::  %d",aa.softdbill);
printf("\n\nYour orders :: %s",aa.softdorder);
}

}
 if(tester==0)
    {

        printf("\n\n\n\nhey fucking guy...\n\nthis serial is not found...");
    }
printf("\n\n\n\n\n\n\n");
fclose(myut);
  c3_invalid:
    SetColor(46);
   printf("\n\n\n\n\n\n\n\t\t\t***** Enter 1 to go again and 2 to exit the program *****");
    SetColor(43);
   printf("\n\t\t----------------------------------------------------------------------------------\n\n");
     SetColor(42);
   printf("\t\t\tenter your choice :: ");
   SetColor(44);
   scanf("%d",&w1);
  if(w1==1)
   {
      orderdetails();
   }
     else if(w1==2)
   {
                    SetColor(43);
                    system("cls");
                    printf("\n\n\n\n\n\t\tTHIS SITE IS DEVLOPED BY ME (........BISWA......)\n\n\n\n\n");
                    exit(0);
   }
                else
                    {
                        printf("\nInvalid!\a\a\a");
                        goto c3_invalid;
                    }
}

void cudbc()
{
    system("cls");
    SetColor(46);
              FILE *vgot;
    vgot=fopen("new.dat","r");
    printf("SERIAL.NO \t\t\tTotal no of Bronze cupons\t\t\tName\n----------------------------------------------------------------------------------------------------------->");
while(fscanf(vgot,"%d %d %s \n",&aka.seno,&aka.cuno1,aka.username)!=EOF)
{
     printf("\n\n  %d\t\t\t\t\t%d\t\t\t\t\t%s",aka.seno,aka.cuno1,aka.username);

}

fclose(vgot);
}
void cupondetails()
{
    system("cls");
    SetColor(44);
    printf("\n\n\t\t\tCupon Details :-\n\t\t>----------------------------------->");
    SetColor(46);
    printf("\n\n\t\tIf you use this");
    SetColor(45);
    printf(" Bronze Cupon ");
     SetColor(46);
    printf("then you get ");
    SetColor(45);
    printf("500 ");
       SetColor(46);
    printf("rupee's off of your total bill ammount" );
    printf("\n\n\t\tYou get this cupon through two ways ,");
      SetColor(42);
    printf(" \n\n\t\t1st -----> Lucky Draw");
          SetColor(55);
    printf("\n\n\t\t2nd -----> Buy\n\n\n\n\n\n\t\t\t\t\t");
    SetColor(43);
    goat:
            SetColor(43);
printf("\n1 to go back,3 to add record & 2 to go Bronze cupon records enter your choice :: ");
int ank1;
scanf("%d",&ank1);
if(ank1==1)
{
    bc();
}
else if(ank1==2)
{
    cudbc();
}
else if(ank1==3)
{
             FILE *got;
    got=fopen("new.dat","a+");
        SetColor(43);
        label:
    printf("\n\nenter your serial number ::  ");
scanf("%d",&ala.seno);
while(fscanf(got,"%d %d %s \n",&aka.seno,&aka.cuno1,aka.username)!=EOF)
{
    if(ala.seno==aka.seno)
    {
   system("cls");
   printf("\n\n\nalready exists\n\n");

goto label;
    }

}
aka.seno=ala.seno;
printf("\nenter your name  ::  ");
scanf("%s",aka.username);
printf("\nenter your total no of bronze cupons  ::  ");
scanf("%d",&aka.cuno1);
printf("\n\n\nRecord added successfully....\n\n\n\n\n ");
fprintf(got,"%d %d %s \n",aka.seno,aka.cuno1,aka.username);
           fclose(got);
system("pause");
bc();
}
else
{
 goto goat;
}
}
void draw()
{

    int kuc=0;
        SetColor(44);
    printf("\n\n The winning numbers are:: ------> ");
    SetColor(43);
    printf("\n<----------------------------------------->");
    SetColor(45);
     int n=6,i;
  bool arr[10]={0};
  time_t t;
  srand((unsigned)time(&t));
  for(i=1;i<n;++i)
  {
    int r=rand()%10;
    if(!arr[r])
    {
        printf("\n\t%d\n",r);
        if(luck1==r || luck2==r  ||  luck3==r)
        {
            kuc++;
        }
    }

    else
      i--;
    arr[r]=1;

  }
  if(kuc>0)
  {
      printf("\n\n\nCONGRATS.......YOU WIN THIS CUPON(BRONZE)");
      c1++;
        printf("\n\nyour total no of bronze cupons ::  %d",c1);
            int futi;

                SetColor(44);
    printf("\n\nIF YOU WANT TO DRAW AGAIN THE PRESS '1' (AGAIN DEPOSIT rs:-200) ::  ");
    scanf("%d",&futi);
    if(futi==1)
    {
        system("cls");
            printf("\n\n # enter the lucky no :---> %d",luck1);
     SetColor(45);
        printf("\n\n # enter the lucky no :---> %d",luck2);
     SetColor(42);
        printf("\n\n # enter the lucky no :--->  %d",luck3);
        draw();
    }
    else
        {
              c1=0;
      bc();

        }
  }
  else if(kuc==0)
    {
        printf("\n\n\nSorry better luck next time...");
        Sleep(5000);
        int futii;
        SetColor(44);
    printf("\n\nIF YOU WANT TO DRAW AGAIN THE PRESS '1' (Again deposit rs:-200)::  ");
    scanf("%d",&futii);
    if(futii==1)
    {
                system("cls");
            printf("\n\n # enter the lucky no :---> %d",luck1);
     SetColor(45);
        printf("\n\n # enter the lucky no :---> %d",luck2);
     SetColor(42);
        printf("\n\n # enter the lucky no :--->  %d",luck3);
        draw();
    }
    else
        {
                 c1=0;
      bc();

        }
    }

   kuc=0;
}
void buy()
{
    int cout=0;
    int check;
    system("color f0");
    printf("\n\n\n\tWould you like to buy BRONZE CUPON???\n\n\t--->reply--->(1 to yes or 2 to no)--->  ");
    scanf("%d",&check);
    if(check==1)
    {
            going:
        SetColor(44);
        printf("\n\n|| Please deposit 500 rupees for cupon ||\n------------------------------------------------------  ");

                    cout++;
                    int fu;
                         SetColor(41);
                    printf("\n\nYour total BRONZE CUPONS :: ----->  %d",cout);
                               SetColor(41);
                printf("\n\nIf you buy again then press '1' (& deposit rs:-500) ----->  ");
                scanf("%d",&fu);
                if(fu==1)
            {
goto going;
                }
                else
                    {
                        cout=0;
                                bc();
                }


    }
        if(check==2)
    {
        system("cls");
        printf("\n\n\nOk,..........bYe ByE .....\n\n");
        Sleep(3000);
        bc();

    }

}
void luckeyd()
{

cytr:
    SetColor(46);
    system("cls");
    printf("\n\n # enter the lucky no :---> ");
    scanf("%d",&luck1);
     SetColor(45);
        printf("\n\n # enter the lucky no :---> ");
    scanf("%d",&luck2);
     SetColor(42);
        printf("\n\n # enter the lucky no :---> ");
    scanf("%d",&luck3);
    char bigin[133];
        printf("\n\n # # #Would you deposit 200 rupees for roll the digital dice(draw), say ('yes' or 'no') ::--->  ");
    scanf("%s",bigin);
    char tru[323]="yes";
    char fal[212]="no";
    int lol=strcmp(tru,bigin);
    int tol=strcmp(fal,bigin);
    if(lol==0)
    {
         draw();

    }
    else
    {
        system("cls");
                 goto cytr;
    }

}
void instruction()
{
    system("cls");
    printf("\n\n\n");
    SetColor(43);
    printf("\n\n\n\n\t\t\t   Lucky Draw Instruction\n\t\t<--------------------------------------------------------------->");
     SetColor(42);
    printf("\n\n\t\t1st  >==>  At first you choose any 3 lucky numbers between 1 to 10\n");
     SetColor(44);
    printf("\n\t\t2nd  >==>  Next deposit 200 rupees & say or type 'yes' to start roll the digital dice\n");
     SetColor(45);
    printf("\n\t\t3rd  >==>  Show the 5 winning numbers after rolling\n");
     SetColor(46);
    printf("\n\t\t4th  >==>  If  your any choosen number are match with computer's choosen numbers\n");
    printf("\t\t     >==>  then you are win Bronze cupon\n");
    SetColor(55);
    printf("\n\t\t5th  >==>  If  your choosen numbers are  not match with computer's choosen numbers,\n");
    printf("\t\t     >==>  then you are not get Bronze cupon\n\n\n\n\n\n\t\t\t\t\t\t\t\t");
    SetColor(44);
    system("pause");
    bc();
}
 void nonsee()
{
      int tester=0;
    int gorual;
FILE *ut;
ut=fopen("khetesurukorun.dat","r");
printf("\n\nenter your serial number :: ");
scanf("%d",&gorual);

while(fscanf(ut,"%d %d %d %s \n",&aku.goru,&aku.kallu,&aku.nonbill,aku.nonorder)!=EOF)
{
if(aku.goru==gorual)
{
    tester++;
    printf("\n\nYour total number of non-veg items  ::  %d",aku.kallu);
printf("\n\nTotal  amount for non-veg items ::  %d",aku.nonbill);
printf("\n\nYour orders :: %s",aku.nonorder);
}

}
 if(tester==0)
    {

        printf("\n\n\n\nhey fucking guy...\n\nthis serial is not found...");
    }
printf("\n\n\n\n\n\n\n");
fclose(ut);
  c3_invalid:
    SetColor(46);
   printf("\n\n\n\n\n\n\n\t\t\t***** Enter 1 to again and 2 to exit the program *****");
    SetColor(43);
   printf("\n\t\t----------------------------------------------------------------------------------\n\n");
     SetColor(42);
   printf("\t\t\tenter your choice :: ");
   SetColor(44);
   scanf("%d",&w1);
  if(w1==1)
   {
      orderdetails();
   }
     else if(w1==2)
   {
                    SetColor(43);
                    system("cls");
                    printf("\n\n\n\n\n\t\tTHIS SITE IS DEVLOPED BY ME (........BISWA......)\n\n\n\n\n");
                    exit(0);
   }
                else
                    {
                        printf("\nInvalid!\a\a\a");
                        goto c3_invalid;
                    }
}


 void drinkssee()
{
    int serial;
FILE *chhut;
chhut=fopen("ganja.dat","r");
printf("\n\nenter your serial number :: ");
scanf("%d",&serial);
int u=0;
while(fscanf(chhut,"%d %d %d %s \n",&hku.leri,&hku.viky,&hku.billi,hku.ordert)!=EOF)
{
if(hku.leri==serial)
{
    u++;
    printf("\nYour total number of orders ::  %d",hku.viky);
printf("\n\nTotal billiing amount for hard drinks ::  %d",hku.billi);
printf("\n\nYour orders :: %s",hku.ordert);
}
}

 if(u==0)
    {

        printf("\n\n\n\nhey fucking guy...\n\nthis serial is not found...");
    }
printf("\n\n\n\n\n\n\n");
fclose(chhut);
c3_invalid:
    SetColor(46);
   printf("\n\n\n\n\n\n\n\t\t\t***** Enter 1 to again and 2 to exit the program *****");
    SetColor(43);
   printf("\n\t\t----------------------------------------------------------------------------------\n\n");
     SetColor(42);
   printf("\t\t\tenter your choice :: ");
   SetColor(44);
   scanf("%d",&w1);
  if(w1==1)
   {
      orderdetails();
   }
     else if(w1==2)
   {
                    SetColor(43);
                    system("cls");
                    printf("\n\n\n\n\n\t\tTHIS SITE IS DEVLOPED BY ME (........BISWA......)\n\n\n\n\n");
                    exit(0);
   }
                else
                    {
                        printf("\nInvalid!\a\a\a");
                        goto c3_invalid;
                    }
}
int n1;
int main()
{
SetColor(5);
  printf("\n\n \n\n\n \n--------------------------------------------------------------------------------\n");
  SetColor(46);
printf("--------------------------------------------------------------------------------\n\n");
SetColor(3);
  printf("\t Official Site of ");
  SetColor(44);
    printf("---> BISWA DHABA <--- ");
    SetColor(3);
  printf("(Restuarent cum Bar)\n\n");
    SetColor(46);
printf("--------------------------------------------------------------------------------\n");
  SetColor(5);
  printf("\n--------------------------------------------------------------------------------");
 Sleep(5000);
menu();
  getch();
  return 0;
}
void SetColor(int ForgC)
 {
 WORD wColor;

  HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
  CONSOLE_SCREEN_BUFFER_INFO csbi;

                       //We use csbi for the wAttributes word.
 if(GetConsoleScreenBufferInfo(hStdOut, &csbi))
 {
                 //Mask out all but the background attribute, and add in the forgournd color
      wColor = (csbi.wAttributes & 0xF0) + (ForgC & 0x0F);
      SetConsoleTextAttribute(hStdOut, wColor);
 }
 return;
}
void SetColorAndBackground(int ForgC, int BackC)
{
     WORD wColor = ((BackC & 0x0F) << 4) + (ForgC & 0x0F);
     SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), wColor);
}

void cash()
{
    system("cls");

}


void counter3()
{
        int b=0,c3=0;
        system("color f");
    system("cls");
SetColor(42);
printf("\n\t\t\t%c\t\t%c\n\t\t\t%c\t\t%c\n\t\t\t%c\t\t%c\n\t\t\t%c\t\t%c\n\t\t\t%c\t\t%c\n\t\t\t%c\t\t%c\n\t\t\t%c\t\t%c\n\t\t",178,178,178,178,178,178,178,178,178,178,178,178,178,178);
SetColor(45);
printf("|--------------------------------\n\t\t||\t\t\t\t|");
printf("\n\t\t||\t\t\t\t|\n\t\t||\t\t\t\t|\n\t\t|");
SetColor(43);
printf("-----> 1.");
SetColor(46);
printf("CASH COUNTER");
SetColor(45);
printf("\t\t|");
SetColor(45);
printf("\n\t\t||\t\t\t\t%c\n\t\t||\t\t\t\t%c\n\t\t|",31,30);
SetColor(43);
printf("-----> 2.");
SetColor(46);
printf("RECORDS\t");
SetColor(45);
printf("\t|");
SetColor(45);
printf("\n\t\t||\t\t\t\t%c\n\t\t||\t\t\t\t%c\n\t\t|",31,30);
SetColor(43);
printf("-----> 3.");
SetColor(46);
printf("MENU            ");
SetColor(45);
printf("\t|");
SetColor(45);
printf("\n\t\t||\t\t\t\t|\n\t\t||\t\t\t\t|\n\t\t|--------------------------------\n\n\n");
SetColor(44);
while(1)
{
    b=0;
switch((b=getch()))
{
    case KEY_DOWN:  c3++;
                                      if(c3==1)
                                        {
                                                   system("color f");
    system("cls");
SetColor(42);
printf("\n\t\t\t%c\t\t%c\n\t\t\t%c\t\t%c\n\t\t\t%c\t\t%c\n\t\t\t%c\t\t%c\n\t\t\t%c\t\t%c\n\t\t\t%c\t\t%c\n\t\t\t%c\t\t%c\n\t\t",178,178,178,178,178,178,178,178,178,178,178,178,178,178);
SetColor(45);
printf("|--------------------------------\n\t\t||\t\t\t\t|");
printf("\n\t\t||\t\t\t\t|\n\t\t||\t\t\t\t|\n\t\t|");
SetColor(43);
printf("-----> 1.");
SetColor(44);
printf("CASH COUNTER<---");
SetColor(45);
printf("\t|");
SetColor(45);
printf("\n\t\t||\t\t\t\t%c\n\t\t||\t\t\t\t%c\n\t\t|",31,30);
SetColor(43);
printf("-----> 2.");
SetColor(46);
printf("RECORDS	");
SetColor(45);
printf("\t|");
SetColor(45);
printf("\n\t\t||\t\t\t\t%c\n\t\t||\t\t\t\t%c\n\t\t|",31,30);
SetColor(43);
printf("-----> 3.");
SetColor(46);
printf("MENU            ");
SetColor(45);
printf("\t|");
SetColor(45);
printf("\n\t\t||\t\t\t\t|\n\t\t||\t\t\t\t|\n\t\t|--------------------------------\n\n\n");
SetColor(44);
if(getch()==13)
   tdr();
    }
    if(c3==2)
         {
             system("color f");
    system("cls");
SetColor(42);
printf("\n\t\t\t%c\t\t%c\n\t\t\t%c\t\t%c\n\t\t\t%c\t\t%c\n\t\t\t%c\t\t%c\n\t\t\t%c\t\t%c\n\t\t\t%c\t\t%c\n\t\t\t%c\t\t%c\n\t\t",178,178,178,178,178,178,178,178,178,178,178,178,178,178);
SetColor(45);
printf("|--------------------------------\n\t\t||\t\t\t\t|");
printf("\n\t\t||\t\t\t\t|\n\t\t||\t\t\t\t|\n\t\t|");
SetColor(43);
printf("-----> 1.");
SetColor(46);
printf("CASH COUNTER");
SetColor(45);
printf("\t\t|");
SetColor(45);
printf("\n\t\t||\t\t\t\t%c\n\t\t||\t\t\t\t%c\n\t\t|",31,30);
SetColor(43);
printf("-----> 2.");
SetColor(44);
printf("RECORDS	<---");
SetColor(45);
printf("\t|");
SetColor(45);
printf("\n\t\t||\t\t\t\t%c\n\t\t||\t\t\t\t%c\n\t\t|",31,30);
SetColor(43);
printf("-----> 3.");
SetColor(46);
printf("MENU            ");
SetColor(45);
printf("\t|");
SetColor(45);
printf("\n\t\t||\t\t\t\t|\n\t\t||\t\t\t\t|\n\t\t|--------------------------------\n\n\n");
SetColor(44);
if(getch()==13)
{
tbsee();
}
}
if(c3==3)
{
           system("color f");
    system("cls");
SetColor(42);
printf("\n\t\t\t%c\t\t%c\n\t\t\t%c\t\t%c\n\t\t\t%c\t\t%c\n\t\t\t%c\t\t%c\n\t\t\t%c\t\t%c\n\t\t\t%c\t\t%c\n\t\t\t%c\t\t%c\n\t\t",178,178,178,178,178,178,178,178,178,178,178,178,178,178);
SetColor(45);
printf("|--------------------------------\n\t\t||\t\t\t\t|");
printf("\n\t\t||\t\t\t\t|\n\t\t||\t\t\t\t|\n\t\t|");
SetColor(43);
printf("-----> 1.");
SetColor(46);
printf("CASH COUNTER");
SetColor(45);
printf("\t\t|");
SetColor(45);
printf("\n\t\t||\t\t\t\t%c\n\t\t||\t\t\t\t%c\n\t\t|",31,30);
SetColor(43);
printf("-----> 2.");
SetColor(46);
printf("RECORDS	");
SetColor(45);
printf("\t|");
SetColor(45);
printf("\n\t\t||\t\t\t\t%c\n\t\t||\t\t\t\t%c\n\t\t|",31,30);
SetColor(43);
printf("-----> 3.");
SetColor(44);
printf("MENU<---            ");
SetColor(45);
printf("\t|");
SetColor(45);
printf("\n\t\t||\t\t\t\t|\n\t\t||\t\t\t\t|\n\t\t|--------------------------------\n\n\n");
SetColor(44);
    if(getch()==13)
    {
        menu();
    }
}
if(c3==4 || c3==5)
{
    c3=1;
             system("color f");
    system("cls");
SetColor(42);
printf("\n\t\t\t%c\t\t%c\n\t\t\t%c\t\t%c\n\t\t\t%c\t\t%c\n\t\t\t%c\t\t%c\n\t\t\t%c\t\t%c\n\t\t\t%c\t\t%c\n\t\t\t%c\t\t%c\n\t\t",178,178,178,178,178,178,178,178,178,178,178,178,178,178);
SetColor(45);
printf("|--------------------------------\n\t\t||\t\t\t\t|");
printf("\n\t\t||\t\t\t\t|\n\t\t||\t\t\t\t|\n\t\t|");
SetColor(43);
printf("-----> 1.");
SetColor(44);
printf("CASH COUNTER<---");
SetColor(45);
printf("\t|");
SetColor(45);
printf("\n\t\t||\t\t\t\t%c\n\t\t||\t\t\t\t%c\n\t\t|",31,30);
SetColor(43);
printf("-----> 2.");
SetColor(46);
printf("RECORDS	");
SetColor(45);
printf("\t|");
SetColor(45);
printf("\n\t\t||\t\t\t\t%c\n\t\t||\t\t\t\t%c\n\t\t|",31,30);
SetColor(43);
printf("-----> 3.");
SetColor(46);
printf("MENU            ");
SetColor(45);
printf("\t|");
SetColor(45);
printf("\n\t\t||\t\t\t\t|\n\t\t||\t\t\t\t|\n\t\t|--------------------------------\n\n\n");
SetColor(44);
    if(getch()==13)
    {
        tdr();
    }
}
                                        break;
    case KEY_UP: c3--;
                                                                                 if(c3==1)
                                        {
                                                   system("color f");
    system("cls");
SetColor(42);
printf("\n\t\t\t%c\t\t%c\n\t\t\t%c\t\t%c\n\t\t\t%c\t\t%c\n\t\t\t%c\t\t%c\n\t\t\t%c\t\t%c\n\t\t\t%c\t\t%c\n\t\t\t%c\t\t%c\n\t\t",178,178,178,178,178,178,178,178,178,178,178,178,178,178);
SetColor(45);
printf("|--------------------------------\n\t\t||\t\t\t\t|");
printf("\n\t\t||\t\t\t\t|\n\t\t||\t\t\t\t|\n\t\t|");
SetColor(43);
printf("-----> 1.");
SetColor(44);
printf("CASH COUNTER<---");
SetColor(45);
printf("\t|");
SetColor(45);
printf("\n\t\t||\t\t\t\t%c\n\t\t||\t\t\t\t%c\n\t\t|",31,30);
SetColor(43);
printf("-----> 2.");
SetColor(46);
printf("RECORDS	");
SetColor(45);
printf("\t|");
SetColor(45);
printf("\n\t\t||\t\t\t\t%c\n\t\t||\t\t\t\t%c\n\t\t|",31,30);
SetColor(43);
printf("-----> 3.");
SetColor(46);
printf("MENU            ");
SetColor(45);
printf("\t|");
SetColor(45);
printf("\n\t\t||\t\t\t\t|\n\t\t||\t\t\t\t|\n\t\t|--------------------------------\n\n\n");
SetColor(44);
if(getch()==13)
    cash();
    }
    if(c3==2)
         {
             system("color f");
    system("cls");
SetColor(42);
printf("\n\t\t\t%c\t\t%c\n\t\t\t%c\t\t%c\n\t\t\t%c\t\t%c\n\t\t\t%c\t\t%c\n\t\t\t%c\t\t%c\n\t\t\t%c\t\t%c\n\t\t\t%c\t\t%c\n\t\t",178,178,178,178,178,178,178,178,178,178,178,178,178,178);
SetColor(45);
printf("|--------------------------------\n\t\t||\t\t\t\t|");
printf("\n\t\t||\t\t\t\t|\n\t\t||\t\t\t\t|\n\t\t|");
SetColor(43);
printf("-----> 1.");
SetColor(46);
printf("CASH COUNTER");
SetColor(45);
printf("\t\t|");
SetColor(45);
printf("\n\t\t||\t\t\t\t%c\n\t\t||\t\t\t\t%c\n\t\t|",31,30);
SetColor(43);
printf("-----> 2.");
SetColor(44);
printf("RECORDS	<---");
SetColor(45);
printf("\t|");
SetColor(45);
printf("\n\t\t||\t\t\t\t%c\n\t\t||\t\t\t\t%c\n\t\t|",31,30);
SetColor(43);
printf("-----> 3.");
SetColor(46);
printf("MENU            ");
SetColor(45);
printf("\t|");
SetColor(45);
printf("\n\t\t||\t\t\t\t|\n\t\t||\t\t\t\t|\n\t\t|--------------------------------\n\n\n");
SetColor(44);
if(getch()==13)
{
tbsee();
}
}
if(c3==3)
{
           system("color f");
    system("cls");
SetColor(42);
printf("\n\t\t\t%c\t\t%c\n\t\t\t%c\t\t%c\n\t\t\t%c\t\t%c\n\t\t\t%c\t\t%c\n\t\t\t%c\t\t%c\n\t\t\t%c\t\t%c\n\t\t\t%c\t\t%c\n\t\t",178,178,178,178,178,178,178,178,178,178,178,178,178,178);
SetColor(45);
printf("|--------------------------------\n\t\t||\t\t\t\t|");
printf("\n\t\t||\t\t\t\t|\n\t\t||\t\t\t\t|\n\t\t|");
SetColor(43);
printf("-----> 1.");
SetColor(46);
printf("CASH COUNTER");
SetColor(45);
printf("\t\t|");
SetColor(45);
printf("\n\t\t||\t\t\t\t%c\n\t\t||\t\t\t\t%c\n\t\t|",31,30);
SetColor(43);
printf("-----> 2.");
SetColor(46);
printf("RECORDS	");
SetColor(45);
printf("\t|");
SetColor(45);
printf("\n\t\t||\t\t\t\t%c\n\t\t||\t\t\t\t%c\n\t\t|",31,30);
SetColor(43);
printf("-----> 3.");
SetColor(44);
printf("MENU<---            ");
SetColor(45);
printf("\t|");
SetColor(45);
printf("\n\t\t||\t\t\t\t|\n\t\t||\t\t\t\t|\n\t\t|--------------------------------\n\n\n");
SetColor(44);
    if(getch()==13)
    {
        menu();
    }
}
if(c3==0)
{
    c3=4;
             system("color f");
    system("cls");
SetColor(42);
printf("\n\t\t\t%c\t\t%c\n\t\t\t%c\t\t%c\n\t\t\t%c\t\t%c\n\t\t\t%c\t\t%c\n\t\t\t%c\t\t%c\n\t\t\t%c\t\t%c\n\t\t\t%c\t\t%c\n\t\t",178,178,178,178,178,178,178,178,178,178,178,178,178,178);
SetColor(45);
printf("|--------------------------------\n\t\t||\t\t\t\t|");
printf("\n\t\t||\t\t\t\t|\n\t\t||\t\t\t\t|\n\t\t|");
SetColor(43);
printf("-----> 1.");
SetColor(46);
printf("CASH COUNTER");
SetColor(45);
printf("\t\t|");
SetColor(45);
printf("\n\t\t||\t\t\t\t%c\n\t\t||\t\t\t\t%c\n\t\t|",31,30);
SetColor(43);
printf("-----> 2.");
SetColor(46);
printf("RECORDS	");
SetColor(45);
printf("\t|");
SetColor(45);
printf("\n\t\t||\t\t\t\t%c\n\t\t||\t\t\t\t%c\n\t\t|",31,30);
SetColor(43);
printf("-----> 3.");
SetColor(44);
printf("MENU<---            ");
SetColor(45);
printf("\t|");
SetColor(45);
printf("\n\t\t||\t\t\t\t|\n\t\t||\t\t\t\t|\n\t\t|--------------------------------\n\n\n");
SetColor(44);
    if(getch()==13)
    {
        menu();
    }
}
                                        break;
   case ESC_KEY: menu();
                                break;
}
}
}
void bc()
{
    system("cls");
     int simba=0;
    system("title BISWA DHABA");
    system("mode 1000");
    int khabar;
    system("cls");
system("color a");
SetColorAndBackground(44,0);
printf("\n");
printf("      %c\t\t\t\t\t\t\t \t  %c",30,30);
printf("\n      |\t\t\t\t\t\t\t\t  |");
printf("\n   <----------------------------------------------------------------->");
printf("\n      ||---------------------------------------------------------||");
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n");
printf("      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(42,0);
printf("\n");
SetColorAndBackground(44,0);
printf("      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("\t\t\t\t\t\t\t");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(43,0);
printf("\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 WELLCOME \xB2\xB2\xB2\xB2\xB2\xB2\xB2\t");
SetColorAndBackground(42,0);
printf("\t\t|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("\t\t\t\t\t\t\t");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
printf("\n      ||\t\t\t\t\t\t\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
printf("\t");
SetColor(42);
printf("1.LUCKY DRAW	");
SetColor(44);
printf("\t\t\t");
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(46);
printf("\t2.CUPON DETAILS\t\t\t\t");
SetColor(44);
printf("\t ||");
SetColor(44);
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(45);
printf("\t3.INSTRUCTION\t\t\t\t");
SetColor(44);
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(6);
printf("\t4.BUY\t\t\t\t\t");
SetColor(44);
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(55);
printf("\t5.BACK\t\t\t");
SetColor(44);
printf("\t\t   \t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(42);
printf("---------------------------------------------------------");
SetColor(44);
printf("||");
SetColor(44);
printf("\n      ||");
SetColor(42);
printf("---------------------------------------------------------");
SetColor(44);
printf("||");
printf("\n      ||");
SetColor(44);
printf("---------------------------------------------------------");
printf("||");
printf("\n   <----------------------------------------------------------------->");
printf("\n");
printf("      |\t\t\t\t\t\t\t\t  |",94);
printf("\n      %c\t\t\t\t\t\t\t\t  %c",31,31);
SetColor(46);
printf("\n\t    Press  Esc _key to refresh..(one or two times)");
    while(1)
    {

    khabar=0;


switch((khabar=getch()))
{
    case KEY_DOWN:              simba++;
                                       if(simba==1)
{
 system("cls");
system("color a");
SetColorAndBackground(44,0);
printf("\n");
printf("      %c\t\t\t\t\t\t\t \t  %c",30,30);
printf("\n      |\t\t\t\t\t\t\t\t  |");
printf("\n   <----------------------------------------------------------------->");
printf("\n      ||---------------------------------------------------------||");
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n");
printf("      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(42,0);
printf("\n");
SetColorAndBackground(44,0);
printf("      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("\t\t\t\t\t\t\t");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(43,0);
printf("\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 WELLCOME \xB2\xB2\xB2\xB2\xB2\xB2\xB2\t");
SetColorAndBackground(42,0);
printf("\t\t|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("\t\t\t\t\t\t\t");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
printf("\n      ||\t\t\t\t\t\t\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
printf("  ---> ");
SetColor(42);
printf("1.LUCKY DRAW	\t");
SetColor(44);
printf("\t\t");
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(46);
printf("\t2.CUPON DETAILS\t\t\t\t");
SetColor(44);
printf("\t ||");
SetColor(44);
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(45);
printf("\t3.INSTRUCTION\t\t\t\t");
SetColor(44);
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(6);
printf("\t4.BUY\t\t\t\t\t");
SetColor(44);
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(55);
printf("\t5.BACK\t\t\t");
SetColor(44);
printf("\t\t   \t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(42);
printf("---------------------------------------------------------");
SetColor(44);
printf("||");
SetColor(44);
printf("\n      ||");
SetColor(42);
printf("---------------------------------------------------------");
SetColor(44);
printf("||");
printf("\n      ||");
SetColor(44);
printf("---------------------------------------------------------");
printf("||");
printf("\n   <----------------------------------------------------------------->");
printf("\n");
printf("      |\t\t\t\t\t\t\t\t  |",94);
printf("\n      %c\t\t\t\t\t\t\t\t  %c",31,31);
if(getch()==13)
{
    system("cls");
    luckeyd();
}

}
  if(simba==2)
{
 system("cls");
system("color a");
SetColorAndBackground(44,0);
printf("\n");
printf("      %c\t\t\t\t\t\t\t \t  %c",30,30);
printf("\n      |\t\t\t\t\t\t\t\t  |");
printf("\n   <----------------------------------------------------------------->");
printf("\n      ||---------------------------------------------------------||");
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n");
printf("      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(42,0);
printf("\n");
SetColorAndBackground(44,0);
printf("      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("\t\t\t\t\t\t\t");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(43,0);
printf("\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 WELLCOME \xB2\xB2\xB2\xB2\xB2\xB2\xB2\t");
SetColorAndBackground(42,0);
printf("\t\t|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("\t\t\t\t\t\t\t");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
printf("\n      ||\t\t\t\t\t\t\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColorAndBackground(47,0);
printf("\t1.LUCKY DRAW	\t\t\t");
SetColor(44);
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
printf("  ---> ");
SetColor(43);
printf("2.CUPON DETAILS\t\t\t\t");
SetColor(44);
printf("\t ||");
SetColor(44);
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(45);
printf("\t3.INSTRUCTION\t\t\t\t");
SetColor(44);
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(6);
printf("\t4.BUY\t\t\t\t\t");
SetColor(44);
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(55);
printf("\t5.BACK\t\t\t");
SetColor(44);
printf("\t\t   \t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(42);
printf("---------------------------------------------------------");
SetColor(44);
printf("||");
SetColor(44);
printf("\n      ||");
SetColor(42);
printf("---------------------------------------------------------");
SetColor(44);
printf("||");
printf("\n      ||");
SetColor(44);
printf("---------------------------------------------------------");
printf("||");
printf("\n   <----------------------------------------------------------------->");
printf("\n");
printf("      |\t\t\t\t\t\t\t\t  |",94);
printf("\n      %c\t\t\t\t\t\t\t\t  %c",31,31);
if(getch()==13)
{
    system("cls");
    cupondetails();
}

}
          if(simba==3)
{
 system("cls");
system("color a");
SetColorAndBackground(44,0);
printf("\n");
printf("      %c\t\t\t\t\t\t\t \t  %c",30,30);
printf("\n      |\t\t\t\t\t\t\t\t  |");
printf("\n   <----------------------------------------------------------------->");
printf("\n      ||---------------------------------------------------------||");
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n");
printf("      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(42,0);
printf("\n");
SetColorAndBackground(44,0);
printf("      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("\t\t\t\t\t\t\t");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(43,0);
printf("\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 WELLCOME \xB2\xB2\xB2\xB2\xB2\xB2\xB2\t");
SetColorAndBackground(42,0);
printf("\t\t|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("\t\t\t\t\t\t\t");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
printf("\n      ||\t\t\t\t\t\t\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColorAndBackground(47,0);
printf("\t1.LUCKY DRAW	\t\t\t");
SetColor(44);
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColorAndBackground(46,0);
printf("\t2.CUPON DETAILS\t\t\t\t");
SetColor(44);
printf("\t ||");
SetColor(44);
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
printf("  ---> ");
SetColor(43);
printf("3.INSTRUCTION\t\t\t\t");
SetColor(44);
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(6);
printf("\t4.BUY\t\t\t\t\t");
SetColor(44);
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(55);
printf("\t5.BACK\t\t\t");
SetColor(44);
printf("\t\t   \t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(42);
printf("---------------------------------------------------------");
SetColor(44);
printf("||");
SetColor(44);
printf("\n      ||");
SetColor(42);
printf("---------------------------------------------------------");
SetColor(44);
printf("||");
printf("\n      ||");
SetColor(44);
printf("---------------------------------------------------------");
printf("||");
printf("\n   <----------------------------------------------------------------->");
printf("\n");
printf("      |\t\t\t\t\t\t\t\t  |",94);
printf("\n      %c\t\t\t\t\t\t\t\t  %c",31,31);
if(getch()==13)
{
    system("cls");
    instruction();
}

}
      if(simba==4)
{
 system("cls");
system("color a");
SetColorAndBackground(44,0);
printf("\n");
printf("      %c\t\t\t\t\t\t\t \t  %c",30,30);
printf("\n      |\t\t\t\t\t\t\t\t  |");
printf("\n   <----------------------------------------------------------------->");
printf("\n      ||---------------------------------------------------------||");
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n");
printf("      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(42,0);
printf("\n");
SetColorAndBackground(44,0);
printf("      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("\t\t\t\t\t\t\t");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(43,0);
printf("\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 WELLCOME \xB2\xB2\xB2\xB2\xB2\xB2\xB2\t");
SetColorAndBackground(42,0);
printf("\t\t|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("\t\t\t\t\t\t\t");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
printf("\n      ||\t\t\t\t\t\t\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColorAndBackground(47,0);
printf("\t1.LUCKY DRAW	\t\t\t");
SetColor(44);
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColorAndBackground(46,0);
printf("\t2.CUPON DETAILS\t\t\t\t");
SetColor(44);
printf("\t ||");
SetColor(44);
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColorAndBackground(45,0);
printf("\t3.INSTRUCTION\t\t\t\t");
SetColor(44);
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
printf("  ---> ");
SetColor(43);
printf("4.BUY\t\t\t\t\t");
SetColor(44);
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColorAndBackground(55,0);
printf("\t5.BACK\t\t\t");
SetColor(44);
printf("\t\t   \t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(42);
printf("---------------------------------------------------------");
SetColor(44);
printf("||");
SetColor(44);
printf("\n      ||");
SetColor(42);
printf("---------------------------------------------------------");
SetColor(44);
printf("||");
printf("\n      ||");
SetColor(44);
printf("---------------------------------------------------------");
printf("||");
printf("\n   <----------------------------------------------------------------->");
printf("\n");
printf("      |\t\t\t\t\t\t\t\t  |",94);
printf("\n      %c\t\t\t\t\t\t\t\t  %c",31,31);
if(getch()==13)
{
    system("cls");
    buy();
}
system("cls");
}
 if(simba==5)
{
 system("cls");
system("color a");
SetColorAndBackground(44,0);
printf("\n");
printf("      %c\t\t\t\t\t\t\t \t  %c",30,30);
printf("\n      |\t\t\t\t\t\t\t\t  |");
printf("\n   <----------------------------------------------------------------->");
printf("\n      ||---------------------------------------------------------||");
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n");
printf("      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(42,0);
printf("\n");
SetColorAndBackground(44,0);
printf("      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("\t\t\t\t\t\t\t");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(43,0);
printf("\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 WELLCOME \xB2\xB2\xB2\xB2\xB2\xB2\xB2\t");
SetColorAndBackground(42,0);
printf("\t\t|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("\t\t\t\t\t\t\t");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
printf("\n      ||\t\t\t\t\t\t\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColorAndBackground(47,0);
printf("\t1.LUCKY DRAW	\t\t\t");
SetColor(44);
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColorAndBackground(46,0);
printf("\t2.CUPON DETAILS\t\t\t\t");
SetColor(44);
printf("\t ||");
SetColor(44);
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColorAndBackground(45,0);
printf("\t3.INSTRUCTION\t\t\t\t");
SetColor(44);
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColorAndBackground(6,0);
printf("\t4.BUY\t\t\t\t\t");
SetColor(44);
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
printf("  ---> ");
SetColor(43);
printf("5.BACK\t\t\t");
SetColor(44);
printf("\t\t   \t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(42);
printf("---------------------------------------------------------");
SetColor(44);
printf("||");
SetColor(44);
printf("\n      ||");
SetColor(42);
printf("---------------------------------------------------------");
SetColor(44);
printf("||");
printf("\n      ||");
SetColor(44);
printf("---------------------------------------------------------");
printf("||");
printf("\n   <----------------------------------------------------------------->");
printf("\n");
printf("      |\t\t\t\t\t\t\t\t  |",94);
printf("\n      %c\t\t\t\t\t\t\t\t  %c",31,31);
if(getch()==13)
{
 counter2();

}

}
if(simba==6)
{
    simba=1;
    system("cls");
system("color a");
SetColorAndBackground(44,0);
printf("\n");
printf("      %c\t\t\t\t\t\t\t \t  %c",30,30);
printf("\n      |\t\t\t\t\t\t\t\t  |");
printf("\n   <----------------------------------------------------------------->");
printf("\n      ||---------------------------------------------------------||");
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n");
printf("      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(42,0);
printf("\n");
SetColorAndBackground(44,0);
printf("      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("\t\t\t\t\t\t\t");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(43,0);
printf("\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 WELLCOME \xB2\xB2\xB2\xB2\xB2\xB2\xB2\t");
SetColorAndBackground(42,0);
printf("\t\t|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("\t\t\t\t\t\t\t");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
printf("\n      ||\t\t\t\t\t\t\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
printf("  ---> ");
SetColor(43);
printf("1.LUCKY DRAW	\t");
SetColor(44);
printf("\t\t");
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(46);
printf("\t2.CUPON DETAILS\t\t\t\t");
SetColor(44);
printf("\t ||");
SetColor(44);
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(45);
printf("\t3.INSTRUCTION\t\t\t\t");
SetColor(44);
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(6);
printf("\t4.BUY\t\t\t\t\t");
SetColor(44);
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(55);
printf("\t5.BACK\t\t\t");
SetColor(44);
printf("\t\t   \t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(42);
printf("---------------------------------------------------------");
SetColor(44);
printf("||");
SetColor(44);
printf("\n      ||");
SetColor(42);
printf("---------------------------------------------------------");
SetColor(44);
printf("||");
printf("\n      ||");
SetColor(44);
printf("---------------------------------------------------------");
printf("||");
printf("\n   <----------------------------------------------------------------->");
printf("\n");
printf("      |\t\t\t\t\t\t\t\t  |",94);
printf("\n      %c\t\t\t\t\t\t\t\t  %c",31,31);
if(getch()==13)
{
    system("cls");
    luckeyd();
}

}

break;

    case KEY_UP:      simba--;

                                         if(simba==1)
{
 system("cls");
system("color a");
SetColorAndBackground(44,0);
printf("\n");
printf("      %c\t\t\t\t\t\t\t \t  %c",30,30);
printf("\n      |\t\t\t\t\t\t\t\t  |");
printf("\n   <----------------------------------------------------------------->");
printf("\n      ||---------------------------------------------------------||");
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n");
printf("      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(42,0);
printf("\n");
SetColorAndBackground(44,0);
printf("      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("\t\t\t\t\t\t\t");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(43,0);
printf("\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 WELLCOME \xB2\xB2\xB2\xB2\xB2\xB2\xB2\t");
SetColorAndBackground(42,0);
printf("\t\t|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("\t\t\t\t\t\t\t");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
printf("\n      ||\t\t\t\t\t\t\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
printf("  ---> ");
SetColor(42);
printf("1.LUCKY DRAW	\t");
SetColor(44);
printf("\t\t");
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(46);
printf("\t2.CUPON DETAILS\t\t\t\t");
SetColor(44);
printf("\t ||");
SetColor(44);
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(45);
printf("\t3.INSTRUCTION\t\t\t\t");
SetColor(44);
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(6);
printf("\t4.BUY\t\t\t\t\t");
SetColor(44);
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(55);
printf("\t5.BACK\t\t\t");
SetColor(44);
printf("\t\t   \t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(42);
printf("---------------------------------------------------------");
SetColor(44);
printf("||");
SetColor(44);
printf("\n      ||");
SetColor(42);
printf("---------------------------------------------------------");
SetColor(44);
printf("||");
printf("\n      ||");
SetColor(44);
printf("---------------------------------------------------------");
printf("||");
printf("\n   <----------------------------------------------------------------->");
printf("\n");
printf("      |\t\t\t\t\t\t\t\t  |",94);
printf("\n      %c\t\t\t\t\t\t\t\t  %c",31,31);
if(getch()==13)
{
    system("cls");
    luckeyd();
}
}
  if(simba==2)
{
 system("cls");
system("color a");
SetColorAndBackground(44,0);
printf("\n");
printf("      %c\t\t\t\t\t\t\t \t  %c",30,30);
printf("\n      |\t\t\t\t\t\t\t\t  |");
printf("\n   <----------------------------------------------------------------->");
printf("\n      ||---------------------------------------------------------||");
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n");
printf("      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(42,0);
printf("\n");
SetColorAndBackground(44,0);
printf("      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("\t\t\t\t\t\t\t");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(43,0);
printf("\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 WELLCOME \xB2\xB2\xB2\xB2\xB2\xB2\xB2\t");
SetColorAndBackground(42,0);
printf("\t\t|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("\t\t\t\t\t\t\t");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
printf("\n      ||\t\t\t\t\t\t\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColorAndBackground(47,0);
printf("\t1.LUCKY DRAW	\t\t\t");
SetColor(44);
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
printf("  ---> ");
SetColor(43);
printf("2.CUPON DETAILS\t\t\t\t");
SetColor(44);
printf("\t ||");
SetColor(44);
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(45);
printf("\t3.INSTRUCTION\t\t\t\t");
SetColor(44);
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(6);
printf("\t4.BUY\t\t\t\t\t");
SetColor(44);
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(55);
printf("\t5.BACK\t\t\t");
SetColor(44);
printf("\t\t   \t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(42);
printf("---------------------------------------------------------");
SetColor(44);
printf("||");
SetColor(44);
printf("\n      ||");
SetColor(42);
printf("---------------------------------------------------------");
SetColor(44);
printf("||");
printf("\n      ||");
SetColor(44);
printf("---------------------------------------------------------");
printf("||");
printf("\n   <----------------------------------------------------------------->");
printf("\n");
printf("      |\t\t\t\t\t\t\t\t  |",94);
printf("\n      %c\t\t\t\t\t\t\t\t  %c",31,31);
if(getch()==13)
{
    system("cls");
    cupondetails();
}
}
          if(simba==3)
{
 system("cls");
system("color a");
SetColorAndBackground(44,0);
printf("\n");
printf("      %c\t\t\t\t\t\t\t \t  %c",30,30);
printf("\n      |\t\t\t\t\t\t\t\t  |");
printf("\n   <----------------------------------------------------------------->");
printf("\n      ||---------------------------------------------------------||");
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n");
printf("      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(42,0);
printf("\n");
SetColorAndBackground(44,0);
printf("      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("\t\t\t\t\t\t\t");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(43,0);
printf("\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 WELLCOME \xB2\xB2\xB2\xB2\xB2\xB2\xB2\t");
SetColorAndBackground(42,0);
printf("\t\t|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("\t\t\t\t\t\t\t");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
printf("\n      ||\t\t\t\t\t\t\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColorAndBackground(47,0);
printf("\t1.LUCKY DRAW	\t\t\t");
SetColor(44);
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColorAndBackground(46,0);
printf("\t2.CUPON DETAILS\t\t\t\t");
SetColor(44);
printf("\t ||");
SetColor(44);
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
printf("  ---> ");
SetColor(43);
printf("3.INSTRUCTION\t\t\t\t");
SetColor(44);
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(6);
printf("\t4.BUY\t\t\t\t\t");
SetColor(44);
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(55);
printf("\t5.BACK\t\t\t");
SetColor(44);
printf("\t\t   \t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(42);
printf("---------------------------------------------------------");
SetColor(44);
printf("||");
SetColor(44);
printf("\n      ||");
SetColor(42);
printf("---------------------------------------------------------");
SetColor(44);
printf("||");
printf("\n      ||");
SetColor(44);
printf("---------------------------------------------------------");
printf("||");
printf("\n   <----------------------------------------------------------------->");
printf("\n");
printf("      |\t\t\t\t\t\t\t\t  |",94);
printf("\n      %c\t\t\t\t\t\t\t\t  %c",31,31);
if(getch()==13)
{
    system("cls");
    instruction();
}
}
      if(simba==4)
{
 system("cls");
system("color a");
SetColorAndBackground(44,0);
printf("\n");
printf("      %c\t\t\t\t\t\t\t \t  %c",30,30);
printf("\n      |\t\t\t\t\t\t\t\t  |");
printf("\n   <----------------------------------------------------------------->");
printf("\n      ||---------------------------------------------------------||");
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n");
printf("      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(42,0);
printf("\n");
SetColorAndBackground(44,0);
printf("      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("\t\t\t\t\t\t\t");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(43,0);
printf("\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 WELLCOME \xB2\xB2\xB2\xB2\xB2\xB2\xB2\t");
SetColorAndBackground(42,0);
printf("\t\t|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("\t\t\t\t\t\t\t");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
printf("\n      ||\t\t\t\t\t\t\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColorAndBackground(47,0);
printf("\t1.LUCKY DRAW	\t\t\t");
SetColor(44);
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColorAndBackground(46,0);
printf("\t2.CUPON DETAILS\t\t\t\t");
SetColor(44);
printf("\t ||");
SetColor(44);
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColorAndBackground(45,0);
printf("\t3.INSTRUCTION\t\t\t\t");
SetColor(44);
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
printf("  ---> ");
SetColor(43);
printf("4.BUY\t\t\t\t\t");
SetColor(44);
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColorAndBackground(55,0);
printf("\t5.BACK\t\t\t");
SetColor(44);
printf("\t\t   \t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(42);
printf("---------------------------------------------------------");
SetColor(44);
printf("||");
SetColor(44);
printf("\n      ||");
SetColor(42);
printf("---------------------------------------------------------");
SetColor(44);
printf("||");
printf("\n      ||");
SetColor(44);
printf("---------------------------------------------------------");
printf("||");
printf("\n   <----------------------------------------------------------------->");
printf("\n");
printf("      |\t\t\t\t\t\t\t\t  |",94);
printf("\n      %c\t\t\t\t\t\t\t\t  %c",31,31);
if(getch()==13)
{
    system("cls");
    buy();
}
}
 if(simba==5)
{
 system("cls");
system("color a");
SetColorAndBackground(44,0);
printf("\n");
printf("      %c\t\t\t\t\t\t\t \t  %c",30,30);
printf("\n      |\t\t\t\t\t\t\t\t  |");
printf("\n   <----------------------------------------------------------------->");
printf("\n      ||---------------------------------------------------------||");
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n");
printf("      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(42,0);
printf("\n");
SetColorAndBackground(44,0);
printf("      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("\t\t\t\t\t\t\t");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(43,0);
printf("\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 WELLCOME \xB2\xB2\xB2\xB2\xB2\xB2\xB2\t");
SetColorAndBackground(42,0);
printf("\t\t|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("\t\t\t\t\t\t\t");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
printf("\n      ||\t\t\t\t\t\t\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColorAndBackground(47,0);
printf("\t1.LUCKY DRAW	\t\t\t");
SetColor(44);
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColorAndBackground(46,0);
printf("\t2.CUPON DETAILS\t\t\t\t");
SetColor(44);
printf("\t ||");
SetColor(44);
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColorAndBackground(45,0);
printf("\t3.INSTRUCTION\t\t\t\t");
SetColor(44);
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColorAndBackground(6,0);
printf("\t4.BUY\t\t\t\t\t");
SetColor(44);
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
printf("  ---> ");
SetColor(43);
printf("5.BACK\t\t\t");
SetColor(44);
printf("\t\t   \t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(42);
printf("---------------------------------------------------------");
SetColor(44);
printf("||");
SetColor(44);
printf("\n      ||");
SetColor(42);
printf("---------------------------------------------------------");
SetColor(44);
printf("||");
printf("\n      ||");
SetColor(44);
printf("---------------------------------------------------------");
printf("||");
printf("\n   <----------------------------------------------------------------->");
printf("\n");
printf("      |\t\t\t\t\t\t\t\t  |",94);
printf("\n      %c\t\t\t\t\t\t\t\t  %c",31,31);

if(getch()==13)
{
 counter2();


}

}

if(simba==0 || simba==-1)
{
    simba=5;
system("cls");
system("color a");
SetColorAndBackground(44,0);
printf("\n");
printf("      %c\t\t\t\t\t\t\t \t  %c",30,30);
printf("\n      |\t\t\t\t\t\t\t\t  |");
printf("\n   <----------------------------------------------------------------->");
printf("\n      ||---------------------------------------------------------||");
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n");
printf("      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(42,0);
printf("\n");
SetColorAndBackground(44,0);
printf("      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("\t\t\t\t\t\t\t");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(43,0);
printf("\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 WELLCOME \xB2\xB2\xB2\xB2\xB2\xB2\xB2\t");
SetColorAndBackground(42,0);
printf("\t\t|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("\t\t\t\t\t\t\t");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
printf("\n      ||\t\t\t\t\t\t\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(42);
printf("\t1.LUCKY DRAW	\t");
SetColor(44);
printf("\t\t");
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(46);
printf("\t2.CUPON DETAILS\t\t\t\t");
SetColor(44);
printf("\t ||");
SetColor(44);
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(45);
printf("\t3.INSTRUCTION\t\t\t\t");
SetColor(44);
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(6);
printf("\t4.BUY\t\t\t\t\t");
SetColor(44);
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
printf("  ---> ");
SetColor(43);
printf("5.BACK\t\t\t");
SetColor(44);
printf("\t\t   \t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(42);
printf("---------------------------------------------------------");
SetColor(44);
printf("||");
SetColor(44);
printf("\n      ||");
SetColor(42);
printf("---------------------------------------------------------");
SetColor(44);
printf("||");
printf("\n      ||");
SetColor(44);
printf("---------------------------------------------------------");
printf("||");
printf("\n   <----------------------------------------------------------------->");
printf("\n");
printf("      |\t\t\t\t\t\t\t\t  |",94);
printf("\n      %c\t\t\t\t\t\t\t\t  %c",31,31);
if(getch()==13)
{
 counter2();

}
}

break;
case ESC_KEY:      menu();
                            break;


}
    }



    c2_invalid:
    SetColor(44);
   printf("\n\n\n\n\n\n\n\t\t\t***** Enter 1 to go cupon centre and 2 to exit the program *****");
    SetColor(43);
   printf("\n\t\t---------------------------------------------------------------------------\n\n");
     SetColor(42);
   printf("\t\t\tenter your choice :: ");
     SetColor(46);
   scanf("%d",&n1);
  if(n1==1)
   {
      counter2();
   }
     else if(n1==2)
   {
                    SetColor(43);
                    system("cls");
                    printf("\n\n\n\n\n\t\tTHIS SITE IS DEVLOPED BY ME (........BISWA......)\n\n\n\n\n");
                    exit(0);
   }
                else
                    {
                        printf("\nInvalid!\a\a\a");
                    goto c2_invalid;
                    }
}
void cudsc()
{
    system("cls");
    SetColor(46);
              FILE *vichot;
    vichot=fopen("fao.dat","r");
    printf("SERIAL.NO \t\t\tTotal no of silver cupons\t\t\tName\n----------------------------------------------------------------------------------------------------------->");
while(fscanf(vichot,"%d %d %s \n",&baba.seeno,&baba.cuno2,baba.naam)!=EOF)
{
     printf("\n\n  %d\t\t\t\t\t%d\t\t\t\t\t%s",baba.seeno,baba.cuno2,baba.naam);

}

fclose(vichot);
}
void scupondetails()
{
    system("cls");
    SetColor(44);
    printf("\n\n\t\t\tCupon Details :-\n\t\t>----------------------------------->");
    SetColor(46);
    printf("\n\n\t\tIf you use this");
    SetColor(45);
    printf(" silver Cupon ");
     SetColor(46);
    printf("then you get ");
    SetColor(45);
    printf("1100 ");
       SetColor(46);
    printf("rupee's off of your total bill ammount" );
    printf("\n\n\t\tYou get this cupon through two ways ,");
      SetColor(42);
    printf(" \n\n\t\t1st -----> Lucky Draw");
          SetColor(55);
    printf("\n\n\t\t2nd -----> Buy\n\n\n\n\n\n\t\t\t\t\t");
    SetColor(43);
    goatw:
            SetColor(43);
printf("\n1 to go back,3 to add record & 2 to go silver cupon records enter your choice :: ");
int snk;
scanf("%d",&snk);
if(snk==1)
{
    sc();
}
else if(snk==2)
{
    cudsc();
}
else if(snk==3)
{
             FILE *chot;
    chot=fopen("fao.dat","a+");
        SetColor(43);
        labelq:
    printf("\n\nenter your serial number ::  ");
scanf("%d",&aba.seeno);
while(fscanf(chot,"%d %d %s \n",&baba.seeno,&baba.cuno2,baba.naam)!=EOF)
{
    if(aba.seeno==baba.seeno)
    {
   system("cls");
   printf("\n\n\nalready exists\n\n");

goto labelq;
    }

}
baba.seeno=aba.seeno;
printf("\nenter your name  ::  ");
scanf("%s",baba.naam);
printf("\nenter your total no of silver cupons  ::  ");
scanf("%d",&baba.cuno2);
printf("\n\n\nRecord added successfully.... ");
fprintf(chot,"%d %d %s \n",baba.seeno,baba.cuno2,baba.naam);
printf("\n\n\n\n");
system("pause");
sc();
           fclose(chot);
}
else
{
 goto goatw;
}
}
void sildraw()
{

    int kuc=0;
        SetColor(44);
    printf("\n\n The winning numbers are:: ------> ");
    SetColor(43);
    printf("\n<----------------------------------------->");
    SetColor(45);
     int n=4,i;
  bool arr[10]={0};
  time_t t;
  srand((unsigned)time(&t));
  for(i=1;i<n;++i)
  {
    int r=rand()%10;
    if(!arr[r])
    {
        printf("\n\t%d\n",r);
        if(gok1==r || gok2==r  ||  gok3==r)
        {
            kuc++;
        }
    }

    else
      i--;
    arr[r]=1;

  }
  if(kuc>0)
  {
      printf("\n\n\nCONGRATS.......YOU WIN THIS CUPON(silver)");
      cc1c++;
        printf("\n\nyour total no of silver cupons ::  %d",cc1c);
            int vurti;

                SetColor(44);
    printf("\n\nIF YOU WANT TO DRAW AGAIN THE PRESS '1' (AGAIN DEPOSIT rs:-600) ::  ");
    scanf("%d",&vurti);
    if(vurti==1)
    {
        system("cls");
            printf("\n\n # enter the Lucky no :---> %d",gok1);
     SetColor(45);
        printf("\n\n # enter the Lucky no :---> %d",gok2);
     SetColor(42);
        printf("\n\n # enter the Lucky no :--->  %d",gok3);
        sildraw();
    }
    else
        {
                cc1c=0;
      sc();

        }
  }
  else if(kuc==0)
    {
        printf("\n\n\nSorry better luck next time...");
        Sleep(5000);
        int vurtii;
        SetColor(44);
    printf("\n\nIF YOU WANT TO DRAW AGAIN THE PRESS '1' (Again deposit rs:-600)::  ");
    scanf("%d",&vurtii);
    if(vurtii==1)
    {
                system("cls");
            printf("\n\n # enter the Lucky no :---> %d",gok1);
     SetColor(45);
        printf("\n\n # enter the Lucky no :---> %d",gok2);
     SetColor(42);
        printf("\n\n # enter the Lucky no :--->  %d",gok3);
        sildraw();
    }
    else
        {
            cc1c=0;
      sc();

        }
    }

   kuc=0;
}
void gokeyd()
{

cytrr:
    SetColor(46);
    system("cls");
    printf("\n\n # enter the Lucky no :---> ");
    scanf("%d",&gok1);
     SetColor(45);
        printf("\n\n # enter the Lucky no :---> ");
    scanf("%d",&gok2);
     SetColor(42);
        printf("\n\n # enter the Lucky no :---> ");
    scanf("%d",&gok3);
    char bigin[133];
        printf("\n\n # # #Would you deposit 600 rupees for roll the digital dice(draw), say ('yes' or 'no') ::--->  ");
    scanf("%s",bigin);
    char tru[323]="yes";
    char fal[212]="no";
    int lol=strcmp(tru,bigin);
    int tol=strcmp(fal,bigin);
    if(lol==0)
    {
         sildraw();

    }
    else
    {
        system("cls");
                 goto cytrr;
    }

}
void scinstruction()
{
    system("cls");
    printf("\n\n\n");
    SetColor(43);
    printf("\n\n\n\n\t\t\t   Lucky Draw Instruction\n\t\t<--------------------------------------------------------------->");
     SetColor(42);
    printf("\n\n\t\t1st  >==>  At first you choose any 3 Lucky numbers between 1 to 15\n");
     SetColor(44);
    printf("\n\t\t2nd  >==>  Next deposit 600 rupees & say or type 'yes' to start roll the digital dice\n");
     SetColor(45);
    printf("\n\t\t3rd  >==>  Show the 3 winning numbers after rolling\n");
     SetColor(46);
    printf("\n\t\t4th  >==>  If  your any choosen number are match with computer's choosen numbers\n");
    printf("\t\t     >==>  then you are win silver cupon\n");
    SetColor(55);
    printf("\n\t\t5th  >==>  If  your choosen numbers are  not match with computer's choosen numbers,\n");
    printf("\t\t     >==>  then you are not get silver cupon\n\n\n\n\n\n\t\t\t\t\t\t\t\t");
    SetColor(44);
    system("pause");
    sc();
}
void scbuy()
{
    system("cls");
    int kout=0;
   int fake;

    system("color f0");
    printf("\n\n\n\tWould you like to buy silver CUPON???\n\n\t--->reply--->('1' to yes or '2' to no)--->  ");
    scanf("%d",&fake);
    if(fake==1)
    {
            goingr:
        SetColor(44);
        printf("\n\n|| Please deposit 1000 rupees for cupon ||\n------------------------------------------------------  ");

                    kout++;
                    int vur;
                         SetColor(41);
                    printf("\n\nYour total silver CUPONS :: ----->  %d",kout);
                               SetColor(41);
                printf("\n\nIf you buy again then press '1' (& deposit rs:-1000) ----->  ");
                scanf("%d",&vur);
                if(vur==1)
            {
goto goingr;
                }
                else
                    {
                        kout=0;
                                sc();
                }


    }
        if(fake=='n')
    {
        system("cls");
        printf("\n\n\nOk,..........bYe ByE .....\n\n");
        Sleep(3000);
        sc();

    }

}
void sc()
{
    system("cls");

 int chutta=0;
    system("title BISWA DHABA");
    system("mode 1000");
    int khabar;
    system("cls");
system("color a");
SetColorAndBackground(44,0);
printf("\n");
printf("      %c\t\t\t\t\t\t\t \t  %c",30,30);
printf("\n      |\t\t\t\t\t\t\t\t  |");
printf("\n   <----------------------------------------------------------------->");
printf("\n      ||---------------------------------------------------------||");
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n");
printf("      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(42,0);
printf("\n");
SetColorAndBackground(44,0);
printf("      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("\t\t\t\t\t\t\t");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(43,0);
printf("\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 WELLCOME \xB2\xB2\xB2\xB2\xB2\xB2\xB2\t");
SetColorAndBackground(42,0);
printf("\t\t|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("\t\t\t\t\t\t\t");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
printf("\n      ||\t\t\t\t\t\t\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
printf("\t");
SetColor(42);
printf("1.Lucky DRAW	");
SetColor(44);
printf("\t\t\t");
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(46);
printf("\t2.CUPON DETAILS\t\t\t\t");
SetColor(44);
printf("\t ||");
SetColor(44);
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(45);
printf("\t3.INSTRUCTION\t\t\t\t");
SetColor(44);
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(6);
printf("\t4.BUY\t\t\t\t\t");
SetColor(44);
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(55);
printf("\t5.BACK\t\t\t");
SetColor(44);
printf("\t\t   \t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(42);
printf("---------------------------------------------------------");
SetColor(44);
printf("||");
SetColor(44);
printf("\n      ||");
SetColor(42);
printf("---------------------------------------------------------");
SetColor(44);
printf("||");
printf("\n      ||");
SetColor(44);
printf("---------------------------------------------------------");
printf("||");
printf("\n   <----------------------------------------------------------------->");
printf("\n");
printf("      |\t\t\t\t\t\t\t\t  |",94);
printf("\n      %c\t\t\t\t\t\t\t\t  %c",31,31);
SetColor(46);
printf("\n\t    Press  Esc _key to refresh..(one or two times)");
    while(1)
    {

    khabar=0;


switch((khabar=getch()))
{
    case KEY_DOWN:              chutta++;
                                       if(chutta==1)
{
 system("cls");
system("color a");
SetColorAndBackground(44,0);
printf("\n");
printf("      %c\t\t\t\t\t\t\t \t  %c",30,30);
printf("\n      |\t\t\t\t\t\t\t\t  |");
printf("\n   <----------------------------------------------------------------->");
printf("\n      ||---------------------------------------------------------||");
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n");
printf("      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(42,0);
printf("\n");
SetColorAndBackground(44,0);
printf("      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("\t\t\t\t\t\t\t");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(43,0);
printf("\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 WELLCOME \xB2\xB2\xB2\xB2\xB2\xB2\xB2\t");
SetColorAndBackground(42,0);
printf("\t\t|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("\t\t\t\t\t\t\t");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
printf("\n      ||\t\t\t\t\t\t\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
printf("  ---> ");
SetColor(42);
printf("1.Lucky DRAW	\t");
SetColor(44);
printf("\t\t");
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(46);
printf("\t2.CUPON DETAILS\t\t\t\t");
SetColor(44);
printf("\t ||");
SetColor(44);
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(45);
printf("\t3.INSTRUCTION\t\t\t\t");
SetColor(44);
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(6);
printf("\t4.BUY\t\t\t\t\t");
SetColor(44);
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(55);
printf("\t5.BACK\t\t\t");
SetColor(44);
printf("\t\t   \t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(42);
printf("---------------------------------------------------------");
SetColor(44);
printf("||");
SetColor(44);
printf("\n      ||");
SetColor(42);
printf("---------------------------------------------------------");
SetColor(44);
printf("||");
printf("\n      ||");
SetColor(44);
printf("---------------------------------------------------------");
printf("||");
printf("\n   <----------------------------------------------------------------->");
printf("\n");
printf("      |\t\t\t\t\t\t\t\t  |",94);
printf("\n      %c\t\t\t\t\t\t\t\t  %c",31,31);
if(getch()==13)
{
    system("cls");
    gokeyd();
}

}
  if(chutta==2)
{
 system("cls");
system("color a");
SetColorAndBackground(44,0);
printf("\n");
printf("      %c\t\t\t\t\t\t\t \t  %c",30,30);
printf("\n      |\t\t\t\t\t\t\t\t  |");
printf("\n   <----------------------------------------------------------------->");
printf("\n      ||---------------------------------------------------------||");
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n");
printf("      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(42,0);
printf("\n");
SetColorAndBackground(44,0);
printf("      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("\t\t\t\t\t\t\t");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(43,0);
printf("\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 WELLCOME \xB2\xB2\xB2\xB2\xB2\xB2\xB2\t");
SetColorAndBackground(42,0);
printf("\t\t|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("\t\t\t\t\t\t\t");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
printf("\n      ||\t\t\t\t\t\t\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColorAndBackground(47,0);
printf("\t1.Lucky DRAW	\t\t\t");
SetColor(44);
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
printf("  ---> ");
SetColor(43);
printf("2.CUPON DETAILS\t\t\t\t");
SetColor(44);
printf("\t ||");
SetColor(44);
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(45);
printf("\t3.INSTRUCTION\t\t\t\t");
SetColor(44);
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(6);
printf("\t4.BUY\t\t\t\t\t");
SetColor(44);
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(55);
printf("\t5.BACK\t\t\t");
SetColor(44);
printf("\t\t   \t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(42);
printf("---------------------------------------------------------");
SetColor(44);
printf("||");
SetColor(44);
printf("\n      ||");
SetColor(42);
printf("---------------------------------------------------------");
SetColor(44);
printf("||");
printf("\n      ||");
SetColor(44);
printf("---------------------------------------------------------");
printf("||");
printf("\n   <----------------------------------------------------------------->");
printf("\n");
printf("      |\t\t\t\t\t\t\t\t  |",94);
printf("\n      %c\t\t\t\t\t\t\t\t  %c",31,31);
if(getch()==13)
{
    system("cls");
    scupondetails();
}

}
          if(chutta==3)
{
 system("cls");
system("color a");
SetColorAndBackground(44,0);
printf("\n");
printf("      %c\t\t\t\t\t\t\t \t  %c",30,30);
printf("\n      |\t\t\t\t\t\t\t\t  |");
printf("\n   <----------------------------------------------------------------->");
printf("\n      ||---------------------------------------------------------||");
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n");
printf("      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(42,0);
printf("\n");
SetColorAndBackground(44,0);
printf("      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("\t\t\t\t\t\t\t");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(43,0);
printf("\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 WELLCOME \xB2\xB2\xB2\xB2\xB2\xB2\xB2\t");
SetColorAndBackground(42,0);
printf("\t\t|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("\t\t\t\t\t\t\t");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
printf("\n      ||\t\t\t\t\t\t\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColorAndBackground(47,0);
printf("\t1.Lucky DRAW	\t\t\t");
SetColor(44);
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColorAndBackground(46,0);
printf("\t2.CUPON DETAILS\t\t\t\t");
SetColor(44);
printf("\t ||");
SetColor(44);
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
printf("  ---> ");
SetColor(43);
printf("3.INSTRUCTION\t\t\t\t");
SetColor(44);
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(6);
printf("\t4.BUY\t\t\t\t\t");
SetColor(44);
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(55);
printf("\t5.BACK\t\t\t");
SetColor(44);
printf("\t\t   \t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(42);
printf("---------------------------------------------------------");
SetColor(44);
printf("||");
SetColor(44);
printf("\n      ||");
SetColor(42);
printf("---------------------------------------------------------");
SetColor(44);
printf("||");
printf("\n      ||");
SetColor(44);
printf("---------------------------------------------------------");
printf("||");
printf("\n   <----------------------------------------------------------------->");
printf("\n");
printf("      |\t\t\t\t\t\t\t\t  |",94);
printf("\n      %c\t\t\t\t\t\t\t\t  %c",31,31);
if(getch()==13)
{
    system("cls");
    scinstruction();
}

}
      if(chutta==4)
{
 system("cls");
system("color a");
SetColorAndBackground(44,0);
printf("\n");
printf("      %c\t\t\t\t\t\t\t \t  %c",30,30);
printf("\n      |\t\t\t\t\t\t\t\t  |");
printf("\n   <----------------------------------------------------------------->");
printf("\n      ||---------------------------------------------------------||");
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n");
printf("      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(42,0);
printf("\n");
SetColorAndBackground(44,0);
printf("      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("\t\t\t\t\t\t\t");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(43,0);
printf("\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 WELLCOME \xB2\xB2\xB2\xB2\xB2\xB2\xB2\t");
SetColorAndBackground(42,0);
printf("\t\t|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("\t\t\t\t\t\t\t");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
printf("\n      ||\t\t\t\t\t\t\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColorAndBackground(47,0);
printf("\t1.Lucky DRAW	\t\t\t");
SetColor(44);
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColorAndBackground(46,0);
printf("\t2.CUPON DETAILS\t\t\t\t");
SetColor(44);
printf("\t ||");
SetColor(44);
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColorAndBackground(45,0);
printf("\t3.INSTRUCTION\t\t\t\t");
SetColor(44);
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
printf("  ---> ");
SetColor(43);
printf("4.BUY\t\t\t\t\t");
SetColor(44);
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColorAndBackground(55,0);
printf("\t5.BACK\t\t\t");
SetColor(44);
printf("\t\t   \t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(42);
printf("---------------------------------------------------------");
SetColor(44);
printf("||");
SetColor(44);
printf("\n      ||");
SetColor(42);
printf("---------------------------------------------------------");
SetColor(44);
printf("||");
printf("\n      ||");
SetColor(44);
printf("---------------------------------------------------------");
printf("||");
printf("\n   <----------------------------------------------------------------->");
printf("\n");
printf("      |\t\t\t\t\t\t\t\t  |",94);
printf("\n      %c\t\t\t\t\t\t\t\t  %c",31,31);
if(getch()==13)
{
    system("cls");
    scbuy();
}

}
 if(chutta==5)
{
 system("cls");
system("color a");
SetColorAndBackground(44,0);
printf("\n");
printf("      %c\t\t\t\t\t\t\t \t  %c",30,30);
printf("\n      |\t\t\t\t\t\t\t\t  |");
printf("\n   <----------------------------------------------------------------->");
printf("\n      ||---------------------------------------------------------||");
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n");
printf("      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(42,0);
printf("\n");
SetColorAndBackground(44,0);
printf("      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("\t\t\t\t\t\t\t");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(43,0);
printf("\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 WELLCOME \xB2\xB2\xB2\xB2\xB2\xB2\xB2\t");
SetColorAndBackground(42,0);
printf("\t\t|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("\t\t\t\t\t\t\t");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
printf("\n      ||\t\t\t\t\t\t\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColorAndBackground(47,0);
printf("\t1.Lucky DRAW	\t\t\t");
SetColor(44);
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColorAndBackground(46,0);
printf("\t2.CUPON DETAILS\t\t\t\t");
SetColor(44);
printf("\t ||");
SetColor(44);
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColorAndBackground(45,0);
printf("\t3.INSTRUCTION\t\t\t\t");
SetColor(44);
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColorAndBackground(6,0);
printf("\t4.BUY\t\t\t\t\t");
SetColor(44);
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
printf("  ---> ");
SetColor(43);
printf("5.BACK\t\t\t");
SetColor(44);
printf("\t\t   \t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(42);
printf("---------------------------------------------------------");
SetColor(44);
printf("||");
SetColor(44);
printf("\n      ||");
SetColor(42);
printf("---------------------------------------------------------");
SetColor(44);
printf("||");
printf("\n      ||");
SetColor(44);
printf("---------------------------------------------------------");
printf("||");
printf("\n   <----------------------------------------------------------------->");
printf("\n");
printf("      |\t\t\t\t\t\t\t\t  |",94);
printf("\n      %c\t\t\t\t\t\t\t\t  %c",31,31);
if(getch()==13)
{
counter2();
}

}
if(chutta==6)
{
    chutta=1;
    system("cls");
system("color a");
SetColorAndBackground(44,0);
printf("\n");
printf("      %c\t\t\t\t\t\t\t \t  %c",30,30);
printf("\n      |\t\t\t\t\t\t\t\t  |");
printf("\n   <----------------------------------------------------------------->");
printf("\n      ||---------------------------------------------------------||");
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n");
printf("      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(42,0);
printf("\n");
SetColorAndBackground(44,0);
printf("      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("\t\t\t\t\t\t\t");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(43,0);
printf("\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 WELLCOME \xB2\xB2\xB2\xB2\xB2\xB2\xB2\t");
SetColorAndBackground(42,0);
printf("\t\t|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("\t\t\t\t\t\t\t");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
printf("\n      ||\t\t\t\t\t\t\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
printf("  ---> ");
SetColor(43);
printf("1.Lucky DRAW	\t");
SetColor(44);
printf("\t\t");
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(46);
printf("\t2.CUPON DETAILS\t\t\t\t");
SetColor(44);
printf("\t ||");
SetColor(44);
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(45);
printf("\t3.INSTRUCTION\t\t\t\t");
SetColor(44);
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(6);
printf("\t4.BUY\t\t\t\t\t");
SetColor(44);
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(55);
printf("\t5.BACK\t\t\t");
SetColor(44);
printf("\t\t   \t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(42);
printf("---------------------------------------------------------");
SetColor(44);
printf("||");
SetColor(44);
printf("\n      ||");
SetColor(42);
printf("---------------------------------------------------------");
SetColor(44);
printf("||");
printf("\n      ||");
SetColor(44);
printf("---------------------------------------------------------");
printf("||");
printf("\n   <----------------------------------------------------------------->");
printf("\n");
printf("      |\t\t\t\t\t\t\t\t  |",94);
printf("\n      %c\t\t\t\t\t\t\t\t  %c",31,31);
if(getch()==13)
{
    system("cls");
    gokeyd();
}

}

break;

    case KEY_UP:      chutta--;

                                         if(chutta==1)
{
 system("cls");
system("color a");
SetColorAndBackground(44,0);
printf("\n");
printf("      %c\t\t\t\t\t\t\t \t  %c",30,30);
printf("\n      |\t\t\t\t\t\t\t\t  |");
printf("\n   <----------------------------------------------------------------->");
printf("\n      ||---------------------------------------------------------||");
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n");
printf("      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(42,0);
printf("\n");
SetColorAndBackground(44,0);
printf("      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("\t\t\t\t\t\t\t");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(43,0);
printf("\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 WELLCOME \xB2\xB2\xB2\xB2\xB2\xB2\xB2\t");
SetColorAndBackground(42,0);
printf("\t\t|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("\t\t\t\t\t\t\t");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
printf("\n      ||\t\t\t\t\t\t\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
printf("  ---> ");
SetColor(42);
printf("1.Lucky DRAW	\t");
SetColor(44);
printf("\t\t");
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(46);
printf("\t2.CUPON DETAILS\t\t\t\t");
SetColor(44);
printf("\t ||");
SetColor(44);
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(45);
printf("\t3.INSTRUCTION\t\t\t\t");
SetColor(44);
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(6);
printf("\t4.BUY\t\t\t\t\t");
SetColor(44);
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(55);
printf("\t5.BACK\t\t\t");
SetColor(44);
printf("\t\t   \t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(42);
printf("---------------------------------------------------------");
SetColor(44);
printf("||");
SetColor(44);
printf("\n      ||");
SetColor(42);
printf("---------------------------------------------------------");
SetColor(44);
printf("||");
printf("\n      ||");
SetColor(44);
printf("---------------------------------------------------------");
printf("||");
printf("\n   <----------------------------------------------------------------->");
printf("\n");
printf("      |\t\t\t\t\t\t\t\t  |",94);
printf("\n      %c\t\t\t\t\t\t\t\t  %c",31,31);
if(getch()==13)
{
    system("cls");
    gokeyd();
}
}
  if(chutta==2)
{
 system("cls");
system("color a");
SetColorAndBackground(44,0);
printf("\n");
printf("      %c\t\t\t\t\t\t\t \t  %c",30,30);
printf("\n      |\t\t\t\t\t\t\t\t  |");
printf("\n   <----------------------------------------------------------------->");
printf("\n      ||---------------------------------------------------------||");
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n");
printf("      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(42,0);
printf("\n");
SetColorAndBackground(44,0);
printf("      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("\t\t\t\t\t\t\t");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(43,0);
printf("\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 WELLCOME \xB2\xB2\xB2\xB2\xB2\xB2\xB2\t");
SetColorAndBackground(42,0);
printf("\t\t|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("\t\t\t\t\t\t\t");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
printf("\n      ||\t\t\t\t\t\t\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColorAndBackground(47,0);
printf("\t1.Lucky DRAW	\t\t\t");
SetColor(44);
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
printf("  ---> ");
SetColor(43);
printf("2.CUPON DETAILS\t\t\t\t");
SetColor(44);
printf("\t ||");
SetColor(44);
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(45);
printf("\t3.INSTRUCTION\t\t\t\t");
SetColor(44);
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(6);
printf("\t4.BUY\t\t\t\t\t");
SetColor(44);
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(55);
printf("\t5.BACK\t\t\t");
SetColor(44);
printf("\t\t   \t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(42);
printf("---------------------------------------------------------");
SetColor(44);
printf("||");
SetColor(44);
printf("\n      ||");
SetColor(42);
printf("---------------------------------------------------------");
SetColor(44);
printf("||");
printf("\n      ||");
SetColor(44);
printf("---------------------------------------------------------");
printf("||");
printf("\n   <----------------------------------------------------------------->");
printf("\n");
printf("      |\t\t\t\t\t\t\t\t  |",94);
printf("\n      %c\t\t\t\t\t\t\t\t  %c",31,31);
if(getch()==13)
{
    system("cls");
    scupondetails();
}
}
          if(chutta==3)
{
 system("cls");
system("color a");
SetColorAndBackground(44,0);
printf("\n");
printf("      %c\t\t\t\t\t\t\t \t  %c",30,30);
printf("\n      |\t\t\t\t\t\t\t\t  |");
printf("\n   <----------------------------------------------------------------->");
printf("\n      ||---------------------------------------------------------||");
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n");
printf("      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(42,0);
printf("\n");
SetColorAndBackground(44,0);
printf("      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("\t\t\t\t\t\t\t");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(43,0);
printf("\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 WELLCOME \xB2\xB2\xB2\xB2\xB2\xB2\xB2\t");
SetColorAndBackground(42,0);
printf("\t\t|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("\t\t\t\t\t\t\t");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
printf("\n      ||\t\t\t\t\t\t\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColorAndBackground(47,0);
printf("\t1.Lucky DRAW	\t\t\t");
SetColor(44);
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColorAndBackground(46,0);
printf("\t2.CUPON DETAILS\t\t\t\t");
SetColor(44);
printf("\t ||");
SetColor(44);
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
printf("  ---> ");
SetColor(43);
printf("3.INSTRUCTION\t\t\t\t");
SetColor(44);
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(6);
printf("\t4.BUY\t\t\t\t\t");
SetColor(44);
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(55);
printf("\t5.BACK\t\t\t");
SetColor(44);
printf("\t\t   \t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(42);
printf("---------------------------------------------------------");
SetColor(44);
printf("||");
SetColor(44);
printf("\n      ||");
SetColor(42);
printf("---------------------------------------------------------");
SetColor(44);
printf("||");
printf("\n      ||");
SetColor(44);
printf("---------------------------------------------------------");
printf("||");
printf("\n   <----------------------------------------------------------------->");
printf("\n");
printf("      |\t\t\t\t\t\t\t\t  |",94);
printf("\n      %c\t\t\t\t\t\t\t\t  %c",31,31);
if(getch()==13)
{
    system("cls");
    scinstruction();
}
}
      if(chutta==4)
{
 system("cls");
system("color a");
SetColorAndBackground(44,0);
printf("\n");
printf("      %c\t\t\t\t\t\t\t \t  %c",30,30);
printf("\n      |\t\t\t\t\t\t\t\t  |");
printf("\n   <----------------------------------------------------------------->");
printf("\n      ||---------------------------------------------------------||");
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n");
printf("      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(42,0);
printf("\n");
SetColorAndBackground(44,0);
printf("      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("\t\t\t\t\t\t\t");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(43,0);
printf("\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 WELLCOME \xB2\xB2\xB2\xB2\xB2\xB2\xB2\t");
SetColorAndBackground(42,0);
printf("\t\t|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("\t\t\t\t\t\t\t");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
printf("\n      ||\t\t\t\t\t\t\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColorAndBackground(47,0);
printf("\t1.Lucky DRAW	\t\t\t");
SetColor(44);
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColorAndBackground(46,0);
printf("\t2.CUPON DETAILS\t\t\t\t");
SetColor(44);
printf("\t ||");
SetColor(44);
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColorAndBackground(45,0);
printf("\t3.INSTRUCTION\t\t\t\t");
SetColor(44);
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
printf("  ---> ");
SetColor(43);
printf("4.BUY\t\t\t\t\t");
SetColor(44);
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColorAndBackground(55,0);
printf("\t5.BACK\t\t\t");
SetColor(44);
printf("\t\t   \t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(42);
printf("---------------------------------------------------------");
SetColor(44);
printf("||");
SetColor(44);
printf("\n      ||");
SetColor(42);
printf("---------------------------------------------------------");
SetColor(44);
printf("||");
printf("\n      ||");
SetColor(44);
printf("---------------------------------------------------------");
printf("||");
printf("\n   <----------------------------------------------------------------->");
printf("\n");
printf("      |\t\t\t\t\t\t\t\t  |",94);
printf("\n      %c\t\t\t\t\t\t\t\t  %c",31,31);
if(getch()==13)
{
    system("cls");
    scbuy();
}

}
 if(chutta==5)
{
 system("cls");
system("color a");
SetColorAndBackground(44,0);
printf("\n");
printf("      %c\t\t\t\t\t\t\t \t  %c",30,30);
printf("\n      |\t\t\t\t\t\t\t\t  |");
printf("\n   <----------------------------------------------------------------->");
printf("\n      ||---------------------------------------------------------||");
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n");
printf("      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(42,0);
printf("\n");
SetColorAndBackground(44,0);
printf("      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("\t\t\t\t\t\t\t");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(43,0);
printf("\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 WELLCOME \xB2\xB2\xB2\xB2\xB2\xB2\xB2\t");
SetColorAndBackground(42,0);
printf("\t\t|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("\t\t\t\t\t\t\t");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
printf("\n      ||\t\t\t\t\t\t\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColorAndBackground(47,0);
printf("\t1.Lucky DRAW	\t\t\t");
SetColor(44);
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColorAndBackground(46,0);
printf("\t2.CUPON DETAILS\t\t\t\t");
SetColor(44);
printf("\t ||");
SetColor(44);
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColorAndBackground(45,0);
printf("\t3.INSTRUCTION\t\t\t\t");
SetColor(44);
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColorAndBackground(6,0);
printf("\t4.BUY\t\t\t\t\t");
SetColor(44);
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
printf("  ---> ");
SetColor(43);
printf("5.BACK\t\t\t");
SetColor(44);
printf("\t\t   \t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(42);
printf("---------------------------------------------------------");
SetColor(44);
printf("||");
SetColor(44);
printf("\n      ||");
SetColor(42);
printf("---------------------------------------------------------");
SetColor(44);
printf("||");
printf("\n      ||");
SetColor(44);
printf("---------------------------------------------------------");
printf("||");
printf("\n   <----------------------------------------------------------------->");
printf("\n");
printf("      |\t\t\t\t\t\t\t\t  |",94);
printf("\n      %c\t\t\t\t\t\t\t\t  %c",31,31);
if(getch()==13)
{
counter2();
}

}

if(chutta==0 || chutta==-1)
{
    chutta=5;
system("cls");
system("color a");
SetColorAndBackground(44,0);
printf("\n");
printf("      %c\t\t\t\t\t\t\t \t  %c",30,30);
printf("\n      |\t\t\t\t\t\t\t\t  |");
printf("\n   <----------------------------------------------------------------->");
printf("\n      ||---------------------------------------------------------||");
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n");
printf("      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(42,0);
printf("\n");
SetColorAndBackground(44,0);
printf("      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("\t\t\t\t\t\t\t");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(43,0);
printf("\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 WELLCOME \xB2\xB2\xB2\xB2\xB2\xB2\xB2\t");
SetColorAndBackground(42,0);
printf("\t\t|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("\t\t\t\t\t\t\t");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
printf("\n      ||\t\t\t\t\t\t\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(42);
printf("\t1.Lucky DRAW	\t");
SetColor(44);
printf("\t\t");
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(46);
printf("\t2.CUPON DETAILS\t\t\t\t");
SetColor(44);
printf("\t ||");
SetColor(44);
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(45);
printf("\t3.INSTRUCTION\t\t\t\t");
SetColor(44);
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(6);
printf("\t4.BUY\t\t\t\t\t");
SetColor(44);
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
printf("  ---> ");
SetColor(43);
printf("5.BACK\t\t\t");
SetColor(44);
printf("\t\t   \t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(42);
printf("---------------------------------------------------------");
SetColor(44);
printf("||");
SetColor(44);
printf("\n      ||");
SetColor(42);
printf("---------------------------------------------------------");
SetColor(44);
printf("||");
printf("\n      ||");
SetColor(44);
printf("---------------------------------------------------------");
printf("||");
printf("\n   <----------------------------------------------------------------->");
printf("\n");
printf("      |\t\t\t\t\t\t\t\t  |",94);
printf("\n      %c\t\t\t\t\t\t\t\t  %c",31,31);
if(getch()==13)
{
    counter2();
}

}

break;
case ESC_KEY:   menu();
                            break;


}
    }
    c2_invalid:
    SetColor(44);
   printf("\n\n\n\n\n\n\n\t\t\t***** Enter 1 to go cupon centre and 2 to exit the program *****");
    SetColor(43);
   printf("\n\t\t---------------------------------------------------------------------------\n\n");
     SetColor(42);
   printf("\t\t\tenter your choice :: ");
     SetColor(46);
   scanf("%d",&n1);
  if(n1==1)
   {
      counter2();
   }
     else if(n1==2)
   {
                    SetColor(43);
                    system("cls");
                    printf("\n\n\n\n\n\t\tTHIS SITE IS DEVLOPED BY ME (........BISWA......)\n\n\n\n\n");
                    exit(0);
   }
                else
                    {
                        printf("\nInvalid!\a\a\a");
                    goto c2_invalid;
                    }
}



struct gol{
        int golseno;
         int cuno3;
char gcnaam[154];
}habba,abba;
int ccc1=0;
    int pok1,pok2,pok3;


void cudgc()
{
    system("cls");
    SetColor(46);
              FILE *vighot;
    vighot=fopen("fao.dat","r");
    printf("SERIAL.NO \t\t\tTotal no of gold cupons\t\t\tName\n----------------------------------------------------------------------------------------------------------->");
while(fscanf(vighot,"%d %d %s \n",&habba.golseno,&habba.cuno3,habba.gcnaam)!=EOF)
{
     printf("\n\n  %d\t\t\t\t\t%d\t\t\t\t\t%s",habba.golseno,habba.cuno3,habba.gcnaam);

}

fclose(vighot);
}
void gcupondetails()
{
    system("cls");
    SetColor(44);
    printf("\n\n\t\t\tCupon Details :-\n\t\t>----------------------------------->");
    SetColor(46);
    printf("\n\n\t\tIf you use this");
    SetColor(45);
    printf(" gold Cupon ");
     SetColor(46);
    printf("then you get ");
    SetColor(45);
    printf("2100 ");
       SetColor(46);
    printf("rupee's off of your total bill ammount" );
    printf("\n\n\t\tYou get this cupon through two ways ,");
      SetColor(42);
    printf(" \n\n\t\t1st -----> Lucky Draw");
          SetColor(55);
    printf("\n\n\t\t2nd -----> Buy\n\n\n\n\n\n\t\t\t\t\t");
    SetColor(43);
    goatcw:
            SetColor(43);
printf("\n1 to go back,3 to add record & 2 to go gold cupon records enter your choice :: ");
int snk;
scanf("%d",&snk);
if(snk==1)
{
    gc();
}
else if(snk==2)
{
    cudgc();
}
else if(snk==3)
{
             FILE *chot;
    chot=fopen("fao.dat","a+");
        SetColor(43);
        labelq:
    printf("\n\nenter your serial number ::  ");
scanf("%d",&abba.golseno);
while(fscanf(chot,"%d %d %s \n",&habba.golseno,&habba.cuno3,habba.gcnaam)!=EOF)
{
    if(abba.golseno==habba.golseno)
    {
   system("cls");
   printf("\n\n\nalready exists\n\n");

goto labelq;
    }

}
habba.golseno=abba.golseno;
printf("\nenter your name  ::  ");
scanf("%s",habba.gcnaam);
printf("\nenter your total no of gold cupons  ::  ");
scanf("%d",&habba.cuno3);
printf("\n\n\nRecord added successvurlly....\n\n\n\n\n ");
fprintf(chot,"%d %d %s \n",habba.golseno,habba.cuno3,habba.gcnaam);
system("pause");
           fclose(chot);
           gc();
}
else
{
 goto goatcw;
}
}

struct plat{
        int platseno;
         int cuno4;
char pcnaam[154];
}hulia,rutiya;
int pcc1=0;
    int plat1,plat2,plat3;

void cudpc()
{
    system("cls");
    SetColor(46);
              FILE *pighot;
    pighot=fopen("pao.dat","r");
    printf("SERIAL.NO \t\t\tTotal no of platinum cupons\t\t\tName\n----------------------------------------------------------------------------------------------------------->");
while(fscanf(pighot,"%d %d %s \n",&hulia.platseno,&hulia.cuno4,hulia.pcnaam)!=EOF)
{
     printf("\n\n  %d\t\t\t\t\t%d\t\t\t\t\t%s",hulia.platseno,hulia.cuno4,hulia.pcnaam);

}

fclose(pighot);
}
void pcupondetails()
{
    system("cls");
    SetColor(44);
    printf("\n\n\t\t\tCupon Details :-\n\t\t>----------------------------------->");
    SetColor(46);
    printf("\n\n\t\tIf you use this");
    SetColor(45);
    printf(" platinum Cupon ");
     SetColor(46);
    printf("then you get ");
    SetColor(45);
    printf("3100 ");
       SetColor(46);
    printf("rupee's off of your total bill ammount" );
    printf("\n\n\t\tYou get this cupon through two ways ,");
      SetColor(42);
    printf(" \n\n\t\t1st -----> Lucky Draw");
          SetColor(55);
    printf("\n\n\t\t2nd -----> Buy\n\n\n\n\n\n\t\t\t\t\t");
    SetColor(43);
    goatw:
            SetColor(43);
printf("\n1 to go back,3 to add record & 2 to go platinum cupon records enter your choice :: ");
int snk;
scanf("%d",&snk);
if(snk==1)
{
    pc();
}
else if(snk==2)
{
    cudpc();
}
else if(snk==3)
{
             FILE *phot;
    phot=fopen("pao.dat","a+");
        SetColor(43);
        labelq:
    printf("\n\nenter your serial number ::  ");
scanf("%d",&rutiya.platseno);
while(fscanf(phot,"%d %d %s \n",&hulia.platseno,&hulia.cuno4,hulia.pcnaam)!=EOF)
{
    if(rutiya.platseno==hulia.platseno)
    {
   system("cls");
   printf("\n\n\nalready exists\n\n");

goto labelq;
    }

}
hulia.platseno=rutiya.platseno;
printf("\nenter your name  ::  ");
scanf("%s",hulia.pcnaam);
printf("\nenter your total no of platinum cupons  ::  ");
scanf("%d",&hulia.cuno4);
printf("\n\n\nRecord added successvurlly.... \n\n\n\n");
fprintf(phot,"%d %d %s \n",hulia.platseno,hulia.cuno4,hulia.pcnaam);
system("pause");
           fclose(phot);
           pc();
}
else
{
 goto goatw;
}
}
void platinumraw()
{

    int kuc=0;
        SetColor(44);
    printf("\n\n The winning numbers are:: ------> ");
    SetColor(43);
    printf("\n<----------------------------------------->");
    SetColor(45);
     int n=4,i;
  bool arr[10]={0};
  time_t t;
  srand((unsigned)time(&t));
  for(i=1;i<n;++i)
  {
    int r=rand()%10;
    if(!arr[r])
    {
        printf("\n\t%d\n",r);
        if(plat1==r || plat2==r  ||  plat3==r)
        {
            kuc++;
        }
    }

    else
      i--;
    arr[r]=1;

  }
  if(kuc>0)
  {
      printf("\n\n\nCONGRATS.......YOU WIN THIS CUPON(platinum)");
      pcc1++;
        printf("\n\nyour total no of platinum cupons ::  %d",pcc1);
            int vurti;

                SetColor(44);
    printf("\n\nIF YOU WANT TO DRAW AGAIN THE PRESS '1' (AGAIN DEPOSIT rs:-1500) ::  ");
    scanf("%d",&vurti);
    if(vurti==1)
    {
        system("cls");
            printf("\n\n # enter the Lucky no :---> %d",plat1);
     SetColor(45);
        printf("\n\n # enter the Lucky no :---> %d",plat2);
     SetColor(42);
        printf("\n\n # enter the Lucky no :--->  %d",plat3);
        platinumraw();
    }
    else
        {

            pcc1=0;
      pc();

        }
  }
  else if(kuc==0)
    {
        printf("\n\n\nSorry better luck next time...");
        Sleep(5000);
        int vurtii;
        SetColor(44);
    printf("\n\nIF YOU WANT TO DRAW AGAIN THE PRESS '1' (Again deposit rs:-1500)::  ");
    scanf("%d",&vurtii);
    if(vurtii==1)
    {
                system("cls");
            printf("\n\n # enter the Lucky no :---> %d",plat1);
     SetColor(45);
        printf("\n\n # enter the Lucky no :---> %d",plat2);
     SetColor(42);
        printf("\n\n # enter the Lucky no :--->  %d",plat3);
        platinumraw();
    }
    else
        {
            pcc1=0;
      pc();

        }
    }

   kuc=0;
}
void pokey()
{

cytrr:
    SetColor(46);
    system("cls");
    printf("\n\n # enter the Lucky no :---> ");
    scanf("%d",&plat1);
     SetColor(45);
        printf("\n\n # enter the Lucky no :---> ");
    scanf("%d",&plat2);
     SetColor(42);
        printf("\n\n # enter the Lucky no :---> ");
    scanf("%d",&plat3);
    char bigin[133];
        printf("\n\n # # #Would you deposit 1500 rupees for roll the digital dice(draw), say ('yes' or 'no') ::--->  ");
    scanf("%s",bigin);
    char tru[323]="yes";
    char fal[212]="no";
    int lol=strcmp(tru,bigin);
    int tol=strcmp(fal,bigin);
    if(lol==0)
    {
         platinumraw();

    }
    else
    {
        system("cls");
                 goto cytrr;
    }

}
void pcinstruction()
{
    system("cls");
    printf("\n\n\n");
    SetColor(43);
    printf("\n\n\n\n\t\t\t   Lucky Draw Instruction\n\t\t<--------------------------------------------------------------->");
     SetColor(42);
    printf("\n\n\t\t1st  >==>  At first you choose any 3 Lucky numbers between 1 to 50\n");
     SetColor(44);
    printf("\n\t\t2nd  >==>  Next deposit 1500 rupees & say or type 'yes' to start roll the digital dice\n");
     SetColor(45);
    printf("\n\t\t3rd  >==>  Show the 3 winning numbers after rolling\n");
     SetColor(46);
    printf("\n\t\t4th  >==>  If  your any choosen number are match with computer's choosen numbers\n");
    printf("\t\t     >==>  then you are win platinum cupon\n");
    SetColor(55);
    printf("\n\t\t5th  >==>  If  your choosen numbers are  not match with computer's choosen numbers,\n");
    printf("\t\t     >==>  then you are not get platinum cupon\n\n\n\n\n\n\t\t\t\t\t\t\t\t");
    SetColor(44);
    system("pause");
    pc();
}
void pcbuy()
{
    system("cls");
    int kout=0;
    int pake;

    system("color f0");
    printf("\n\n\n\tWould you like to buy platinum CUPON???\n\n\t--->reply--->('1' to yes or '2' to no)--->  ");
    scanf("%d",&pake);
    if(pake==1)
    {
            goingr:
        SetColor(44);
        printf("\n\n|| Please deposit 3000 rupees for cupon ||\n------------------------------------------------------  ");

                    kout++;
                    int vur;
                         SetColor(41);
                    printf("\n\nYour total platinum CUPONS :: ----->  %d",kout);
                               SetColor(41);
                printf("\n\nIf you buy again then press '1' (& deposit rs:-3000) ----->  ");
                scanf("%d",&vur);
                if(vur==1)
            {
goto goingr;
                }
                else
                    {
                        kout=0;
                                pc();
                }


    }
        if(pake==2)
    {
        system("cls");
        printf("\n\n\nOk,..........bYe ByE .....\n\n");
        Sleep(3000);
        pc();

    }

}
void pc()
{
 int chutta=0;
    system("title BISWA Dhulia");
    system("mode 1000");
    int khuliar;
    system("cls");
system("color a");
SetColorAndBackground(44,0);
printf("\n");
printf("      %c\t\t\t\t\t\t\t \t  %c",30,30);
printf("\n      |\t\t\t\t\t\t\t\t  |");
printf("\n   <----------------------------------------------------------------->");
printf("\n      ||---------------------------------------------------------||");
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n");
printf("      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(42,0);
printf("\n");
SetColorAndBackground(44,0);
printf("      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("\t\t\t\t\t\t\t");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(43,0);
printf("\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 WELLCOME \xB2\xB2\xB2\xB2\xB2\xB2\xB2\t");
SetColorAndBackground(42,0);
printf("\t\t|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("\t\t\t\t\t\t\t");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
printf("\n      ||\t\t\t\t\t\t\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
printf("\t");
SetColor(42);
printf("1.Lucky DRAW	");
SetColor(44);
printf("\t\t\t");
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(46);
printf("\t2.CUPON DETAILS\t\t\t\t");
SetColor(44);
printf("\t ||");
SetColor(44);
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(45);
printf("\t3.INSTRUCTION\t\t\t\t");
SetColor(44);
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(6);
printf("\t4.BUY\t\t\t\t\t");
SetColor(44);
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(55);
printf("\t5.BACK\t\t\t");
SetColor(44);
printf("\t\t   \t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(42);
printf("---------------------------------------------------------");
SetColor(44);
printf("||");
SetColor(44);
printf("\n      ||");
SetColor(42);
printf("---------------------------------------------------------");
SetColor(44);
printf("||");
printf("\n      ||");
SetColor(44);
printf("---------------------------------------------------------");
printf("||");
printf("\n   <----------------------------------------------------------------->");
printf("\n");
printf("      |\t\t\t\t\t\t\t\t  |",94);
printf("\n      %c\t\t\t\t\t\t\t\t  %c",31,31);
SetColor(46);
printf("\n\t    Press  Esc _key to refresh..(one or two times)");
    while(1)
    {

    khuliar=0;


switch((khuliar=getch()))
{
    case KEY_DOWN:              chutta++;
                                       if(chutta==1)
{
 system("cls");
system("color a");
SetColorAndBackground(44,0);
printf("\n");
printf("      %c\t\t\t\t\t\t\t \t  %c",30,30);
printf("\n      |\t\t\t\t\t\t\t\t  |");
printf("\n   <----------------------------------------------------------------->");
printf("\n      ||---------------------------------------------------------||");
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n");
printf("      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(42,0);
printf("\n");
SetColorAndBackground(44,0);
printf("      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("\t\t\t\t\t\t\t");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(43,0);
printf("\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 WELLCOME \xB2\xB2\xB2\xB2\xB2\xB2\xB2\t");
SetColorAndBackground(42,0);
printf("\t\t|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("\t\t\t\t\t\t\t");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
printf("\n      ||\t\t\t\t\t\t\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
printf("  ---> ");
SetColor(42);
printf("1.Lucky DRAW	\t");
SetColor(44);
printf("\t\t");
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(46);
printf("\t2.CUPON DETAILS\t\t\t\t");
SetColor(44);
printf("\t ||");
SetColor(44);
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(45);
printf("\t3.INSTRUCTION\t\t\t\t");
SetColor(44);
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(6);
printf("\t4.BUY\t\t\t\t\t");
SetColor(44);
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(55);
printf("\t5.BACK\t\t\t");
SetColor(44);
printf("\t\t   \t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(42);
printf("---------------------------------------------------------");
SetColor(44);
printf("||");
SetColor(44);
printf("\n      ||");
SetColor(42);
printf("---------------------------------------------------------");
SetColor(44);
printf("||");
printf("\n      ||");
SetColor(44);
printf("---------------------------------------------------------");
printf("||");
printf("\n   <----------------------------------------------------------------->");
printf("\n");
printf("      |\t\t\t\t\t\t\t\t  |",94);
printf("\n      %c\t\t\t\t\t\t\t\t  %c",31,31);
if(getch()==13)
{
    system("cls");
    pokey();
}

}
  if(chutta==2)
{
 system("cls");
system("color a");
SetColorAndBackground(44,0);
printf("\n");
printf("      %c\t\t\t\t\t\t\t \t  %c",30,30);
printf("\n      |\t\t\t\t\t\t\t\t  |");
printf("\n   <----------------------------------------------------------------->");
printf("\n      ||---------------------------------------------------------||");
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n");
printf("      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(42,0);
printf("\n");
SetColorAndBackground(44,0);
printf("      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("\t\t\t\t\t\t\t");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(43,0);
printf("\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 WELLCOME \xB2\xB2\xB2\xB2\xB2\xB2\xB2\t");
SetColorAndBackground(42,0);
printf("\t\t|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("\t\t\t\t\t\t\t");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
printf("\n      ||\t\t\t\t\t\t\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColorAndBackground(47,0);
printf("\t1.Lucky DRAW	\t\t\t");
SetColor(44);
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
printf("  ---> ");
SetColor(43);
printf("2.CUPON DETAILS\t\t\t\t");
SetColor(44);
printf("\t ||");
SetColor(44);
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(45);
printf("\t3.INSTRUCTION\t\t\t\t");
SetColor(44);
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(6);
printf("\t4.BUY\t\t\t\t\t");
SetColor(44);
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(55);
printf("\t5.BACK\t\t\t");
SetColor(44);
printf("\t\t   \t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(42);
printf("---------------------------------------------------------");
SetColor(44);
printf("||");
SetColor(44);
printf("\n      ||");
SetColor(42);
printf("---------------------------------------------------------");
SetColor(44);
printf("||");
printf("\n      ||");
SetColor(44);
printf("---------------------------------------------------------");
printf("||");
printf("\n   <----------------------------------------------------------------->");
printf("\n");
printf("      |\t\t\t\t\t\t\t\t  |",94);
printf("\n      %c\t\t\t\t\t\t\t\t  %c",31,31);
if(getch()==13)
{
    system("cls");
    pcupondetails();
}

}
          if(chutta==3)
{
 system("cls");
system("color a");
SetColorAndBackground(44,0);
printf("\n");
printf("      %c\t\t\t\t\t\t\t \t  %c",30,30);
printf("\n      |\t\t\t\t\t\t\t\t  |");
printf("\n   <----------------------------------------------------------------->");
printf("\n      ||---------------------------------------------------------||");
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n");
printf("      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(42,0);
printf("\n");
SetColorAndBackground(44,0);
printf("      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("\t\t\t\t\t\t\t");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(43,0);
printf("\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 WELLCOME \xB2\xB2\xB2\xB2\xB2\xB2\xB2\t");
SetColorAndBackground(42,0);
printf("\t\t|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("\t\t\t\t\t\t\t");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
printf("\n      ||\t\t\t\t\t\t\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColorAndBackground(47,0);
printf("\t1.Lucky DRAW	\t\t\t");
SetColor(44);
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColorAndBackground(46,0);
printf("\t2.CUPON DETAILS\t\t\t\t");
SetColor(44);
printf("\t ||");
SetColor(44);
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
printf("  ---> ");
SetColor(43);
printf("3.INSTRUCTION\t\t\t\t");
SetColor(44);
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(6);
printf("\t4.BUY\t\t\t\t\t");
SetColor(44);
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(55);
printf("\t5.BACK\t\t\t");
SetColor(44);
printf("\t\t   \t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(42);
printf("---------------------------------------------------------");
SetColor(44);
printf("||");
SetColor(44);
printf("\n      ||");
SetColor(42);
printf("---------------------------------------------------------");
SetColor(44);
printf("||");
printf("\n      ||");
SetColor(44);
printf("---------------------------------------------------------");
printf("||");
printf("\n   <----------------------------------------------------------------->");
printf("\n");
printf("      |\t\t\t\t\t\t\t\t  |",94);
printf("\n      %c\t\t\t\t\t\t\t\t  %c",31,31);
if(getch()==13)
{
    system("cls");
    pcinstruction();
}

}
      if(chutta==4)
{
 system("cls");
system("color a");
SetColorAndBackground(44,0);
printf("\n");
printf("      %c\t\t\t\t\t\t\t \t  %c",30,30);
printf("\n      |\t\t\t\t\t\t\t\t  |");
printf("\n   <----------------------------------------------------------------->");
printf("\n      ||---------------------------------------------------------||");
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n");
printf("      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(42,0);
printf("\n");
SetColorAndBackground(44,0);
printf("      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("\t\t\t\t\t\t\t");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(43,0);
printf("\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 WELLCOME \xB2\xB2\xB2\xB2\xB2\xB2\xB2\t");
SetColorAndBackground(42,0);
printf("\t\t|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("\t\t\t\t\t\t\t");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
printf("\n      ||\t\t\t\t\t\t\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColorAndBackground(47,0);
printf("\t1.Lucky DRAW	\t\t\t");
SetColor(44);
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColorAndBackground(46,0);
printf("\t2.CUPON DETAILS\t\t\t\t");
SetColor(44);
printf("\t ||");
SetColor(44);
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColorAndBackground(45,0);
printf("\t3.INSTRUCTION\t\t\t\t");
SetColor(44);
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
printf("  ---> ");
SetColor(43);
printf("4.BUY\t\t\t\t\t");
SetColor(44);
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColorAndBackground(55,0);
printf("\t5.BACK\t\t\t");
SetColor(44);
printf("\t\t   \t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(42);
printf("---------------------------------------------------------");
SetColor(44);
printf("||");
SetColor(44);
printf("\n      ||");
SetColor(42);
printf("---------------------------------------------------------");
SetColor(44);
printf("||");
printf("\n      ||");
SetColor(44);
printf("---------------------------------------------------------");
printf("||");
printf("\n   <----------------------------------------------------------------->");
printf("\n");
printf("      |\t\t\t\t\t\t\t\t  |",94);
printf("\n      %c\t\t\t\t\t\t\t\t  %c",31,31);
if(getch()==13)
{
    system("cls");
    pcbuy();
}

}
 if(chutta==5)
{
 system("cls");
system("color a");
SetColorAndBackground(44,0);
printf("\n");
printf("      %c\t\t\t\t\t\t\t \t  %c",30,30);
printf("\n      |\t\t\t\t\t\t\t\t  |");
printf("\n   <----------------------------------------------------------------->");
printf("\n      ||---------------------------------------------------------||");
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n");
printf("      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(42,0);
printf("\n");
SetColorAndBackground(44,0);
printf("      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("\t\t\t\t\t\t\t");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(43,0);
printf("\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 WELLCOME \xB2\xB2\xB2\xB2\xB2\xB2\xB2\t");
SetColorAndBackground(42,0);
printf("\t\t|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("\t\t\t\t\t\t\t");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
printf("\n      ||\t\t\t\t\t\t\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColorAndBackground(47,0);
printf("\t1.Lucky DRAW	\t\t\t");
SetColor(44);
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColorAndBackground(46,0);
printf("\t2.CUPON DETAILS\t\t\t\t");
SetColor(44);
printf("\t ||");
SetColor(44);
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColorAndBackground(45,0);
printf("\t3.INSTRUCTION\t\t\t\t");
SetColor(44);
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColorAndBackground(6,0);
printf("\t4.BUY\t\t\t\t\t");
SetColor(44);
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
printf("  ---> ");
SetColor(43);
printf("5.BACK\t\t\t");
SetColor(44);
printf("\t\t   \t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(42);
printf("---------------------------------------------------------");
SetColor(44);
printf("||");
SetColor(44);
printf("\n      ||");
SetColor(42);
printf("---------------------------------------------------------");
SetColor(44);
printf("||");
printf("\n      ||");
SetColor(44);
printf("---------------------------------------------------------");
printf("||");
printf("\n   <----------------------------------------------------------------->");
printf("\n");
printf("      |\t\t\t\t\t\t\t\t  |",94);
printf("\n      %c\t\t\t\t\t\t\t\t  %c",31,31);
if(getch()==13)
{
    counter2();
}

}
if(chutta==6)
{
    chutta=1;
    system("cls");
system("color a");
SetColorAndBackground(44,0);
printf("\n");
printf("      %c\t\t\t\t\t\t\t \t  %c",30,30);
printf("\n      |\t\t\t\t\t\t\t\t  |");
printf("\n   <----------------------------------------------------------------->");
printf("\n      ||---------------------------------------------------------||");
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n");
printf("      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(42,0);
printf("\n");
SetColorAndBackground(44,0);
printf("      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("\t\t\t\t\t\t\t");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(43,0);
printf("\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 WELLCOME \xB2\xB2\xB2\xB2\xB2\xB2\xB2\t");
SetColorAndBackground(42,0);
printf("\t\t|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("\t\t\t\t\t\t\t");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
printf("\n      ||\t\t\t\t\t\t\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
printf("  ---> ");
SetColor(43);
printf("1.Lucky DRAW	\t");
SetColor(44);
printf("\t\t");
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(46);
printf("\t2.CUPON DETAILS\t\t\t\t");
SetColor(44);
printf("\t ||");
SetColor(44);
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(45);
printf("\t3.INSTRUCTION\t\t\t\t");
SetColor(44);
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(6);
printf("\t4.BUY\t\t\t\t\t");
SetColor(44);
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(55);
printf("\t5.BACK\t\t\t");
SetColor(44);
printf("\t\t   \t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(42);
printf("---------------------------------------------------------");
SetColor(44);
printf("||");
SetColor(44);
printf("\n      ||");
SetColor(42);
printf("---------------------------------------------------------");
SetColor(44);
printf("||");
printf("\n      ||");
SetColor(44);
printf("---------------------------------------------------------");
printf("||");
printf("\n   <----------------------------------------------------------------->");
printf("\n");
printf("      |\t\t\t\t\t\t\t\t  |",94);
printf("\n      %c\t\t\t\t\t\t\t\t  %c",31,31);
if(getch()==13)
{
    system("cls");
    pokey();
}

}

break;

    case KEY_UP:      chutta--;

                                         if(chutta==1)
{
 system("cls");
system("color a");
SetColorAndBackground(44,0);
printf("\n");
printf("      %c\t\t\t\t\t\t\t \t  %c",30,30);
printf("\n      |\t\t\t\t\t\t\t\t  |");
printf("\n   <----------------------------------------------------------------->");
printf("\n      ||---------------------------------------------------------||");
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n");
printf("      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(42,0);
printf("\n");
SetColorAndBackground(44,0);
printf("      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("\t\t\t\t\t\t\t");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(43,0);
printf("\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 WELLCOME \xB2\xB2\xB2\xB2\xB2\xB2\xB2\t");
SetColorAndBackground(42,0);
printf("\t\t|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("\t\t\t\t\t\t\t");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
printf("\n      ||\t\t\t\t\t\t\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
printf("  ---> ");
SetColor(42);
printf("1.Lucky DRAW	\t");
SetColor(44);
printf("\t\t");
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(46);
printf("\t2.CUPON DETAILS\t\t\t\t");
SetColor(44);
printf("\t ||");
SetColor(44);
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(45);
printf("\t3.INSTRUCTION\t\t\t\t");
SetColor(44);
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(6);
printf("\t4.BUY\t\t\t\t\t");
SetColor(44);
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(55);
printf("\t5.BACK\t\t\t");
SetColor(44);
printf("\t\t   \t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(42);
printf("---------------------------------------------------------");
SetColor(44);
printf("||");
SetColor(44);
printf("\n      ||");
SetColor(42);
printf("---------------------------------------------------------");
SetColor(44);
printf("||");
printf("\n      ||");
SetColor(44);
printf("---------------------------------------------------------");
printf("||");
printf("\n   <----------------------------------------------------------------->");
printf("\n");
printf("      |\t\t\t\t\t\t\t\t  |",94);
printf("\n      %c\t\t\t\t\t\t\t\t  %c",31,31);
if(getch()==13)
{
    system("cls");
    pokey();
}
}
  if(chutta==2)
{
 system("cls");
system("color a");
SetColorAndBackground(44,0);
printf("\n");
printf("      %c\t\t\t\t\t\t\t \t  %c",30,30);
printf("\n      |\t\t\t\t\t\t\t\t  |");
printf("\n   <----------------------------------------------------------------->");
printf("\n      ||---------------------------------------------------------||");
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n");
printf("      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(42,0);
printf("\n");
SetColorAndBackground(44,0);
printf("      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("\t\t\t\t\t\t\t");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(43,0);
printf("\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 WELLCOME \xB2\xB2\xB2\xB2\xB2\xB2\xB2\t");
SetColorAndBackground(42,0);
printf("\t\t|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("\t\t\t\t\t\t\t");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
printf("\n      ||\t\t\t\t\t\t\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColorAndBackground(47,0);
printf("\t1.Lucky DRAW	\t\t\t");
SetColor(44);
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
printf("  ---> ");
SetColor(43);
printf("2.CUPON DETAILS\t\t\t\t");
SetColor(44);
printf("\t ||");
SetColor(44);
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(45);
printf("\t3.INSTRUCTION\t\t\t\t");
SetColor(44);
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(6);
printf("\t4.BUY\t\t\t\t\t");
SetColor(44);
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(55);
printf("\t5.BACK\t\t\t");
SetColor(44);
printf("\t\t   \t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(42);
printf("---------------------------------------------------------");
SetColor(44);
printf("||");
SetColor(44);
printf("\n      ||");
SetColor(42);
printf("---------------------------------------------------------");
SetColor(44);
printf("||");
printf("\n      ||");
SetColor(44);
printf("---------------------------------------------------------");
printf("||");
printf("\n   <----------------------------------------------------------------->");
printf("\n");
printf("      |\t\t\t\t\t\t\t\t  |",94);
printf("\n      %c\t\t\t\t\t\t\t\t  %c",31,31);
if(getch()==13)
{
    system("cls");
    pcupondetails();
}
}
          if(chutta==3)
{
 system("cls");
system("color a");
SetColorAndBackground(44,0);
printf("\n");
printf("      %c\t\t\t\t\t\t\t \t  %c",30,30);
printf("\n      |\t\t\t\t\t\t\t\t  |");
printf("\n   <----------------------------------------------------------------->");
printf("\n      ||---------------------------------------------------------||");
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n");
printf("      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(42,0);
printf("\n");
SetColorAndBackground(44,0);
printf("      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("\t\t\t\t\t\t\t");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(43,0);
printf("\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 WELLCOME \xB2\xB2\xB2\xB2\xB2\xB2\xB2\t");
SetColorAndBackground(42,0);
printf("\t\t|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("\t\t\t\t\t\t\t");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
printf("\n      ||\t\t\t\t\t\t\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColorAndBackground(47,0);
printf("\t1.Lucky DRAW	\t\t\t");
SetColor(44);
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColorAndBackground(46,0);
printf("\t2.CUPON DETAILS\t\t\t\t");
SetColor(44);
printf("\t ||");
SetColor(44);
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
printf("  ---> ");
SetColor(43);
printf("3.INSTRUCTION\t\t\t\t");
SetColor(44);
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(6);
printf("\t4.BUY\t\t\t\t\t");
SetColor(44);
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(55);
printf("\t5.BACK\t\t\t");
SetColor(44);
printf("\t\t   \t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(42);
printf("---------------------------------------------------------");
SetColor(44);
printf("||");
SetColor(44);
printf("\n      ||");
SetColor(42);
printf("---------------------------------------------------------");
SetColor(44);
printf("||");
printf("\n      ||");
SetColor(44);
printf("---------------------------------------------------------");
printf("||");
printf("\n   <----------------------------------------------------------------->");
printf("\n");
printf("      |\t\t\t\t\t\t\t\t  |",94);
printf("\n      %c\t\t\t\t\t\t\t\t  %c",31,31);
if(getch()==13)
{
    system("cls");
    pcinstruction();
}
}
      if(chutta==4)
{
 system("cls");
system("color a");
SetColorAndBackground(44,0);
printf("\n");
printf("      %c\t\t\t\t\t\t\t \t  %c",30,30);
printf("\n      |\t\t\t\t\t\t\t\t  |");
printf("\n   <----------------------------------------------------------------->");
printf("\n      ||---------------------------------------------------------||");
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n");
printf("      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(42,0);
printf("\n");
SetColorAndBackground(44,0);
printf("      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("\t\t\t\t\t\t\t");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(43,0);
printf("\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 WELLCOME \xB2\xB2\xB2\xB2\xB2\xB2\xB2\t");
SetColorAndBackground(42,0);
printf("\t\t|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("\t\t\t\t\t\t\t");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
printf("\n      ||\t\t\t\t\t\t\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColorAndBackground(47,0);
printf("\t1.Lucky DRAW	\t\t\t");
SetColor(44);
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColorAndBackground(46,0);
printf("\t2.CUPON DETAILS\t\t\t\t");
SetColor(44);
printf("\t ||");
SetColor(44);
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColorAndBackground(45,0);
printf("\t3.INSTRUCTION\t\t\t\t");
SetColor(44);
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
printf("  ---> ");
SetColor(43);
printf("4.BUY\t\t\t\t\t");
SetColor(44);
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColorAndBackground(55,0);
printf("\t5.BACK\t\t\t");
SetColor(44);
printf("\t\t   \t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(42);
printf("---------------------------------------------------------");
SetColor(44);
printf("||");
SetColor(44);
printf("\n      ||");
SetColor(42);
printf("---------------------------------------------------------");
SetColor(44);
printf("||");
printf("\n      ||");
SetColor(44);
printf("---------------------------------------------------------");
printf("||");
printf("\n   <----------------------------------------------------------------->");
printf("\n");
printf("      |\t\t\t\t\t\t\t\t  |",94);
printf("\n      %c\t\t\t\t\t\t\t\t  %c",31,31);
if(getch()==13)
{
    system("cls");
    pcbuy();
}

}
 if(chutta==5)
{
 system("cls");
system("color a");
SetColorAndBackground(44,0);
printf("\n");
printf("      %c\t\t\t\t\t\t\t \t  %c",30,30);
printf("\n      |\t\t\t\t\t\t\t\t  |");
printf("\n   <----------------------------------------------------------------->");
printf("\n      ||---------------------------------------------------------||");
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n");
printf("      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(42,0);
printf("\n");
SetColorAndBackground(44,0);
printf("      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("\t\t\t\t\t\t\t");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(43,0);
printf("\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 WELLCOME \xB2\xB2\xB2\xB2\xB2\xB2\xB2\t");
SetColorAndBackground(42,0);
printf("\t\t|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("\t\t\t\t\t\t\t");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
printf("\n      ||\t\t\t\t\t\t\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColorAndBackground(47,0);
printf("\t1.Lucky DRAW	\t\t\t");
SetColor(44);
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColorAndBackground(46,0);
printf("\t2.CUPON DETAILS\t\t\t\t");
SetColor(44);
printf("\t ||");
SetColor(44);
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColorAndBackground(45,0);
printf("\t3.INSTRUCTION\t\t\t\t");
SetColor(44);
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColorAndBackground(6,0);
printf("\t4.BUY\t\t\t\t\t");
SetColor(44);
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
printf("  ---> ");
SetColor(43);
printf("5.BACK\t\t\t");
SetColor(44);
printf("\t\t   \t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(42);
printf("---------------------------------------------------------");
SetColor(44);
printf("||");
SetColor(44);
printf("\n      ||");
SetColor(42);
printf("---------------------------------------------------------");
SetColor(44);
printf("||");
printf("\n      ||");
SetColor(44);
printf("---------------------------------------------------------");
printf("||");
printf("\n   <----------------------------------------------------------------->");
printf("\n");
printf("      |\t\t\t\t\t\t\t\t  |",94);
printf("\n      %c\t\t\t\t\t\t\t\t  %c",31,31);
if(getch()==13)
{
    counter2();
}

}

if(chutta==0 || chutta==-1)
{
    chutta=5;
system("cls");
system("color a");
SetColorAndBackground(44,0);
printf("\n");
printf("      %c\t\t\t\t\t\t\t \t  %c",30,30);
printf("\n      |\t\t\t\t\t\t\t\t  |");
printf("\n   <----------------------------------------------------------------->");
printf("\n      ||---------------------------------------------------------||");
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n");
printf("      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(42,0);
printf("\n");
SetColorAndBackground(44,0);
printf("      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("\t\t\t\t\t\t\t");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(43,0);
printf("\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 WELLCOME \xB2\xB2\xB2\xB2\xB2\xB2\xB2\t");
SetColorAndBackground(42,0);
printf("\t\t|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("\t\t\t\t\t\t\t");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
printf("\n      ||\t\t\t\t\t\t\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(42);
printf("\t1.Lucky DRAW	\t");
SetColor(44);
printf("\t\t");
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(46);
printf("\t2.CUPON DETAILS\t\t\t\t");
SetColor(44);
printf("\t ||");
SetColor(44);
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(45);
printf("\t3.INSTRUCTION\t\t\t\t");
SetColor(44);
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(6);
printf("\t4.BUY\t\t\t\t\t");
SetColor(44);
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
printf("  ---> ");
SetColor(43);
printf("5.BACK\t\t\t");
SetColor(44);
printf("\t\t   \t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(42);
printf("---------------------------------------------------------");
SetColor(44);
printf("||");
SetColor(44);
printf("\n      ||");
SetColor(42);
printf("---------------------------------------------------------");
SetColor(44);
printf("||");
printf("\n      ||");
SetColor(44);
printf("---------------------------------------------------------");
printf("||");
printf("\n   <----------------------------------------------------------------->");
printf("\n");
printf("      |\t\t\t\t\t\t\t\t  |",94);
printf("\n      %c\t\t\t\t\t\t\t\t  %c",31,31);
if(getch()==13)
{
    counter2();
}
}

break;
case ESC_KEY: menu();
                            break;


}
    }
}



void goldraw()
{

    int kuc=0;
        SetColor(44);
    printf("\n\n The winning numbers are:: ------> ");
    SetColor(43);
    printf("\n<----------------------------------------->");
    SetColor(45);
     int n=4,i;
  bool arr[10]={0};
  time_t t;
  srand((unsigned)time(&t));
  for(i=1;i<n;++i)
  {
    int r=rand()%10;
    if(!arr[r])
    {
        printf("\n\t%d\n",r);
        if(pok1==r || pok2==r  ||  pok3==r)
        {
            kuc++;
        }
    }

    else
      i--;
    arr[r]=1;

  }
  if(kuc>0)
  {
      printf("\n\n\nCONGRATS.......YOU WIN THIS CUPON(gold)");
      ccc1++;
        printf("\n\nyour total no of gold cupons ::  %d",ccc1);
            int vurti;

                SetColor(44);
    printf("\n\nIF YOU WANT TO DRAW AGAIN THE PRESS '1' (AGAIN DEPOSIT rs:-750) ::  ");
    scanf("%d",&vurti);
    if(vurti==1)
    {
        system("cls");
            printf("\n\n # enter the Lucky no :---> %d",pok1);
     SetColor(45);
        printf("\n\n # enter the Lucky no :---> %d",pok2);
     SetColor(42);
        printf("\n\n # enter the Lucky no :--->  %d",pok3);
        goldraw();
    }
    else
        {
            ccc1=0;
      gc();

        }
  }
  else if(kuc==0)
    {
        printf("\n\n\nSorry better luck next time...");
        Sleep(5000);
        int vurtii;
        SetColor(44);
    printf("\n\nIF YOU WANT TO DRAW AGAIN THE PRESS '1' (Again deposit rs:-750)::  ");
    scanf("%d",&vurtii);
    if(vurtii==1)
    {
                system("cls");
            printf("\n\n # enter the Lucky no :---> %d",pok1);
     SetColor(45);
        printf("\n\n # enter the Lucky no :---> %d",pok2);
     SetColor(42);
        printf("\n\n # enter the Lucky no :--->  %d",pok3);
        goldraw();
    }
    else
        {
      gc();
      ccc1=0;
        }
    }

   kuc=0;
}
void pokeyd()
{

cytrrtop:
    SetColor(46);
    system("cls");
    printf("\n\n # enter the Lucky no :---> ");
    scanf("%d",&pok1);
     SetColor(45);
        printf("\n\n # enter the Lucky no :---> ");
    scanf("%d",&pok2);
     SetColor(42);
        printf("\n\n # enter the Lucky no :---> ");
    scanf("%d",&pok3);
    char bigin[133];
        printf("\n\n # # #Would you deposit 750 rupees for roll the digital dice(draw), say ('yes' or 'no') ::--->  ");
    scanf("%s",bigin);
    char tru[323]="yes";
    char fal[212]="no";
    int lol=strcmp(tru,bigin);
    int tol=strcmp(fal,bigin);
    if(lol==0)
    {
         goldraw();

    }
    else
    {
        system("cls");
                 goto cytrrtop;
    }

}
void gcinstruction()
{
    system("cls");
    printf("\n\n\n");
    SetColor(43);
    printf("\n\n\n\n\t\t\t   Lucky Draw Instruction\n\t\t<--------------------------------------------------------------->");
     SetColor(42);
    printf("\n\n\t\t1st  >==>  At first you choose any 3 Lucky numbers between 1 to 20\n");
     SetColor(44);
    printf("\n\t\t2nd  >==>  Next deposit 750 rupees & say or type 'yes' to start roll the digital dice\n");
     SetColor(45);
    printf("\n\t\t3rd  >==>  Show the 3 winning numbers after rolling\n");
     SetColor(46);
    printf("\n\t\t4th  >==>  If  your any choosen number are match with computer's choosen numbers\n");
    printf("\t\t     >==>  then you are win gold cupon\n");
    SetColor(55);
    printf("\n\t\t5th  >==>  If  your choosen numbers are  not match with computer's choosen numbers,\n");
    printf("\t\t     >==>  then you are not get gold cupon\n\n\n\n\n\n\t\t\t\t\t\t\t\t");
    SetColor(44);
    system("pause");
    gc();
}
void gcbuy()
{
    system("cls");
    int kout=0;
    int faku;

    system("color f0");
    printf("\n\n\n\tWould you like to buy gold CUPON???\n\n\t--->reply--->('1' to yes or '2' to no)--->  ");
    scanf("%d",&faku);
    if(faku==1)
    {
            goingr:
        SetColor(44);
        printf("\n\n|| Please deposit 2000 rupees for cupon ||\n------------------------------------------------------  ");

                    kout++;
                    int vur;
                         SetColor(41);
                    printf("\n\nYour total gold CUPONS :: ----->  %d",kout);
                               SetColor(41);
                printf("\n\nIf you buy again then press '1' (& deposit rs:-2000) ----->  ");
                scanf("%d",&vur);
                if(vur==1)
            {
goto goingr;
                }
                else
                    {
                        kout=0;
                                gc();
                }


    }
        if(faku==2)
    {
        system("cls");
        printf("\n\n\nOk,..........bYe ByE .....\n\n");
        Sleep(3000);
        gc();

    }

}
void gc()
{
      system("cls");
 int chutta=0;
    system("title BISWA DHabba");
    system("mode 1000");
    int khabbar;
    system("cls");
system("color a");
SetColorAndBackground(44,0);
printf("\n");
printf("      %c\t\t\t\t\t\t\t \t  %c",30,30);
printf("\n      |\t\t\t\t\t\t\t\t  |");
printf("\n   <----------------------------------------------------------------->");
printf("\n      ||---------------------------------------------------------||");
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n");
printf("      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(42,0);
printf("\n");
SetColorAndBackground(44,0);
printf("      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("\t\t\t\t\t\t\t");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(43,0);
printf("\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 WELLCOME \xB2\xB2\xB2\xB2\xB2\xB2\xB2\t");
SetColorAndBackground(42,0);
printf("\t\t|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("\t\t\t\t\t\t\t");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
printf("\n      ||\t\t\t\t\t\t\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
printf("\t");
SetColor(42);
printf("1.Lucky DRAW	");
SetColor(44);
printf("\t\t\t");
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(46);
printf("\t2.CUPON DETAILS\t\t\t\t");
SetColor(44);
printf("\t ||");
SetColor(44);
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(45);
printf("\t3.INSTRUCTION\t\t\t\t");
SetColor(44);
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(6);
printf("\t4.BUY\t\t\t\t\t");
SetColor(44);
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(55);
printf("\t5.BACK\t\t\t");
SetColor(44);
printf("\t\t   \t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(42);
printf("---------------------------------------------------------");
SetColor(44);
printf("||");
SetColor(44);
printf("\n      ||");
SetColor(42);
printf("---------------------------------------------------------");
SetColor(44);
printf("||");
printf("\n      ||");
SetColor(44);
printf("---------------------------------------------------------");
printf("||");
printf("\n   <----------------------------------------------------------------->");
printf("\n");
printf("      |\t\t\t\t\t\t\t\t  |",94);
printf("\n      %c\t\t\t\t\t\t\t\t  %c",31,31);
SetColor(46);
printf("\n\t    Press  Esc _key to refresh..(one or two times)");
    while(1)
    {

    khabbar=0;


switch((khabbar=getch()))
{
    case KEY_DOWN:              chutta++;
                                       if(chutta==1)
{
 system("cls");
system("color a");
SetColorAndBackground(44,0);
printf("\n");
printf("      %c\t\t\t\t\t\t\t \t  %c",30,30);
printf("\n      |\t\t\t\t\t\t\t\t  |");
printf("\n   <----------------------------------------------------------------->");
printf("\n      ||---------------------------------------------------------||");
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n");
printf("      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(42,0);
printf("\n");
SetColorAndBackground(44,0);
printf("      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("\t\t\t\t\t\t\t");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(43,0);
printf("\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 WELLCOME \xB2\xB2\xB2\xB2\xB2\xB2\xB2\t");
SetColorAndBackground(42,0);
printf("\t\t|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("\t\t\t\t\t\t\t");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
printf("\n      ||\t\t\t\t\t\t\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
printf("  ---> ");
SetColor(42);
printf("1.Lucky DRAW	\t");
SetColor(44);
printf("\t\t");
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(46);
printf("\t2.CUPON DETAILS\t\t\t\t");
SetColor(44);
printf("\t ||");
SetColor(44);
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(45);
printf("\t3.INSTRUCTION\t\t\t\t");
SetColor(44);
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(6);
printf("\t4.BUY\t\t\t\t\t");
SetColor(44);
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(55);
printf("\t5.BACK\t\t\t");
SetColor(44);
printf("\t\t   \t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(42);
printf("---------------------------------------------------------");
SetColor(44);
printf("||");
SetColor(44);
printf("\n      ||");
SetColor(42);
printf("---------------------------------------------------------");
SetColor(44);
printf("||");
printf("\n      ||");
SetColor(44);
printf("---------------------------------------------------------");
printf("||");
printf("\n   <----------------------------------------------------------------->");
printf("\n");
printf("      |\t\t\t\t\t\t\t\t  |",94);
printf("\n      %c\t\t\t\t\t\t\t\t  %c",31,31);
if(getch()==13)
{
    system("cls");
    pokeyd();
}

}
  if(chutta==2)
{
 system("cls");
system("color a");
SetColorAndBackground(44,0);
printf("\n");
printf("      %c\t\t\t\t\t\t\t \t  %c",30,30);
printf("\n      |\t\t\t\t\t\t\t\t  |");
printf("\n   <----------------------------------------------------------------->");
printf("\n      ||---------------------------------------------------------||");
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n");
printf("      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(42,0);
printf("\n");
SetColorAndBackground(44,0);
printf("      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("\t\t\t\t\t\t\t");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(43,0);
printf("\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 WELLCOME \xB2\xB2\xB2\xB2\xB2\xB2\xB2\t");
SetColorAndBackground(42,0);
printf("\t\t|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("\t\t\t\t\t\t\t");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
printf("\n      ||\t\t\t\t\t\t\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColorAndBackground(47,0);
printf("\t1.Lucky DRAW	\t\t\t");
SetColor(44);
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
printf("  ---> ");
SetColor(43);
printf("2.CUPON DETAILS\t\t\t\t");
SetColor(44);
printf("\t ||");
SetColor(44);
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(45);
printf("\t3.INSTRUCTION\t\t\t\t");
SetColor(44);
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(6);
printf("\t4.BUY\t\t\t\t\t");
SetColor(44);
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(55);
printf("\t5.BACK\t\t\t");
SetColor(44);
printf("\t\t   \t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(42);
printf("---------------------------------------------------------");
SetColor(44);
printf("||");
SetColor(44);
printf("\n      ||");
SetColor(42);
printf("---------------------------------------------------------");
SetColor(44);
printf("||");
printf("\n      ||");
SetColor(44);
printf("---------------------------------------------------------");
printf("||");
printf("\n   <----------------------------------------------------------------->");
printf("\n");
printf("      |\t\t\t\t\t\t\t\t  |",94);
printf("\n      %c\t\t\t\t\t\t\t\t  %c",31,31);
if(getch()==13)
{
    system("cls");
    gcupondetails();
}

}
          if(chutta==3)
{
 system("cls");
system("color a");
SetColorAndBackground(44,0);
printf("\n");
printf("      %c\t\t\t\t\t\t\t \t  %c",30,30);
printf("\n      |\t\t\t\t\t\t\t\t  |");
printf("\n   <----------------------------------------------------------------->");
printf("\n      ||---------------------------------------------------------||");
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n");
printf("      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(42,0);
printf("\n");
SetColorAndBackground(44,0);
printf("      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("\t\t\t\t\t\t\t");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(43,0);
printf("\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 WELLCOME \xB2\xB2\xB2\xB2\xB2\xB2\xB2\t");
SetColorAndBackground(42,0);
printf("\t\t|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("\t\t\t\t\t\t\t");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
printf("\n      ||\t\t\t\t\t\t\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColorAndBackground(47,0);
printf("\t1.Lucky DRAW	\t\t\t");
SetColor(44);
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColorAndBackground(46,0);
printf("\t2.CUPON DETAILS\t\t\t\t");
SetColor(44);
printf("\t ||");
SetColor(44);
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
printf("  ---> ");
SetColor(43);
printf("3.INSTRUCTION\t\t\t\t");
SetColor(44);
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(6);
printf("\t4.BUY\t\t\t\t\t");
SetColor(44);
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(55);
printf("\t5.BACK\t\t\t");
SetColor(44);
printf("\t\t   \t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(42);
printf("---------------------------------------------------------");
SetColor(44);
printf("||");
SetColor(44);
printf("\n      ||");
SetColor(42);
printf("---------------------------------------------------------");
SetColor(44);
printf("||");
printf("\n      ||");
SetColor(44);
printf("---------------------------------------------------------");
printf("||");
printf("\n   <----------------------------------------------------------------->");
printf("\n");
printf("      |\t\t\t\t\t\t\t\t  |",94);
printf("\n      %c\t\t\t\t\t\t\t\t  %c",31,31);
if(getch()==13)
{
    system("cls");
    gcinstruction();
}

}
      if(chutta==4)
{
 system("cls");
system("color a");
SetColorAndBackground(44,0);
printf("\n");
printf("      %c\t\t\t\t\t\t\t \t  %c",30,30);
printf("\n      |\t\t\t\t\t\t\t\t  |");
printf("\n   <----------------------------------------------------------------->");
printf("\n      ||---------------------------------------------------------||");
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n");
printf("      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(42,0);
printf("\n");
SetColorAndBackground(44,0);
printf("      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("\t\t\t\t\t\t\t");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(43,0);
printf("\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 WELLCOME \xB2\xB2\xB2\xB2\xB2\xB2\xB2\t");
SetColorAndBackground(42,0);
printf("\t\t|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("\t\t\t\t\t\t\t");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
printf("\n      ||\t\t\t\t\t\t\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColorAndBackground(47,0);
printf("\t1.Lucky DRAW	\t\t\t");
SetColor(44);
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColorAndBackground(46,0);
printf("\t2.CUPON DETAILS\t\t\t\t");
SetColor(44);
printf("\t ||");
SetColor(44);
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColorAndBackground(45,0);
printf("\t3.INSTRUCTION\t\t\t\t");
SetColor(44);
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
printf("  ---> ");
SetColor(43);
printf("4.BUY\t\t\t\t\t");
SetColor(44);
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColorAndBackground(55,0);
printf("\t5.BACK\t\t\t");
SetColor(44);
printf("\t\t   \t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(42);
printf("---------------------------------------------------------");
SetColor(44);
printf("||");
SetColor(44);
printf("\n      ||");
SetColor(42);
printf("---------------------------------------------------------");
SetColor(44);
printf("||");
printf("\n      ||");
SetColor(44);
printf("---------------------------------------------------------");
printf("||");
printf("\n   <----------------------------------------------------------------->");
printf("\n");
printf("      |\t\t\t\t\t\t\t\t  |",94);
printf("\n      %c\t\t\t\t\t\t\t\t  %c",31,31);
if(getch()==13)
{
    system("cls");
    gcbuy();
}

}
 if(chutta==5)
{
 system("cls");
system("color a");
SetColorAndBackground(44,0);
printf("\n");
printf("      %c\t\t\t\t\t\t\t \t  %c",30,30);
printf("\n      |\t\t\t\t\t\t\t\t  |");
printf("\n   <----------------------------------------------------------------->");
printf("\n      ||---------------------------------------------------------||");
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n");
printf("      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(42,0);
printf("\n");
SetColorAndBackground(44,0);
printf("      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("\t\t\t\t\t\t\t");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(43,0);
printf("\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 WELLCOME \xB2\xB2\xB2\xB2\xB2\xB2\xB2\t");
SetColorAndBackground(42,0);
printf("\t\t|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("\t\t\t\t\t\t\t");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
printf("\n      ||\t\t\t\t\t\t\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColorAndBackground(47,0);
printf("\t1.Lucky DRAW	\t\t\t");
SetColor(44);
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColorAndBackground(46,0);
printf("\t2.CUPON DETAILS\t\t\t\t");
SetColor(44);
printf("\t ||");
SetColor(44);
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColorAndBackground(45,0);
printf("\t3.INSTRUCTION\t\t\t\t");
SetColor(44);
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColorAndBackground(6,0);
printf("\t4.BUY\t\t\t\t\t");
SetColor(44);
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
printf("  ---> ");
SetColor(43);
printf("5.BACK\t\t\t");
SetColor(44);
printf("\t\t   \t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(42);
printf("---------------------------------------------------------");
SetColor(44);
printf("||");
SetColor(44);
printf("\n      ||");
SetColor(42);
printf("---------------------------------------------------------");
SetColor(44);
printf("||");
printf("\n      ||");
SetColor(44);
printf("---------------------------------------------------------");
printf("||");
printf("\n   <----------------------------------------------------------------->");
printf("\n");
printf("      |\t\t\t\t\t\t\t\t  |",94);
printf("\n      %c\t\t\t\t\t\t\t\t  %c",31,31);
if(getch()==13)
{
counter2();
}

}
if(chutta==6)
{
    chutta=1;
    system("cls");
system("color a");
SetColorAndBackground(44,0);
printf("\n");
printf("      %c\t\t\t\t\t\t\t \t  %c",30,30);
printf("\n      |\t\t\t\t\t\t\t\t  |");
printf("\n   <----------------------------------------------------------------->");
printf("\n      ||---------------------------------------------------------||");
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n");
printf("      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(42,0);
printf("\n");
SetColorAndBackground(44,0);
printf("      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("\t\t\t\t\t\t\t");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(43,0);
printf("\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 WELLCOME \xB2\xB2\xB2\xB2\xB2\xB2\xB2\t");
SetColorAndBackground(42,0);
printf("\t\t|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("\t\t\t\t\t\t\t");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
printf("\n      ||\t\t\t\t\t\t\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
printf("  ---> ");
SetColor(43);
printf("1.Lucky DRAW	\t");
SetColor(44);
printf("\t\t");
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(46);
printf("\t2.CUPON DETAILS\t\t\t\t");
SetColor(44);
printf("\t ||");
SetColor(44);
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(45);
printf("\t3.INSTRUCTION\t\t\t\t");
SetColor(44);
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(6);
printf("\t4.BUY\t\t\t\t\t");
SetColor(44);
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(55);
printf("\t5.BACK\t\t\t");
SetColor(44);
printf("\t\t   \t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(42);
printf("---------------------------------------------------------");
SetColor(44);
printf("||");
SetColor(44);
printf("\n      ||");
SetColor(42);
printf("---------------------------------------------------------");
SetColor(44);
printf("||");
printf("\n      ||");
SetColor(44);
printf("---------------------------------------------------------");
printf("||");
printf("\n   <----------------------------------------------------------------->");
printf("\n");
printf("      |\t\t\t\t\t\t\t\t  |",94);
printf("\n      %c\t\t\t\t\t\t\t\t  %c",31,31);
if(getch()==13)
{
    system("cls");
    pokeyd();
}

}

break;

    case KEY_UP:      chutta--;

                                         if(chutta==1)
{
 system("cls");
system("color a");
SetColorAndBackground(44,0);
printf("\n");
printf("      %c\t\t\t\t\t\t\t \t  %c",30,30);
printf("\n      |\t\t\t\t\t\t\t\t  |");
printf("\n   <----------------------------------------------------------------->");
printf("\n      ||---------------------------------------------------------||");
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n");
printf("      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(42,0);
printf("\n");
SetColorAndBackground(44,0);
printf("      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("\t\t\t\t\t\t\t");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(43,0);
printf("\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 WELLCOME \xB2\xB2\xB2\xB2\xB2\xB2\xB2\t");
SetColorAndBackground(42,0);
printf("\t\t|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("\t\t\t\t\t\t\t");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
printf("\n      ||\t\t\t\t\t\t\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
printf("  ---> ");
SetColor(42);
printf("1.Lucky DRAW	\t");
SetColor(44);
printf("\t\t");
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(46);
printf("\t2.CUPON DETAILS\t\t\t\t");
SetColor(44);
printf("\t ||");
SetColor(44);
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(45);
printf("\t3.INSTRUCTION\t\t\t\t");
SetColor(44);
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(6);
printf("\t4.BUY\t\t\t\t\t");
SetColor(44);
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(55);
printf("\t5.BACK\t\t\t");
SetColor(44);
printf("\t\t   \t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(42);
printf("---------------------------------------------------------");
SetColor(44);
printf("||");
SetColor(44);
printf("\n      ||");
SetColor(42);
printf("---------------------------------------------------------");
SetColor(44);
printf("||");
printf("\n      ||");
SetColor(44);
printf("---------------------------------------------------------");
printf("||");
printf("\n   <----------------------------------------------------------------->");
printf("\n");
printf("      |\t\t\t\t\t\t\t\t  |",94);
printf("\n      %c\t\t\t\t\t\t\t\t  %c",31,31);
if(getch()==13)
{
    system("cls");
    pokeyd();
}
}
  if(chutta==2)
{
 system("cls");
system("color a");
SetColorAndBackground(44,0);
printf("\n");
printf("      %c\t\t\t\t\t\t\t \t  %c",30,30);
printf("\n      |\t\t\t\t\t\t\t\t  |");
printf("\n   <----------------------------------------------------------------->");
printf("\n      ||---------------------------------------------------------||");
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n");
printf("      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(42,0);
printf("\n");
SetColorAndBackground(44,0);
printf("      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("\t\t\t\t\t\t\t");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(43,0);
printf("\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 WELLCOME \xB2\xB2\xB2\xB2\xB2\xB2\xB2\t");
SetColorAndBackground(42,0);
printf("\t\t|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("\t\t\t\t\t\t\t");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
printf("\n      ||\t\t\t\t\t\t\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColorAndBackground(47,0);
printf("\t1.Lucky DRAW	\t\t\t");
SetColor(44);
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
printf("  ---> ");
SetColor(43);
printf("2.CUPON DETAILS\t\t\t\t");
SetColor(44);
printf("\t ||");
SetColor(44);
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(45);
printf("\t3.INSTRUCTION\t\t\t\t");
SetColor(44);
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(6);
printf("\t4.BUY\t\t\t\t\t");
SetColor(44);
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(55);
printf("\t5.BACK\t\t\t");
SetColor(44);
printf("\t\t   \t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(42);
printf("---------------------------------------------------------");
SetColor(44);
printf("||");
SetColor(44);
printf("\n      ||");
SetColor(42);
printf("---------------------------------------------------------");
SetColor(44);
printf("||");
printf("\n      ||");
SetColor(44);
printf("---------------------------------------------------------");
printf("||");
printf("\n   <----------------------------------------------------------------->");
printf("\n");
printf("      |\t\t\t\t\t\t\t\t  |",94);
printf("\n      %c\t\t\t\t\t\t\t\t  %c",31,31);
if(getch()==13)
{
    system("cls");
    gcupondetails();
}
}
          if(chutta==3)
{
 system("cls");
system("color a");
SetColorAndBackground(44,0);
printf("\n");
printf("      %c\t\t\t\t\t\t\t \t  %c",30,30);
printf("\n      |\t\t\t\t\t\t\t\t  |");
printf("\n   <----------------------------------------------------------------->");
printf("\n      ||---------------------------------------------------------||");
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n");
printf("      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(42,0);
printf("\n");
SetColorAndBackground(44,0);
printf("      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("\t\t\t\t\t\t\t");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(43,0);
printf("\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 WELLCOME \xB2\xB2\xB2\xB2\xB2\xB2\xB2\t");
SetColorAndBackground(42,0);
printf("\t\t|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("\t\t\t\t\t\t\t");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
printf("\n      ||\t\t\t\t\t\t\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColorAndBackground(47,0);
printf("\t1.Lucky DRAW	\t\t\t");
SetColor(44);
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColorAndBackground(46,0);
printf("\t2.CUPON DETAILS\t\t\t\t");
SetColor(44);
printf("\t ||");
SetColor(44);
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
printf("  ---> ");
SetColor(43);
printf("3.INSTRUCTION\t\t\t\t");
SetColor(44);
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(6);
printf("\t4.BUY\t\t\t\t\t");
SetColor(44);
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(55);
printf("\t5.BACK\t\t\t");
SetColor(44);
printf("\t\t   \t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(42);
printf("---------------------------------------------------------");
SetColor(44);
printf("||");
SetColor(44);
printf("\n      ||");
SetColor(42);
printf("---------------------------------------------------------");
SetColor(44);
printf("||");
printf("\n      ||");
SetColor(44);
printf("---------------------------------------------------------");
printf("||");
printf("\n   <----------------------------------------------------------------->");
printf("\n");
printf("      |\t\t\t\t\t\t\t\t  |",94);
printf("\n      %c\t\t\t\t\t\t\t\t  %c",31,31);
if(getch()==13)
{
    system("cls");
    gcinstruction();
}
}
      if(chutta==4)
{
 system("cls");
system("color a");
SetColorAndBackground(44,0);
printf("\n");
printf("      %c\t\t\t\t\t\t\t \t  %c",30,30);
printf("\n      |\t\t\t\t\t\t\t\t  |");
printf("\n   <----------------------------------------------------------------->");
printf("\n      ||---------------------------------------------------------||");
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n");
printf("      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(42,0);
printf("\n");
SetColorAndBackground(44,0);
printf("      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("\t\t\t\t\t\t\t");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(43,0);
printf("\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 WELLCOME \xB2\xB2\xB2\xB2\xB2\xB2\xB2\t");
SetColorAndBackground(42,0);
printf("\t\t|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("\t\t\t\t\t\t\t");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
printf("\n      ||\t\t\t\t\t\t\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColorAndBackground(47,0);
printf("\t1.Lucky DRAW	\t\t\t");
SetColor(44);
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColorAndBackground(46,0);
printf("\t2.CUPON DETAILS\t\t\t\t");
SetColor(44);
printf("\t ||");
SetColor(44);
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColorAndBackground(45,0);
printf("\t3.INSTRUCTION\t\t\t\t");
SetColor(44);
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
printf("  ---> ");
SetColor(43);
printf("4.BUY\t\t\t\t\t");
SetColor(44);
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColorAndBackground(55,0);
printf("\t5.BACK\t\t\t");
SetColor(44);
printf("\t\t   \t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(42);
printf("---------------------------------------------------------");
SetColor(44);
printf("||");
SetColor(44);
printf("\n      ||");
SetColor(42);
printf("---------------------------------------------------------");
SetColor(44);
printf("||");
printf("\n      ||");
SetColor(44);
printf("---------------------------------------------------------");
printf("||");
printf("\n   <----------------------------------------------------------------->");
printf("\n");
printf("      |\t\t\t\t\t\t\t\t  |",94);
printf("\n      %c\t\t\t\t\t\t\t\t  %c",31,31);
if(getch()==13)
{
    system("cls");
    gcbuy();
}

}
 if(chutta==5)
{
 system("cls");
system("color a");
SetColorAndBackground(44,0);
printf("\n");
printf("      %c\t\t\t\t\t\t\t \t  %c",30,30);
printf("\n      |\t\t\t\t\t\t\t\t  |");
printf("\n   <----------------------------------------------------------------->");
printf("\n      ||---------------------------------------------------------||");
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n");
printf("      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(42,0);
printf("\n");
SetColorAndBackground(44,0);
printf("      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("\t\t\t\t\t\t\t");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(43,0);
printf("\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 WELLCOME \xB2\xB2\xB2\xB2\xB2\xB2\xB2\t");
SetColorAndBackground(42,0);
printf("\t\t|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("\t\t\t\t\t\t\t");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
printf("\n      ||\t\t\t\t\t\t\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColorAndBackground(47,0);
printf("\t1.Lucky DRAW	\t\t\t");
SetColor(44);
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColorAndBackground(46,0);
printf("\t2.CUPON DETAILS\t\t\t\t");
SetColor(44);
printf("\t ||");
SetColor(44);
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColorAndBackground(45,0);
printf("\t3.INSTRUCTION\t\t\t\t");
SetColor(44);
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColorAndBackground(6,0);
printf("\t4.BUY\t\t\t\t\t");
SetColor(44);
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
printf("  ---> ");
SetColor(43);
printf("5.BACK\t\t\t");
SetColor(44);
printf("\t\t   \t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(42);
printf("---------------------------------------------------------");
SetColor(44);
printf("||");
SetColor(44);
printf("\n      ||");
SetColor(42);
printf("---------------------------------------------------------");
SetColor(44);
printf("||");
printf("\n      ||");
SetColor(44);
printf("---------------------------------------------------------");
printf("||");
printf("\n   <----------------------------------------------------------------->");
printf("\n");
printf("      |\t\t\t\t\t\t\t\t  |",94);
printf("\n      %c\t\t\t\t\t\t\t\t  %c",31,31);
if(getch()==13)
{
counter2();
}

}

if(chutta==0 || chutta==-1)
{
    chutta=5;
system("cls");
system("color a");
SetColorAndBackground(44,0);
printf("\n");
printf("      %c\t\t\t\t\t\t\t \t  %c",30,30);
printf("\n      |\t\t\t\t\t\t\t\t  |");
printf("\n   <----------------------------------------------------------------->");
printf("\n      ||---------------------------------------------------------||");
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n");
printf("      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(42,0);
printf("\n");
SetColorAndBackground(44,0);
printf("      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("\t\t\t\t\t\t\t");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(43,0);
printf("\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 WELLCOME \xB2\xB2\xB2\xB2\xB2\xB2\xB2\t");
SetColorAndBackground(42,0);
printf("\t\t|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("\t\t\t\t\t\t\t");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
printf("\n      ||\t\t\t\t\t\t\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(42);
printf("\t1.Lucky DRAW	\t");
SetColor(44);
printf("\t\t");
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(46);
printf("\t2.CUPON DETAILS\t\t\t\t");
SetColor(44);
printf("\t ||");
SetColor(44);
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(45);
printf("\t3.INSTRUCTION\t\t\t\t");
SetColor(44);
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(6);
printf("\t4.BUY\t\t\t\t\t");
SetColor(44);
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
printf("  ---> ");
SetColor(43);
printf("5.BACK\t\t\t");
SetColor(44);
printf("\t\t   \t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(42);
printf("---------------------------------------------------------");
SetColor(44);
printf("||");
SetColor(44);
printf("\n      ||");
SetColor(42);
printf("---------------------------------------------------------");
SetColor(44);
printf("||");
printf("\n      ||");
SetColor(44);
printf("---------------------------------------------------------");
printf("||");
printf("\n   <----------------------------------------------------------------->");
printf("\n");
printf("      |\t\t\t\t\t\t\t\t  |",94);
printf("\n      %c\t\t\t\t\t\t\t\t  %c",31,31);
if(getch()==13)
{
counter2();
}
}

break;
case ESC_KEY:   menu();
                            break;


}
    }

}





void counter2()
{
     int a;
     system("color f");
    system("cls");
   system("color a");
SetColor(44);
printf("\n");
printf("\n   <================================================================================");
SetColor(46);
printf("*");
SetColor(44);
printf("======>");
printf("\n      X===>=========================================================X===>\t    |");
SetColor(44);
printf("\n      X===>");
SetColor(42);
printf("=========================================================");
SetColor(44);
printf("X===>\t    |");
SetColor(44);
printf("\n");
printf("      X===>");
SetColor(42);
printf("=========================================================");
SetColor(44);
printf("X===>\t    |");
SetColor(42);
printf("\n");
SetColor(44);
printf("      X===>\t\t\t\t\t\t            X===>\t    |");
SetColor(44);
printf("\n      X===>");
SetColor(43);
printf("\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 CUPON COUNTER \xB2\xB2\xB2\xB2\xB2\xB2\xB2\t    ");
SetColor(44);
printf("\t\t    X===>\t    |");
SetColor(44);
printf("\n      X===>");
printf("\t\t\t\t\t\t\t    X===>\t    |");
SetColor(44);
printf("\n      X===>");
SetColor(42);
printf("=========================================================");
SetColor(44);
printf("X===>\t    |");
SetColor(44);
printf("\n      X===>");
SetColor(42);
printf("=========================================================");
SetColor(44);
printf("X===>\t    |");
printf("\n      X===>\t\t\t\t\t\t\t    X===>");
SetColor(46);
printf("\t    %c",31);
SetColor(44);
printf("\n      X===>\t\t\t\t\t\t\t    X===>");
SetColor(43);
printf("\t*-------*");
SetColor(44);
printf("\n      X===>");
SetColor(41);
printf("=========================================================");
SetColor(44);
printf("X===>");
SetColor(43);
printf("\t  |   |");
SetColor(44);
printf("\n      X===>\t\t\t\t\t\t\t    X===>");
SetColor(43);
printf("\t  | ");
SetColor(42);
printf("B");
SetColor(43);
printf(" |");
SetColor(44);
printf("\n      X===>");
SetColor(47);
printf("\t1.BRONZE CUPON                               ");
SetColor(44);
printf("\t    X===>");
SetColor(43);
printf("\t  | ");
SetColor(42);
printf(" ");
SetColor(43);
printf(" |");
SetColor(44);
printf("\n      X===>\t\t\t\t\t\t\t    X===>");
SetColor(43);
printf("\t  | ");
SetColor(42);
printf("I");
SetColor(43);
printf(" |");
SetColor(44);
printf("\n      X===>");
SetColor(41);
printf("=========================================================");
SetColor(44);
printf("X===>");
SetColor(43);
printf("\t  | ");
SetColor(42);
printf(" ");
SetColor(43);
printf(" |");
SetColor(44);
printf("\n      X===>\t\t\t\t\t\t\t    X===>");
SetColor(43);
printf("\t  | ");
SetColor(42);
printf("S");
SetColor(43);
printf(" |");
SetColor(44);
printf("\n      X===>");
SetColor(55);
printf("\t2.SILVER CUPON                               ");
SetColor(44);
printf("\t    X===>");
SetColor(43);
printf("\t  | ");
SetColor(42);
printf(" ");
SetColor(43);
printf(" |");
SetColor(44);
printf("\n      X===>\t\t\t\t\t\t\t    X===>");
SetColor(43);
printf("\t  | ");
SetColor(42);
printf("W");
SetColor(43);
printf(" |");
SetColor(44);
printf("\n      X===>");
SetColor(41);
printf("=========================================================");
SetColor(44);
printf("X===>");
SetColor(43);
printf("\t  | ");
SetColor(42);
printf(" ");
SetColor(43);
printf(" |");
SetColor(44);
printf("\n      X===>\t\t\t\t\t\t\t    X===>");
SetColor(43);
printf("\t  | ");
SetColor(42);
printf("A");
SetColor(43);
printf(" |");
SetColor(44);
printf("\n      X===>");
SetColor(46);
printf("\t3.GOLD CUPON                                 ");
SetColor(44);
printf("\t    X===>");
SetColor(43);
printf("\t  | ");
SetColor(42);
printf(" ");
SetColor(43);
printf(" |");
SetColor(44);
printf("\n      X===>\t\t\t\t\t\t\t    X===>");
SetColor(43);
printf("\t*-------*");
SetColor(44);
SetColor(44);
printf("\n      X===>");
SetColor(41);
printf("=========================================================");
SetColor(44);
printf("X===>");
SetColor(46);
printf("\t    %c",30);
SetColor(44);
printf("\n      X===>\t\t\t\t\t\t\t    X===>");
SetColor(44);
printf("\t    | ");
SetColor(44);
printf("\n      X===>");
SetColor(45);
printf("\t4.PLATINUM CUPON              ");
SetColor(44);
printf("\t\t   \t    X===>");
printf("\t    | ");
printf("\n      X===>\t\t\t\t\t\t\t    X===>");
printf("\t    | ");
printf("\n      X===>\t\t\t\t\t\t\t    X===>");
printf("\t    | ");
SetColor(44);
printf("\n      X===>");
SetColor(41);
printf("=========================================================");
SetColor(44);
printf("X===>");
printf("\t    | ");
printf("\n      X===>\t\t\t\t\t\t\t    X===>");
printf("\t    | ");
printf("\n      X===>\t\t\t\t\t\t\t    X===>");
printf("\t    | ");
printf("\n      X===>");
SetColor(42);
printf("=========================================================");
SetColor(44);
printf("X===>");
printf("\t    | ");
SetColor(44);
printf("\n      X===>");
SetColor(42);
printf("=========================================================");
SetColor(44);
printf("X===>");
printf("\t    | ");
printf("\n      X===>");
SetColor(42);
printf("=========================================================");
SetColor(44);
printf("X===>");
printf("\t    | ");
printf("\n   <================================================================================");
SetColor(46);
printf("*");
SetColor(44);
printf("======>");
printf("\n");
SetColor(43);
printf("\n\t    press 2 times Esc key in your key board to go to Main Menu");

   int agu=0,pat=0;
   while(1)
   {
    agu=0;
switch((agu=getch()))
{
case KEY_DOWN:  pat++;
                                    if(pat==1)
                                    {
                                        int a;
     system("color f");
    system("cls");
   system("color a");
SetColor(44);
printf("\n");
printf("\n   <================================================================================");
SetColor(46);
printf("*");
SetColor(44);
printf("======>");
printf("\n      X===>=========================================================X===>\t    |");
SetColor(44);
printf("\n      X===>");
SetColor(42);
printf("=========================================================");
SetColor(44);
printf("X===>\t    |");
SetColor(44);
printf("\n");
printf("      X===>");
SetColor(42);
printf("=========================================================");
SetColor(44);
printf("X===>\t    |");
SetColor(42);
printf("\n");
SetColor(44);
printf("      X===>\t\t\t\t\t\t            X===>\t    |");
SetColor(44);
printf("\n      X===>");
SetColor(43);
printf("\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 CUPON COUNTER \xB2\xB2\xB2\xB2\xB2\xB2\xB2\t    ");
SetColor(44);
printf("\t\t    X===>\t    |");
SetColor(44);
printf("\n      X===>");
printf("\t\t\t\t\t\t\t    X===>\t    |");
SetColor(44);
printf("\n      X===>");
SetColor(42);
printf("=========================================================");
SetColor(44);
printf("X===>\t    |");
SetColor(44);
printf("\n      X===>");
SetColor(42);
printf("=========================================================");
SetColor(44);
printf("X===>\t    |");
printf("\n      X===>\t\t\t\t\t\t\t    X===>");
SetColor(46);
printf("\t    %c",31);
SetColor(44);
printf("\n      X===>\t\t\t\t\t\t\t    X===>");
SetColor(43);
printf("\t*-------*");
SetColor(44);
printf("\n      X===>");
SetColor(41);
printf("=========================================================");
SetColor(44);
printf("X===>");
SetColor(43);
printf("\t  |   |");
SetColor(44);
printf("\n      X===>\t\t\t\t\t\t\t    X===>");
SetColor(43);
printf("\t  | ");
SetColor(42);
printf("B");
SetColor(43);
printf(" |");
SetColor(44);
printf("\n      X===>");
SetColor(47);
printf("\t1.BRONZE CUPON                  ");
SetColor(44);
printf("<------      ");
SetColor(44);
printf("\t    X===>");
SetColor(43);
printf("\t  | ");
SetColor(42);
printf(" ");
SetColor(43);
printf(" |");
SetColor(44);
printf("\n      X===>\t\t\t\t\t\t\t    X===>");
SetColor(43);
printf("\t  | ");
SetColor(42);
printf("I");
SetColor(43);
printf(" |");
SetColor(44);
printf("\n      X===>");
SetColor(41);
printf("=========================================================");
SetColor(44);
printf("X===>");
SetColor(43);
printf("\t  | ");
SetColor(42);
printf(" ");
SetColor(43);
printf(" |");
SetColor(44);
printf("\n      X===>\t\t\t\t\t\t\t    X===>");
SetColor(43);
printf("\t  | ");
SetColor(42);
printf("S");
SetColor(43);
printf(" |");
SetColor(44);
printf("\n      X===>");
SetColor(55);
printf("\t2.SILVER CUPON                ");
SetColor(44);
printf("               ");
SetColor(44);
printf("\t    X===>");
SetColor(43);
printf("\t  | ");
SetColor(42);
printf(" ");
SetColor(43);
printf(" |");
SetColor(44);
printf("\n      X===>\t\t\t\t\t\t\t    X===>");
SetColor(43);
printf("\t  | ");
SetColor(42);
printf("W");
SetColor(43);
printf(" |");
SetColor(44);
printf("\n      X===>");
SetColor(41);
printf("=========================================================");
SetColor(44);
printf("X===>");
SetColor(43);
printf("\t  | ");
SetColor(42);
printf(" ");
SetColor(43);
printf(" |");
SetColor(44);
printf("\n      X===>\t\t\t\t\t\t\t    X===>");
SetColor(43);
printf("\t  | ");
SetColor(42);
printf("A");
SetColor(43);
printf(" |");
SetColor(44);
printf("\n      X===>");
SetColor(46);
printf("\t3.GOLD CUPON                   ");
SetColor(44);
printf("              ");
SetColor(44);
printf("\t    X===>");
SetColor(43);
printf("\t  | ");
SetColor(42);
printf(" ");
SetColor(43);
printf(" |");
SetColor(44);
printf("\n      X===>\t\t\t\t\t\t\t    X===>");
SetColor(43);
printf("\t*-------*");
SetColor(44);
SetColor(44);
printf("\n      X===>");
SetColor(41);
printf("=========================================================");
SetColor(44);
printf("X===>");
SetColor(46);
printf("\t    %c",30);
SetColor(44);
printf("\n      X===>\t\t\t\t\t\t\t    X===>");
SetColor(44);
printf("\t    | ");
SetColor(44);
printf("\n      X===>");
SetColor(45);
printf("\t4.PLATINUM CUPON           ");
SetColor(44);
printf("        ");
SetColor(44);
printf("\t   \t    X===>");
printf("\t    | ");
printf("\n      X===>\t\t\t\t\t\t\t    X===>");
printf("\t    | ");
printf("\n      X===>\t\t\t\t\t\t\t    X===>");
printf("\t    | ");
SetColor(44);
printf("\n      X===>");
SetColor(41);
printf("=========================================================");
SetColor(44);
printf("X===>");
printf("\t    | ");
printf("\n      X===>\t\t\t\t\t\t\t    X===>");
printf("\t    | ");
printf("\n      X===>\t\t\t\t\t\t\t    X===>");
printf("\t    | ");
printf("\n      X===>");
SetColor(42);
printf("=========================================================");
SetColor(44);
printf("X===>");
printf("\t    | ");
SetColor(44);
printf("\n      X===>");
SetColor(42);
printf("=========================================================");
SetColor(44);
printf("X===>");
printf("\t    | ");
printf("\n      X===>");
SetColor(42);
printf("=========================================================");
SetColor(44);
printf("X===>");
printf("\t    | ");
printf("\n   <================================================================================");
SetColor(46);
printf("*");
SetColor(44);
printf("======>");
printf("\n");
SetColor(43);
printf("\n\t    press 2 times Esc key in your key board to go to Main Menu");


                                    if(getch()==13)
                                    bc();
                                    }
                                                                        if(pat==2)
                                    {
                                        int a;
     system("color f");
    system("cls");
   system("color a");
SetColor(44);
printf("\n");
printf("\n   <================================================================================");
SetColor(46);
printf("*");
SetColor(44);
printf("======>");
printf("\n      X===>=========================================================X===>\t    |");
SetColor(44);
printf("\n      X===>");
SetColor(42);
printf("=========================================================");
SetColor(44);
printf("X===>\t    |");
SetColor(44);
printf("\n");
printf("      X===>");
SetColor(42);
printf("=========================================================");
SetColor(44);
printf("X===>\t    |");
SetColor(42);
printf("\n");
SetColor(44);
printf("      X===>\t\t\t\t\t\t            X===>\t    |");
SetColor(44);
printf("\n      X===>");
SetColor(43);
printf("\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 CUPON COUNTER \xB2\xB2\xB2\xB2\xB2\xB2\xB2\t    ");
SetColor(44);
printf("\t\t    X===>\t    |");
SetColor(44);
printf("\n      X===>");
printf("\t\t\t\t\t\t\t    X===>\t    |");
SetColor(44);
printf("\n      X===>");
SetColor(42);
printf("=========================================================");
SetColor(44);
printf("X===>\t    |");
SetColor(44);
printf("\n      X===>");
SetColor(42);
printf("=========================================================");
SetColor(44);
printf("X===>\t    |");
printf("\n      X===>\t\t\t\t\t\t\t    X===>");
SetColor(46);
printf("\t    %c",31);
SetColor(44);
printf("\n      X===>\t\t\t\t\t\t\t    X===>");
SetColor(43);
printf("\t*-------*");
SetColor(44);
printf("\n      X===>");
SetColor(41);
printf("=========================================================");
SetColor(44);
printf("X===>");
SetColor(43);
printf("\t  |   |");
SetColor(44);
printf("\n      X===>\t\t\t\t\t\t\t    X===>");
SetColor(43);
printf("\t  | ");
SetColor(42);
printf("B");
SetColor(43);
printf(" |");
SetColor(44);
printf("\n      X===>");
SetColor(47);
printf("\t1.BRONZE CUPON                  ");
SetColor(44);
printf("             ");
SetColor(44);
printf("\t    X===>");
SetColor(43);
printf("\t  | ");
SetColor(42);
printf(" ");
SetColor(43);
printf(" |");
SetColor(44);
printf("\n      X===>\t\t\t\t\t\t\t    X===>");
SetColor(43);
printf("\t  | ");
SetColor(42);
printf("I");
SetColor(43);
printf(" |");
SetColor(44);
printf("\n      X===>");
SetColor(41);
printf("=========================================================");
SetColor(44);
printf("X===>");
SetColor(43);
printf("\t  | ");
SetColor(42);
printf(" ");
SetColor(43);
printf(" |");
SetColor(44);
printf("\n      X===>\t\t\t\t\t\t\t    X===>");
SetColor(43);
printf("\t  | ");
SetColor(42);
printf("S");
SetColor(43);
printf(" |");
SetColor(44);
printf("\n      X===>");
SetColor(44);
printf("\t2.SILVER CUPON                ");
SetColor(44);
printf("  <------      ");
SetColor(44);
printf("\t    X===>");
SetColor(43);
printf("\t  | ");
SetColor(42);
printf(" ");
SetColor(43);
printf(" |");
SetColor(44);
printf("\n      X===>\t\t\t\t\t\t\t    X===>");
SetColor(43);
printf("\t  | ");
SetColor(42);
printf("W");
SetColor(43);
printf(" |");
SetColor(44);
printf("\n      X===>");
SetColor(41);
printf("=========================================================");
SetColor(44);
printf("X===>");
SetColor(43);
printf("\t  | ");
SetColor(42);
printf(" ");
SetColor(43);
printf(" |");
SetColor(44);
printf("\n      X===>\t\t\t\t\t\t\t    X===>");
SetColor(43);
printf("\t  | ");
SetColor(42);
printf("A");
SetColor(43);
printf(" |");
SetColor(44);
printf("\n      X===>");
SetColor(46);
printf("\t3.GOLD CUPON                   ");
SetColor(44);
printf("              ");
SetColor(44);
printf("\t    X===>");
SetColor(43);
printf("\t  | ");
SetColor(42);
printf(" ");
SetColor(43);
printf(" |");
SetColor(44);
printf("\n      X===>\t\t\t\t\t\t\t    X===>");
SetColor(43);
printf("\t*-------*");
SetColor(44);
SetColor(44);
printf("\n      X===>");
SetColor(41);
printf("=========================================================");
SetColor(44);
printf("X===>");
SetColor(46);
printf("\t    %c",30);
SetColor(44);
printf("\n      X===>\t\t\t\t\t\t\t    X===>");
SetColor(44);
printf("\t    | ");
SetColor(44);
printf("\n      X===>");
SetColor(45);
printf("\t4.PLATINUM CUPON           ");
SetColor(44);
printf("        ");
SetColor(44);
printf("\t   \t    X===>");
printf("\t    | ");
printf("\n      X===>\t\t\t\t\t\t\t    X===>");
printf("\t    | ");
printf("\n      X===>\t\t\t\t\t\t\t    X===>");
printf("\t    | ");
SetColor(44);
printf("\n      X===>");
SetColor(41);
printf("=========================================================");
SetColor(44);
printf("X===>");
printf("\t    | ");
printf("\n      X===>\t\t\t\t\t\t\t    X===>");
printf("\t    | ");
printf("\n      X===>\t\t\t\t\t\t\t    X===>");
printf("\t    | ");
printf("\n      X===>");
SetColor(42);
printf("=========================================================");
SetColor(44);
printf("X===>");
printf("\t    | ");
SetColor(44);
printf("\n      X===>");
SetColor(42);
printf("=========================================================");
SetColor(44);
printf("X===>");
printf("\t    | ");
printf("\n      X===>");
SetColor(42);
printf("=========================================================");
SetColor(44);
printf("X===>");
printf("\t    | ");
printf("\n   <================================================================================");
SetColor(46);
printf("*");
SetColor(44);
printf("======>");
printf("\n");
SetColor(43);
printf("\n\t    press 2 times Esc key in your key board to go to Main Menu");


                                    if(getch()==13)
                                    sc();
                                    }
                                                                        if(pat==3)
                                    {
                                        int a;
     system("color f");
    system("cls");
   system("color a");
SetColor(44);
printf("\n");
printf("\n   <================================================================================");
SetColor(46);
printf("*");
SetColor(44);
printf("======>");
printf("\n      X===>=========================================================X===>\t    |");
SetColor(44);
printf("\n      X===>");
SetColor(42);
printf("=========================================================");
SetColor(44);
printf("X===>\t    |");
SetColor(44);
printf("\n");
printf("      X===>");
SetColor(42);
printf("=========================================================");
SetColor(44);
printf("X===>\t    |");
SetColor(42);
printf("\n");
SetColor(44);
printf("      X===>\t\t\t\t\t\t            X===>\t    |");
SetColor(44);
printf("\n      X===>");
SetColor(43);
printf("\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 CUPON COUNTER \xB2\xB2\xB2\xB2\xB2\xB2\xB2\t    ");
SetColor(44);
printf("\t\t    X===>\t    |");
SetColor(44);
printf("\n      X===>");
printf("\t\t\t\t\t\t\t    X===>\t    |");
SetColor(44);
printf("\n      X===>");
SetColor(42);
printf("=========================================================");
SetColor(44);
printf("X===>\t    |");
SetColor(44);
printf("\n      X===>");
SetColor(42);
printf("=========================================================");
SetColor(44);
printf("X===>\t    |");
printf("\n      X===>\t\t\t\t\t\t\t    X===>");
SetColor(46);
printf("\t    %c",31);
SetColor(44);
printf("\n      X===>\t\t\t\t\t\t\t    X===>");
SetColor(43);
printf("\t*-------*");
SetColor(44);
printf("\n      X===>");
SetColor(41);
printf("=========================================================");
SetColor(44);
printf("X===>");
SetColor(43);
printf("\t  |   |");
SetColor(44);
printf("\n      X===>\t\t\t\t\t\t\t    X===>");
SetColor(43);
printf("\t  | ");
SetColor(42);
printf("B");
SetColor(43);
printf(" |");
SetColor(44);
printf("\n      X===>");
SetColor(47);
printf("\t1.BRONZE CUPON                  ");
SetColor(44);
printf("             ");
SetColor(44);
printf("\t    X===>");
SetColor(43);
printf("\t  | ");
SetColor(42);
printf(" ");
SetColor(43);
printf(" |");
SetColor(44);
printf("\n      X===>\t\t\t\t\t\t\t    X===>");
SetColor(43);
printf("\t  | ");
SetColor(42);
printf("I");
SetColor(43);
printf(" |");
SetColor(44);
printf("\n      X===>");
SetColor(41);
printf("=========================================================");
SetColor(44);
printf("X===>");
SetColor(43);
printf("\t  | ");
SetColor(42);
printf(" ");
SetColor(43);
printf(" |");
SetColor(44);
printf("\n      X===>\t\t\t\t\t\t\t    X===>");
SetColor(43);
printf("\t  | ");
SetColor(42);
printf("S");
SetColor(43);
printf(" |");
SetColor(44);
printf("\n      X===>");
SetColor(55);
printf("\t2.SILVER CUPON                ");
SetColor(44);
printf("               ");
SetColor(44);
printf("\t    X===>");
SetColor(43);
printf("\t  | ");
SetColor(42);
printf(" ");
SetColor(43);
printf(" |");
SetColor(44);
printf("\n      X===>\t\t\t\t\t\t\t    X===>");
SetColor(43);
printf("\t  | ");
SetColor(42);
printf("W");
SetColor(43);
printf(" |");
SetColor(44);
printf("\n      X===>");
SetColor(41);
printf("=========================================================");
SetColor(44);
printf("X===>");
SetColor(43);
printf("\t  | ");
SetColor(42);
printf(" ");
SetColor(43);
printf(" |");
SetColor(44);
printf("\n      X===>\t\t\t\t\t\t\t    X===>");
SetColor(43);
printf("\t  | ");
SetColor(42);
printf("A");
SetColor(43);
printf(" |");
SetColor(44);
printf("\n      X===>");
SetColor(44);
printf("\t3.GOLD CUPON                   ");
SetColor(44);
printf(" <------      ");
SetColor(44);
printf("\t    X===>");
SetColor(43);
printf("\t  | ");
SetColor(42);
printf(" ");
SetColor(43);
printf(" |");
SetColor(44);
printf("\n      X===>\t\t\t\t\t\t\t    X===>");
SetColor(43);
printf("\t*-------*");
SetColor(44);
SetColor(44);
printf("\n      X===>");
SetColor(41);
printf("=========================================================");
SetColor(44);
printf("X===>");
SetColor(46);
printf("\t    %c",30);
SetColor(44);
printf("\n      X===>\t\t\t\t\t\t\t    X===>");
SetColor(44);
printf("\t    | ");
SetColor(44);
printf("\n      X===>");
SetColor(45);
printf("\t4.PLATINUM CUPON           ");
SetColor(44);
printf("        ");
SetColor(44);
printf("\t   \t    X===>");
printf("\t    | ");
printf("\n      X===>\t\t\t\t\t\t\t    X===>");
printf("\t    | ");
printf("\n      X===>\t\t\t\t\t\t\t    X===>");
printf("\t    | ");
SetColor(44);
printf("\n      X===>");
SetColor(41);
printf("=========================================================");
SetColor(44);
printf("X===>");
printf("\t    | ");
printf("\n      X===>\t\t\t\t\t\t\t    X===>");
printf("\t    | ");
printf("\n      X===>\t\t\t\t\t\t\t    X===>");
printf("\t    | ");
printf("\n      X===>");
SetColor(42);
printf("=========================================================");
SetColor(44);
printf("X===>");
printf("\t    | ");
SetColor(44);
printf("\n      X===>");
SetColor(42);
printf("=========================================================");
SetColor(44);
printf("X===>");
printf("\t    | ");
printf("\n      X===>");
SetColor(42);
printf("=========================================================");
SetColor(44);
printf("X===>");
printf("\t    | ");
printf("\n   <================================================================================");
SetColor(46);
printf("*");
SetColor(44);
printf("======>");
printf("\n");
SetColor(43);
printf("\n\t    press 2 times Esc key in your key board to go to Main Menu");


                                    if(getch()==13)
                                    gc();
                                    }
                                                                        if(pat==4)
                                    {
                                        int a;
     system("color f");
    system("cls");
   system("color a");
SetColor(44);
printf("\n");
printf("\n   <================================================================================");
SetColor(46);
printf("*");
SetColor(44);
printf("======>");
printf("\n      X===>=========================================================X===>\t    |");
SetColor(44);
printf("\n      X===>");
SetColor(42);
printf("=========================================================");
SetColor(44);
printf("X===>\t    |");
SetColor(44);
printf("\n");
printf("      X===>");
SetColor(42);
printf("=========================================================");
SetColor(44);
printf("X===>\t    |");
SetColor(42);
printf("\n");
SetColor(44);
printf("      X===>\t\t\t\t\t\t            X===>\t    |");
SetColor(44);
printf("\n      X===>");
SetColor(43);
printf("\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 CUPON COUNTER \xB2\xB2\xB2\xB2\xB2\xB2\xB2\t    ");
SetColor(44);
printf("\t\t    X===>\t    |");
SetColor(44);
printf("\n      X===>");
printf("\t\t\t\t\t\t\t    X===>\t    |");
SetColor(44);
printf("\n      X===>");
SetColor(42);
printf("=========================================================");
SetColor(44);
printf("X===>\t    |");
SetColor(44);
printf("\n      X===>");
SetColor(42);
printf("=========================================================");
SetColor(44);
printf("X===>\t    |");
printf("\n      X===>\t\t\t\t\t\t\t    X===>");
SetColor(46);
printf("\t    %c",31);
SetColor(44);
printf("\n      X===>\t\t\t\t\t\t\t    X===>");
SetColor(43);
printf("\t*-------*");
SetColor(44);
printf("\n      X===>");
SetColor(41);
printf("=========================================================");
SetColor(44);
printf("X===>");
SetColor(43);
printf("\t  |   |");
SetColor(44);
printf("\n      X===>\t\t\t\t\t\t\t    X===>");
SetColor(43);
printf("\t  | ");
SetColor(42);
printf("B");
SetColor(43);
printf(" |");
SetColor(44);
printf("\n      X===>");
SetColor(47);
printf("\t1.BRONZE CUPON                  ");
SetColor(44);
printf("             ");
SetColor(44);
printf("\t    X===>");
SetColor(43);
printf("\t  | ");
SetColor(42);
printf(" ");
SetColor(43);
printf(" |");
SetColor(44);
printf("\n      X===>\t\t\t\t\t\t\t    X===>");
SetColor(43);
printf("\t  | ");
SetColor(42);
printf("I");
SetColor(43);
printf(" |");
SetColor(44);
printf("\n      X===>");
SetColor(41);
printf("=========================================================");
SetColor(44);
printf("X===>");
SetColor(43);
printf("\t  | ");
SetColor(42);
printf(" ");
SetColor(43);
printf(" |");
SetColor(44);
printf("\n      X===>\t\t\t\t\t\t\t    X===>");
SetColor(43);
printf("\t  | ");
SetColor(42);
printf("S");
SetColor(43);
printf(" |");
SetColor(44);
printf("\n      X===>");
SetColor(55);
printf("\t2.SILVER CUPON                ");
SetColor(44);
printf("               ");
SetColor(44);
printf("\t    X===>");
SetColor(43);
printf("\t  | ");
SetColor(42);
printf(" ");
SetColor(43);
printf(" |");
SetColor(44);
printf("\n      X===>\t\t\t\t\t\t\t    X===>");
SetColor(43);
printf("\t  | ");
SetColor(42);
printf("W");
SetColor(43);
printf(" |");
SetColor(44);
printf("\n      X===>");
SetColor(41);
printf("=========================================================");
SetColor(44);
printf("X===>");
SetColor(43);
printf("\t  | ");
SetColor(42);
printf(" ");
SetColor(43);
printf(" |");
SetColor(44);
printf("\n      X===>\t\t\t\t\t\t\t    X===>");
SetColor(43);
printf("\t  | ");
SetColor(42);
printf("A");
SetColor(43);
printf(" |");
SetColor(44);
printf("\n      X===>");
SetColor(46);
printf("\t3.GOLD CUPON                   ");
SetColor(44);
printf("              ");
SetColor(44);
printf("\t    X===>");
SetColor(43);
printf("\t  | ");
SetColor(42);
printf(" ");
SetColor(43);
printf(" |");
SetColor(44);
printf("\n      X===>\t\t\t\t\t\t\t    X===>");
SetColor(43);
printf("\t*-------*");
SetColor(44);
SetColor(44);
printf("\n      X===>");
SetColor(41);
printf("=========================================================");
SetColor(44);
printf("X===>");
SetColor(46);
printf("\t    %c",30);
SetColor(44);
printf("\n      X===>\t\t\t\t\t\t\t    X===>");
SetColor(44);
printf("\t    | ");
SetColor(44);
printf("\n      X===>");
SetColor(44);
printf("\t4.PLATINUM CUPON              ");
SetColor(44);
printf("   <------ ");
SetColor(44);
printf("\t    X===>");
printf("\t    | ");
printf("\n      X===>\t\t\t\t\t\t\t    X===>");
printf("\t    | ");
printf("\n      X===>\t\t\t\t\t\t\t    X===>");
printf("\t    | ");
SetColor(44);
printf("\n      X===>");
SetColor(41);
printf("=========================================================");
SetColor(44);
printf("X===>");
printf("\t    | ");
printf("\n      X===>\t\t\t\t\t\t\t    X===>");
printf("\t    | ");
printf("\n      X===>\t\t\t\t\t\t\t    X===>");
printf("\t    | ");
printf("\n      X===>");
SetColor(42);
printf("=========================================================");
SetColor(44);
printf("X===>");
printf("\t    | ");
SetColor(44);
printf("\n      X===>");
SetColor(42);
printf("=========================================================");
SetColor(44);
printf("X===>");
printf("\t    | ");
printf("\n      X===>");
SetColor(42);
printf("=========================================================");
SetColor(44);
printf("X===>");
printf("\t    | ");
printf("\n   <================================================================================");
SetColor(46);
printf("*");
SetColor(44);
printf("======>");
printf("\n");
SetColor(43);
printf("\n\t    press 2 times Esc key in your key board to go to Main Menu");


                                    if(getch()==13)
                                    pc();
                                    }
                                    if(pat==5)
                                    {
                                        pat=1;
                                        system("color f");
    system("cls");
   system("color a");
SetColor(44);
printf("\n");
printf("\n   <================================================================================");
SetColor(46);
printf("*");
SetColor(44);
printf("======>");
printf("\n      X===>=========================================================X===>\t    |");
SetColor(44);
printf("\n      X===>");
SetColor(42);
printf("=========================================================");
SetColor(44);
printf("X===>\t    |");
SetColor(44);
printf("\n");
printf("      X===>");
SetColor(42);
printf("=========================================================");
SetColor(44);
printf("X===>\t    |");
SetColor(42);
printf("\n");
SetColor(44);
printf("      X===>\t\t\t\t\t\t            X===>\t    |");
SetColor(44);
printf("\n      X===>");
SetColor(43);
printf("\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 CUPON COUNTER \xB2\xB2\xB2\xB2\xB2\xB2\xB2\t    ");
SetColor(44);
printf("\t\t    X===>\t    |");
SetColor(44);
printf("\n      X===>");
printf("\t\t\t\t\t\t\t    X===>\t    |");
SetColor(44);
printf("\n      X===>");
SetColor(42);
printf("=========================================================");
SetColor(44);
printf("X===>\t    |");
SetColor(44);
printf("\n      X===>");
SetColor(42);
printf("=========================================================");
SetColor(44);
printf("X===>\t    |");
printf("\n      X===>\t\t\t\t\t\t\t    X===>");
SetColor(46);
printf("\t    %c",31);
SetColor(44);
printf("\n      X===>\t\t\t\t\t\t\t    X===>");
SetColor(43);
printf("\t*-------*");
SetColor(44);
printf("\n      X===>");
SetColor(41);
printf("=========================================================");
SetColor(44);
printf("X===>");
SetColor(43);
printf("\t  |   |");
SetColor(44);
printf("\n      X===>\t\t\t\t\t\t\t    X===>");
SetColor(43);
printf("\t  | ");
SetColor(42);
printf("B");
SetColor(43);
printf(" |");
SetColor(44);
printf("\n      X===>");
SetColor(44);
printf("\t1.BRONZE CUPON                  ");
SetColor(44);
printf("<------      ");
SetColor(44);
printf("\t    X===>");
SetColor(43);
printf("\t  | ");
SetColor(42);
printf(" ");
SetColor(43);
printf(" |");
SetColor(44);
printf("\n      X===>\t\t\t\t\t\t\t    X===>");
SetColor(43);
printf("\t  | ");
SetColor(42);
printf("I");
SetColor(43);
printf(" |");
SetColor(44);
printf("\n      X===>");
SetColor(41);
printf("=========================================================");
SetColor(44);
printf("X===>");
SetColor(43);
printf("\t  | ");
SetColor(42);
printf(" ");
SetColor(43);
printf(" |");
SetColor(44);
printf("\n      X===>\t\t\t\t\t\t\t    X===>");
SetColor(43);
printf("\t  | ");
SetColor(42);
printf("S");
SetColor(43);
printf(" |");
SetColor(44);
printf("\n      X===>");
SetColor(55);
printf("\t2.SILVER CUPON                ");
SetColor(44);
printf("               ");
SetColor(44);
printf("\t    X===>");
SetColor(43);
printf("\t  | ");
SetColor(42);
printf(" ");
SetColor(43);
printf(" |");
SetColor(44);
printf("\n      X===>\t\t\t\t\t\t\t    X===>");
SetColor(43);
printf("\t  | ");
SetColor(42);
printf("W");
SetColor(43);
printf(" |");
SetColor(44);
printf("\n      X===>");
SetColor(41);
printf("=========================================================");
SetColor(44);
printf("X===>");
SetColor(43);
printf("\t  | ");
SetColor(42);
printf(" ");
SetColor(43);
printf(" |");
SetColor(44);
printf("\n      X===>\t\t\t\t\t\t\t    X===>");
SetColor(43);
printf("\t  | ");
SetColor(42);
printf("A");
SetColor(43);
printf(" |");
SetColor(44);
printf("\n      X===>");
SetColor(46);
printf("\t3.GOLD CUPON                   ");
SetColor(44);
printf("              ");
SetColor(44);
printf("\t    X===>");
SetColor(43);
printf("\t  | ");
SetColor(42);
printf(" ");
SetColor(43);
printf(" |");
SetColor(44);
printf("\n      X===>\t\t\t\t\t\t\t    X===>");
SetColor(43);
printf("\t*-------*");
SetColor(44);
SetColor(44);
printf("\n      X===>");
SetColor(41);
printf("=========================================================");
SetColor(44);
printf("X===>");
SetColor(46);
printf("\t    %c",30);
SetColor(44);
printf("\n      X===>\t\t\t\t\t\t\t    X===>");
SetColor(44);
printf("\t    | ");
SetColor(44);
printf("\n      X===>");
SetColor(45);
printf("\t4.PLATINUM CUPON           ");
SetColor(44);
printf("        ");
SetColor(44);
printf("\t   \t    X===>");
printf("\t    | ");
printf("\n      X===>\t\t\t\t\t\t\t    X===>");
printf("\t    | ");
printf("\n      X===>\t\t\t\t\t\t\t    X===>");
printf("\t    | ");
SetColor(44);
printf("\n      X===>");
SetColor(41);
printf("=========================================================");
SetColor(44);
printf("X===>");
printf("\t    | ");
printf("\n      X===>\t\t\t\t\t\t\t    X===>");
printf("\t    | ");
printf("\n      X===>\t\t\t\t\t\t\t    X===>");
printf("\t    | ");
printf("\n      X===>");
SetColor(42);
printf("=========================================================");
SetColor(44);
printf("X===>");
printf("\t    | ");
SetColor(44);
printf("\n      X===>");
SetColor(42);
printf("=========================================================");
SetColor(44);
printf("X===>");
printf("\t    | ");
printf("\n      X===>");
SetColor(42);
printf("=========================================================");
SetColor(44);
printf("X===>");
printf("\t    | ");
printf("\n   <================================================================================");
SetColor(46);
printf("*");
SetColor(44);
printf("======>");
printf("\n");
SetColor(43);
printf("\n\t    press 2 times Esc key in your key board to go to Main Menu");


                                    if(getch()==13)
                                    bc();
                                    }
             break;
case KEY_UP:  pat--;
                                                    if(pat==1)
                                    {

     system("color f");
    system("cls");
   system("color a");
SetColor(44);
printf("\n");
printf("\n   <================================================================================");
SetColor(46);
printf("*");
SetColor(44);
printf("======>");
printf("\n      X===>=========================================================X===>\t    |");
SetColor(44);
printf("\n      X===>");
SetColor(42);
printf("=========================================================");
SetColor(44);
printf("X===>\t    |");
SetColor(44);
printf("\n");
printf("      X===>");
SetColor(42);
printf("=========================================================");
SetColor(44);
printf("X===>\t    |");
SetColor(42);
printf("\n");
SetColor(44);
printf("      X===>\t\t\t\t\t\t            X===>\t    |");
SetColor(44);
printf("\n      X===>");
SetColor(43);
printf("\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 CUPON COUNTER \xB2\xB2\xB2\xB2\xB2\xB2\xB2\t    ");
SetColor(44);
printf("\t\t    X===>\t    |");
SetColor(44);
printf("\n      X===>");
printf("\t\t\t\t\t\t\t    X===>\t    |");
SetColor(44);
printf("\n      X===>");
SetColor(42);
printf("=========================================================");
SetColor(44);
printf("X===>\t    |");
SetColor(44);
printf("\n      X===>");
SetColor(42);
printf("=========================================================");
SetColor(44);
printf("X===>\t    |");
printf("\n      X===>\t\t\t\t\t\t\t    X===>");
SetColor(46);
printf("\t    %c",31);
SetColor(44);
printf("\n      X===>\t\t\t\t\t\t\t    X===>");
SetColor(43);
printf("\t*-------*");
SetColor(44);
printf("\n      X===>");
SetColor(41);
printf("=========================================================");
SetColor(44);
printf("X===>");
SetColor(43);
printf("\t  |   |");
SetColor(44);
printf("\n      X===>\t\t\t\t\t\t\t    X===>");
SetColor(43);
printf("\t  | ");
SetColor(42);
printf("B");
SetColor(43);
printf(" |");
SetColor(44);
printf("\n      X===>");
SetColor(44);
printf("\t1.BRONZE CUPON                  ");
SetColor(44);
printf("<------      ");
SetColor(44);
printf("\t    X===>");
SetColor(43);
printf("\t  | ");
SetColor(42);
printf(" ");
SetColor(43);
printf(" |");
SetColor(44);
printf("\n      X===>\t\t\t\t\t\t\t    X===>");
SetColor(43);
printf("\t  | ");
SetColor(42);
printf("I");
SetColor(43);
printf(" |");
SetColor(44);
printf("\n      X===>");
SetColor(41);
printf("=========================================================");
SetColor(44);
printf("X===>");
SetColor(43);
printf("\t  | ");
SetColor(42);
printf(" ");
SetColor(43);
printf(" |");
SetColor(44);
printf("\n      X===>\t\t\t\t\t\t\t    X===>");
SetColor(43);
printf("\t  | ");
SetColor(42);
printf("S");
SetColor(43);
printf(" |");
SetColor(44);
printf("\n      X===>");
SetColor(55);
printf("\t2.SILVER CUPON                ");
SetColor(44);
printf("               ");
SetColor(44);
printf("\t    X===>");
SetColor(43);
printf("\t  | ");
SetColor(42);
printf(" ");
SetColor(43);
printf(" |");
SetColor(44);
printf("\n      X===>\t\t\t\t\t\t\t    X===>");
SetColor(43);
printf("\t  | ");
SetColor(42);
printf("W");
SetColor(43);
printf(" |");
SetColor(44);
printf("\n      X===>");
SetColor(41);
printf("=========================================================");
SetColor(44);
printf("X===>");
SetColor(43);
printf("\t  | ");
SetColor(42);
printf(" ");
SetColor(43);
printf(" |");
SetColor(44);
printf("\n      X===>\t\t\t\t\t\t\t    X===>");
SetColor(43);
printf("\t  | ");
SetColor(42);
printf("A");
SetColor(43);
printf(" |");
SetColor(44);
printf("\n      X===>");
SetColor(46);
printf("\t3.GOLD CUPON                   ");
SetColor(44);
printf("              ");
SetColor(44);
printf("\t    X===>");
SetColor(43);
printf("\t  | ");
SetColor(42);
printf(" ");
SetColor(43);
printf(" |");
SetColor(44);
printf("\n      X===>\t\t\t\t\t\t\t    X===>");
SetColor(43);
printf("\t*-------*");
SetColor(44);
SetColor(44);
printf("\n      X===>");
SetColor(41);
printf("=========================================================");
SetColor(44);
printf("X===>");
SetColor(46);
printf("\t    %c",30);
SetColor(44);
printf("\n      X===>\t\t\t\t\t\t\t    X===>");
SetColor(44);
printf("\t    | ");
SetColor(44);
printf("\n      X===>");
SetColor(45);
printf("\t4.PLATINUM CUPON           ");
SetColor(44);
printf("        ");
SetColor(44);
printf("\t   \t    X===>");
printf("\t    | ");
printf("\n      X===>\t\t\t\t\t\t\t    X===>");
printf("\t    | ");
printf("\n      X===>\t\t\t\t\t\t\t    X===>");
printf("\t    | ");
SetColor(44);
printf("\n      X===>");
SetColor(41);
printf("=========================================================");
SetColor(44);
printf("X===>");
printf("\t    | ");
printf("\n      X===>\t\t\t\t\t\t\t    X===>");
printf("\t    | ");
printf("\n      X===>\t\t\t\t\t\t\t    X===>");
printf("\t    | ");
printf("\n      X===>");
SetColor(42);
printf("=========================================================");
SetColor(44);
printf("X===>");
printf("\t    | ");
SetColor(44);
printf("\n      X===>");
SetColor(42);
printf("=========================================================");
SetColor(44);
printf("X===>");
printf("\t    | ");
printf("\n      X===>");
SetColor(42);
printf("=========================================================");
SetColor(44);
printf("X===>");
printf("\t    | ");
printf("\n   <================================================================================");
SetColor(46);
printf("*");
SetColor(44);
printf("======>");
printf("\n");
SetColor(43);
printf("\n\t    press 2 times Esc key in your key board to go to Main Menu");


                                    if(getch()==13)
                                    bc();
                                    }
                                                                        if(pat==2)
                                    {
                                        int a;
     system("color f");
    system("cls");
   system("color a");
SetColor(44);
printf("\n");
printf("\n   <================================================================================");
SetColor(46);
printf("*");
SetColor(44);
printf("======>");
printf("\n      X===>=========================================================X===>\t    |");
SetColor(44);
printf("\n      X===>");
SetColor(42);
printf("=========================================================");
SetColor(44);
printf("X===>\t    |");
SetColor(44);
printf("\n");
printf("      X===>");
SetColor(42);
printf("=========================================================");
SetColor(44);
printf("X===>\t    |");
SetColor(42);
printf("\n");
SetColor(44);
printf("      X===>\t\t\t\t\t\t            X===>\t    |");
SetColor(44);
printf("\n      X===>");
SetColor(43);
printf("\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 CUPON COUNTER \xB2\xB2\xB2\xB2\xB2\xB2\xB2\t    ");
SetColor(44);
printf("\t\t    X===>\t    |");
SetColor(44);
printf("\n      X===>");
printf("\t\t\t\t\t\t\t    X===>\t    |");
SetColor(44);
printf("\n      X===>");
SetColor(42);
printf("=========================================================");
SetColor(44);
printf("X===>\t    |");
SetColor(44);
printf("\n      X===>");
SetColor(42);
printf("=========================================================");
SetColor(44);
printf("X===>\t    |");
printf("\n      X===>\t\t\t\t\t\t\t    X===>");
SetColor(46);
printf("\t    %c",31);
SetColor(44);
printf("\n      X===>\t\t\t\t\t\t\t    X===>");
SetColor(43);
printf("\t*-------*");
SetColor(44);
printf("\n      X===>");
SetColor(41);
printf("=========================================================");
SetColor(44);
printf("X===>");
SetColor(43);
printf("\t  |   |");
SetColor(44);
printf("\n      X===>\t\t\t\t\t\t\t    X===>");
SetColor(43);
printf("\t  | ");
SetColor(42);
printf("B");
SetColor(43);
printf(" |");
SetColor(44);
printf("\n      X===>");
SetColor(47);
printf("\t1.BRONZE CUPON                  ");
SetColor(44);
printf("             ");
SetColor(44);
printf("\t    X===>");
SetColor(43);
printf("\t  | ");
SetColor(42);
printf(" ");
SetColor(43);
printf(" |");
SetColor(44);
printf("\n      X===>\t\t\t\t\t\t\t    X===>");
SetColor(43);
printf("\t  | ");
SetColor(42);
printf("I");
SetColor(43);
printf(" |");
SetColor(44);
printf("\n      X===>");
SetColor(41);
printf("=========================================================");
SetColor(44);
printf("X===>");
SetColor(43);
printf("\t  | ");
SetColor(42);
printf(" ");
SetColor(43);
printf(" |");
SetColor(44);
printf("\n      X===>\t\t\t\t\t\t\t    X===>");
SetColor(43);
printf("\t  | ");
SetColor(42);
printf("S");
SetColor(43);
printf(" |");
SetColor(44);
printf("\n      X===>");
SetColor(44);
printf("\t2.SILVER CUPON                ");
SetColor(44);
printf("  <------      ");
SetColor(44);
printf("\t    X===>");
SetColor(43);
printf("\t  | ");
SetColor(42);
printf(" ");
SetColor(43);
printf(" |");
SetColor(44);
printf("\n      X===>\t\t\t\t\t\t\t    X===>");
SetColor(43);
printf("\t  | ");
SetColor(42);
printf("W");
SetColor(43);
printf(" |");
SetColor(44);
printf("\n      X===>");
SetColor(41);
printf("=========================================================");
SetColor(44);
printf("X===>");
SetColor(43);
printf("\t  | ");
SetColor(42);
printf(" ");
SetColor(43);
printf(" |");
SetColor(44);
printf("\n      X===>\t\t\t\t\t\t\t    X===>");
SetColor(43);
printf("\t  | ");
SetColor(42);
printf("A");
SetColor(43);
printf(" |");
SetColor(44);
printf("\n      X===>");
SetColor(46);
printf("\t3.GOLD CUPON                   ");
SetColor(44);
printf("              ");
SetColor(44);
printf("\t    X===>");
SetColor(43);
printf("\t  | ");
SetColor(42);
printf(" ");
SetColor(43);
printf(" |");
SetColor(44);
printf("\n      X===>\t\t\t\t\t\t\t    X===>");
SetColor(43);
printf("\t*-------*");
SetColor(44);
SetColor(44);
printf("\n      X===>");
SetColor(41);
printf("=========================================================");
SetColor(44);
printf("X===>");
SetColor(46);
printf("\t    %c",30);
SetColor(44);
printf("\n      X===>\t\t\t\t\t\t\t    X===>");
SetColor(44);
printf("\t    | ");
SetColor(44);
printf("\n      X===>");
SetColor(45);
printf("\t4.PLATINUM CUPON           ");
SetColor(44);
printf("        ");
SetColor(44);
printf("\t   \t    X===>");
printf("\t    | ");
printf("\n      X===>\t\t\t\t\t\t\t    X===>");
printf("\t    | ");
printf("\n      X===>\t\t\t\t\t\t\t    X===>");
printf("\t    | ");
SetColor(44);
printf("\n      X===>");
SetColor(41);
printf("=========================================================");
SetColor(44);
printf("X===>");
printf("\t    | ");
printf("\n      X===>\t\t\t\t\t\t\t    X===>");
printf("\t    | ");
printf("\n      X===>\t\t\t\t\t\t\t    X===>");
printf("\t    | ");
printf("\n      X===>");
SetColor(42);
printf("=========================================================");
SetColor(44);
printf("X===>");
printf("\t    | ");
SetColor(44);
printf("\n      X===>");
SetColor(42);
printf("=========================================================");
SetColor(44);
printf("X===>");
printf("\t    | ");
printf("\n      X===>");
SetColor(42);
printf("=========================================================");
SetColor(44);
printf("X===>");
printf("\t    | ");
printf("\n   <================================================================================");
SetColor(46);
printf("*");
SetColor(44);
printf("======>");
printf("\n");
SetColor(43);
printf("\n\t    press 2 times Esc key in your key board to go to Main Menu");


                                    if(getch()==13)
                                    sc();
                                    }
                                                                        if(pat==3)
                                    {
                                        int a;
     system("color f");
    system("cls");
   system("color a");
SetColor(44);
printf("\n");
printf("\n   <================================================================================");
SetColor(46);
printf("*");
SetColor(44);
printf("======>");
printf("\n      X===>=========================================================X===>\t    |");
SetColor(44);
printf("\n      X===>");
SetColor(42);
printf("=========================================================");
SetColor(44);
printf("X===>\t    |");
SetColor(44);
printf("\n");
printf("      X===>");
SetColor(42);
printf("=========================================================");
SetColor(44);
printf("X===>\t    |");
SetColor(42);
printf("\n");
SetColor(44);
printf("      X===>\t\t\t\t\t\t            X===>\t    |");
SetColor(44);
printf("\n      X===>");
SetColor(43);
printf("\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 CUPON COUNTER \xB2\xB2\xB2\xB2\xB2\xB2\xB2\t    ");
SetColor(44);
printf("\t\t    X===>\t    |");
SetColor(44);
printf("\n      X===>");
printf("\t\t\t\t\t\t\t    X===>\t    |");
SetColor(44);
printf("\n      X===>");
SetColor(42);
printf("=========================================================");
SetColor(44);
printf("X===>\t    |");
SetColor(44);
printf("\n      X===>");
SetColor(42);
printf("=========================================================");
SetColor(44);
printf("X===>\t    |");
printf("\n      X===>\t\t\t\t\t\t\t    X===>");
SetColor(46);
printf("\t    %c",31);
SetColor(44);
printf("\n      X===>\t\t\t\t\t\t\t    X===>");
SetColor(43);
printf("\t*-------*");
SetColor(44);
printf("\n      X===>");
SetColor(41);
printf("=========================================================");
SetColor(44);
printf("X===>");
SetColor(43);
printf("\t  |   |");
SetColor(44);
printf("\n      X===>\t\t\t\t\t\t\t    X===>");
SetColor(43);
printf("\t  | ");
SetColor(42);
printf("B");
SetColor(43);
printf(" |");
SetColor(44);
printf("\n      X===>");
SetColor(47);
printf("\t1.BRONZE CUPON                  ");
SetColor(44);
printf("             ");
SetColor(44);
printf("\t    X===>");
SetColor(43);
printf("\t  | ");
SetColor(42);
printf(" ");
SetColor(43);
printf(" |");
SetColor(44);
printf("\n      X===>\t\t\t\t\t\t\t    X===>");
SetColor(43);
printf("\t  | ");
SetColor(42);
printf("I");
SetColor(43);
printf(" |");
SetColor(44);
printf("\n      X===>");
SetColor(41);
printf("=========================================================");
SetColor(44);
printf("X===>");
SetColor(43);
printf("\t  | ");
SetColor(42);
printf(" ");
SetColor(43);
printf(" |");
SetColor(44);
printf("\n      X===>\t\t\t\t\t\t\t    X===>");
SetColor(43);
printf("\t  | ");
SetColor(42);
printf("S");
SetColor(43);
printf(" |");
SetColor(44);
printf("\n      X===>");
SetColor(55);
printf("\t2.SILVER CUPON                ");
SetColor(44);
printf("               ");
SetColor(44);
printf("\t    X===>");
SetColor(43);
printf("\t  | ");
SetColor(42);
printf(" ");
SetColor(43);
printf(" |");
SetColor(44);
printf("\n      X===>\t\t\t\t\t\t\t    X===>");
SetColor(43);
printf("\t  | ");
SetColor(42);
printf("W");
SetColor(43);
printf(" |");
SetColor(44);
printf("\n      X===>");
SetColor(41);
printf("=========================================================");
SetColor(44);
printf("X===>");
SetColor(43);
printf("\t  | ");
SetColor(42);
printf(" ");
SetColor(43);
printf(" |");
SetColor(44);
printf("\n      X===>\t\t\t\t\t\t\t    X===>");
SetColor(43);
printf("\t  | ");
SetColor(42);
printf("A");
SetColor(43);
printf(" |");
SetColor(44);
printf("\n      X===>");
SetColor(44);
printf("\t3.GOLD CUPON                   ");
SetColor(44);
printf(" <------      ");
SetColor(44);
printf("\t    X===>");
SetColor(43);
printf("\t  | ");
SetColor(42);
printf(" ");
SetColor(43);
printf(" |");
SetColor(44);
printf("\n      X===>\t\t\t\t\t\t\t    X===>");
SetColor(43);
printf("\t*-------*");
SetColor(44);
SetColor(44);
printf("\n      X===>");
SetColor(41);
printf("=========================================================");
SetColor(44);
printf("X===>");
SetColor(46);
printf("\t    %c",30);
SetColor(44);
printf("\n      X===>\t\t\t\t\t\t\t    X===>");
SetColor(44);
printf("\t    | ");
SetColor(44);
printf("\n      X===>");
SetColor(45);
printf("\t4.PLATINUM CUPON           ");
SetColor(44);
printf("        ");
SetColor(44);
printf("\t   \t    X===>");
printf("\t    | ");
printf("\n      X===>\t\t\t\t\t\t\t    X===>");
printf("\t    | ");
printf("\n      X===>\t\t\t\t\t\t\t    X===>");
printf("\t    | ");
SetColor(44);
printf("\n      X===>");
SetColor(41);
printf("=========================================================");
SetColor(44);
printf("X===>");
printf("\t    | ");
printf("\n      X===>\t\t\t\t\t\t\t    X===>");
printf("\t    | ");
printf("\n      X===>\t\t\t\t\t\t\t    X===>");
printf("\t    | ");
printf("\n      X===>");
SetColor(42);
printf("=========================================================");
SetColor(44);
printf("X===>");
printf("\t    | ");
SetColor(44);
printf("\n      X===>");
SetColor(42);
printf("=========================================================");
SetColor(44);
printf("X===>");
printf("\t    | ");
printf("\n      X===>");
SetColor(42);
printf("=========================================================");
SetColor(44);
printf("X===>");
printf("\t    | ");
printf("\n   <================================================================================");
SetColor(46);
printf("*");
SetColor(44);
printf("======>");
printf("\n");
SetColor(43);
printf("\n\t    press 2 times Esc key in your key board to go to Main Menu");


                                    if(getch()==13)
                                    gc();
                                    }
                                                                        if(pat==4)
                                    {
                                        int a;
     system("color f");
    system("cls");
   system("color a");
SetColor(44);
printf("\n");
printf("\n   <================================================================================");
SetColor(46);
printf("*");
SetColor(44);
printf("======>");
printf("\n      X===>=========================================================X===>\t    |");
SetColor(44);
printf("\n      X===>");
SetColor(42);
printf("=========================================================");
SetColor(44);
printf("X===>\t    |");
SetColor(44);
printf("\n");
printf("      X===>");
SetColor(42);
printf("=========================================================");
SetColor(44);
printf("X===>\t    |");
SetColor(42);
printf("\n");
SetColor(44);
printf("      X===>\t\t\t\t\t\t            X===>\t    |");
SetColor(44);
printf("\n      X===>");
SetColor(43);
printf("\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 CUPON COUNTER \xB2\xB2\xB2\xB2\xB2\xB2\xB2\t    ");
SetColor(44);
printf("\t\t    X===>\t    |");
SetColor(44);
printf("\n      X===>");
printf("\t\t\t\t\t\t\t    X===>\t    |");
SetColor(44);
printf("\n      X===>");
SetColor(42);
printf("=========================================================");
SetColor(44);
printf("X===>\t    |");
SetColor(44);
printf("\n      X===>");
SetColor(42);
printf("=========================================================");
SetColor(44);
printf("X===>\t    |");
printf("\n      X===>\t\t\t\t\t\t\t    X===>");
SetColor(46);
printf("\t    %c",31);
SetColor(44);
printf("\n      X===>\t\t\t\t\t\t\t    X===>");
SetColor(43);
printf("\t*-------*");
SetColor(44);
printf("\n      X===>");
SetColor(41);
printf("=========================================================");
SetColor(44);
printf("X===>");
SetColor(43);
printf("\t  |   |");
SetColor(44);
printf("\n      X===>\t\t\t\t\t\t\t    X===>");
SetColor(43);
printf("\t  | ");
SetColor(42);
printf("B");
SetColor(43);
printf(" |");
SetColor(44);
printf("\n      X===>");
SetColor(47);
printf("\t1.BRONZE CUPON                  ");
SetColor(44);
printf("             ");
SetColor(44);
printf("\t    X===>");
SetColor(43);
printf("\t  | ");
SetColor(42);
printf(" ");
SetColor(43);
printf(" |");
SetColor(44);
printf("\n      X===>\t\t\t\t\t\t\t    X===>");
SetColor(43);
printf("\t  | ");
SetColor(42);
printf("I");
SetColor(43);
printf(" |");
SetColor(44);
printf("\n      X===>");
SetColor(41);
printf("=========================================================");
SetColor(44);
printf("X===>");
SetColor(43);
printf("\t  | ");
SetColor(42);
printf(" ");
SetColor(43);
printf(" |");
SetColor(44);
printf("\n      X===>\t\t\t\t\t\t\t    X===>");
SetColor(43);
printf("\t  | ");
SetColor(42);
printf("S");
SetColor(43);
printf(" |");
SetColor(44);
printf("\n      X===>");
SetColor(55);
printf("\t2.SILVER CUPON                ");
SetColor(44);
printf("               ");
SetColor(44);
printf("\t    X===>");
SetColor(43);
printf("\t  | ");
SetColor(42);
printf(" ");
SetColor(43);
printf(" |");
SetColor(44);
printf("\n      X===>\t\t\t\t\t\t\t    X===>");
SetColor(43);
printf("\t  | ");
SetColor(42);
printf("W");
SetColor(43);
printf(" |");
SetColor(44);
printf("\n      X===>");
SetColor(41);
printf("=========================================================");
SetColor(44);
printf("X===>");
SetColor(43);
printf("\t  | ");
SetColor(42);
printf(" ");
SetColor(43);
printf(" |");
SetColor(44);
printf("\n      X===>\t\t\t\t\t\t\t    X===>");
SetColor(43);
printf("\t  | ");
SetColor(42);
printf("A");
SetColor(43);
printf(" |");
SetColor(44);
printf("\n      X===>");
SetColor(46);
printf("\t3.GOLD CUPON                   ");
SetColor(44);
printf("              ");
SetColor(44);
printf("\t    X===>");
SetColor(43);
printf("\t  | ");
SetColor(42);
printf(" ");
SetColor(43);
printf(" |");
SetColor(44);
printf("\n      X===>\t\t\t\t\t\t\t    X===>");
SetColor(43);
printf("\t*-------*");
SetColor(44);
SetColor(44);
printf("\n      X===>");
SetColor(41);
printf("=========================================================");
SetColor(44);
printf("X===>");
SetColor(46);
printf("\t    %c",30);
SetColor(44);
printf("\n      X===>\t\t\t\t\t\t\t    X===>");
SetColor(44);
printf("\t    | ");
SetColor(44);
printf("\n      X===>");
SetColor(44);
printf("\t4.PLATINUM CUPON              ");
SetColor(44);
printf("   <------ ");
SetColor(44);
printf("\t    X===>");
printf("\t    | ");
printf("\n      X===>\t\t\t\t\t\t\t    X===>");
printf("\t    | ");
printf("\n      X===>\t\t\t\t\t\t\t    X===>");
printf("\t    | ");
SetColor(44);
printf("\n      X===>");
SetColor(41);
printf("=========================================================");
SetColor(44);
printf("X===>");
printf("\t    | ");
printf("\n      X===>\t\t\t\t\t\t\t    X===>");
printf("\t    | ");
printf("\n      X===>\t\t\t\t\t\t\t    X===>");
printf("\t    | ");
printf("\n      X===>");
SetColor(42);
printf("=========================================================");
SetColor(44);
printf("X===>");
printf("\t    | ");
SetColor(44);
printf("\n      X===>");
SetColor(42);
printf("=========================================================");
SetColor(44);
printf("X===>");
printf("\t    | ");
printf("\n      X===>");
SetColor(42);
printf("=========================================================");
SetColor(44);
printf("X===>");
printf("\t    | ");
printf("\n   <================================================================================");
SetColor(46);
printf("*");
SetColor(44);
printf("======>");
printf("\n");
SetColor(43);
printf("\n\t    press 2 times Esc key in your key board to go to Main Menu");


                                    if(getch()==13)
                                    pc();
                                    }
                                    if(pat==0)
                                    {
                                        pat=4;
                                        system("color f");
      system("cls");
   system("color a");
SetColor(44);
printf("\n");
printf("\n   <================================================================================");
SetColor(46);
printf("*");
SetColor(44);
printf("======>");
printf("\n      X===>=========================================================X===>\t    |");
SetColor(44);
printf("\n      X===>");
SetColor(42);
printf("=========================================================");
SetColor(44);
printf("X===>\t    |");
SetColor(44);
printf("\n");
printf("      X===>");
SetColor(42);
printf("=========================================================");
SetColor(44);
printf("X===>\t    |");
SetColor(42);
printf("\n");
SetColor(44);
printf("      X===>\t\t\t\t\t\t            X===>\t    |");
SetColor(44);
printf("\n      X===>");
SetColor(43);
printf("\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 CUPON COUNTER \xB2\xB2\xB2\xB2\xB2\xB2\xB2\t    ");
SetColor(44);
printf("\t\t    X===>\t    |");
SetColor(44);
printf("\n      X===>");
printf("\t\t\t\t\t\t\t    X===>\t    |");
SetColor(44);
printf("\n      X===>");
SetColor(42);
printf("=========================================================");
SetColor(44);
printf("X===>\t    |");
SetColor(44);
printf("\n      X===>");
SetColor(42);
printf("=========================================================");
SetColor(44);
printf("X===>\t    |");
printf("\n      X===>\t\t\t\t\t\t\t    X===>");
SetColor(46);
printf("\t    %c",31);
SetColor(44);
printf("\n      X===>\t\t\t\t\t\t\t    X===>");
SetColor(43);
printf("\t*-------*");
SetColor(44);
printf("\n      X===>");
SetColor(41);
printf("=========================================================");
SetColor(44);
printf("X===>");
SetColor(43);
printf("\t  |   |");
SetColor(44);
printf("\n      X===>\t\t\t\t\t\t\t    X===>");
SetColor(43);
printf("\t  | ");
SetColor(42);
printf("B");
SetColor(43);
printf(" |");
SetColor(44);
printf("\n      X===>");
SetColor(44);
printf("\t1.BRONZE CUPON                  ");
SetColor(44);
printf("             ");
SetColor(44);
printf("\t    X===>");
SetColor(43);
printf("\t  | ");
SetColor(42);
printf(" ");
SetColor(43);
printf(" |");
SetColor(44);
printf("\n      X===>\t\t\t\t\t\t\t    X===>");
SetColor(43);
printf("\t  | ");
SetColor(42);
printf("I");
SetColor(43);
printf(" |");
SetColor(44);
printf("\n      X===>");
SetColor(41);
printf("=========================================================");
SetColor(44);
printf("X===>");
SetColor(43);
printf("\t  | ");
SetColor(42);
printf(" ");
SetColor(43);
printf(" |");
SetColor(44);
printf("\n      X===>\t\t\t\t\t\t\t    X===>");
SetColor(43);
printf("\t  | ");
SetColor(42);
printf("S");
SetColor(43);
printf(" |");
SetColor(44);
printf("\n      X===>");
SetColor(55);
printf("\t2.SILVER CUPON                ");
SetColor(44);
printf("               ");
SetColor(44);
printf("\t    X===>");
SetColor(43);
printf("\t  | ");
SetColor(42);
printf(" ");
SetColor(43);
printf(" |");
SetColor(44);
printf("\n      X===>\t\t\t\t\t\t\t    X===>");
SetColor(43);
printf("\t  | ");
SetColor(42);
printf("W");
SetColor(43);
printf(" |");
SetColor(44);
printf("\n      X===>");
SetColor(41);
printf("=========================================================");
SetColor(44);
printf("X===>");
SetColor(43);
printf("\t  | ");
SetColor(42);
printf(" ");
SetColor(43);
printf(" |");
SetColor(44);
printf("\n      X===>\t\t\t\t\t\t\t    X===>");
SetColor(43);
printf("\t  | ");
SetColor(42);
printf("A");
SetColor(43);
printf(" |");
SetColor(44);
printf("\n      X===>");
SetColor(46);
printf("\t3.GOLD CUPON                   ");
SetColor(44);
printf("              ");
SetColor(44);
printf("\t    X===>");
SetColor(43);
printf("\t  | ");
SetColor(42);
printf(" ");
SetColor(43);
printf(" |");
SetColor(44);
printf("\n      X===>\t\t\t\t\t\t\t    X===>");
SetColor(43);
printf("\t*-------*");
SetColor(44);
SetColor(44);
printf("\n      X===>");
SetColor(41);
printf("=========================================================");
SetColor(44);
printf("X===>");
SetColor(46);
printf("\t    %c",30);
SetColor(44);
printf("\n      X===>\t\t\t\t\t\t\t    X===>");
SetColor(44);
printf("\t    | ");
SetColor(44);
printf("\n      X===>");
SetColor(45);
printf("\t4.PLATINUM CUPON              ");
SetColor(44);
printf("   <------ ");
SetColor(44);
printf("\t    X===>");
printf("\t    | ");
printf("\n      X===>\t\t\t\t\t\t\t    X===>");
printf("\t    | ");
printf("\n      X===>\t\t\t\t\t\t\t    X===>");
printf("\t    | ");
SetColor(44);
printf("\n      X===>");
SetColor(41);
printf("=========================================================");
SetColor(44);
printf("X===>");
printf("\t    | ");
printf("\n      X===>\t\t\t\t\t\t\t    X===>");
printf("\t    | ");
printf("\n      X===>\t\t\t\t\t\t\t    X===>");
printf("\t    | ");
printf("\n      X===>");
SetColor(42);
printf("=========================================================");
SetColor(44);
printf("X===>");
printf("\t    | ");
SetColor(44);
printf("\n      X===>");
SetColor(42);
printf("=========================================================");
SetColor(44);
printf("X===>");
printf("\t    | ");
printf("\n      X===>");
SetColor(42);
printf("=========================================================");
SetColor(44);
printf("X===>");
printf("\t    | ");
printf("\n   <================================================================================");
SetColor(46);
printf("*");
SetColor(44);
printf("======>");
printf("\n");
SetColor(43);
printf("\n\t    press 2 times Esc key in your key board to go to Main Menu");


                                    if(getch()==13)
                                    pc();
                                    }
             break;
case ESC_KEY:  menu();
                            break;
}
   }
}
void niramish()
{


FILE *hagia;
hagia=fopen("khao.dat","a+");
char velo[1123],choru[1125];
int tarak;
int pack;
int taka;
retu:
    printf("\n\nenter your serial number ::  ");
scanf("%d",&maku.gchoru);
while(fscanf(hagia,"%d %d %d %s \n",&kaku.gchoru,&kaku.nulle,&kaku.vegbill,kaku.vegor)!=EOF)
{
    if(maku.gchoru==kaku.gchoru)
    {
        system("cls");
        printf("already exists");
        goto retu;
    }

}
kaku.gchoru=maku.gchoru;
printf("\n\nHow many items you want to take ::  ");
scanf("%d",&tarak);
kaku.nulle=tarak;
strcpy(choru,velo);
kaku.vegbill=0;
for(int i=0;i<tarak;i++)
{
    printf("\n\nplease enter the item's number ::   ");
    scanf("%d",&pack);
  if(pack==1)
    {
        strcat(choru,"Dal_rice,");
        taka=160;

    }
        if(pack==2)
    {
        strcat(choru,"Paneer_botter_masala,");
         taka=180;
    }
        if(pack==3)
    {
        strcat(choru,"Cheese_Paneer,");
         taka=150;
    }
        if(pack==4)
    {
         strcat(choru,"Chilli_Paneer,");
          taka=160;
    }
        if(pack==5)
    {
        strcat(choru,"French_Fries,");
         taka=125;
    }
            if(pack==6)
    {
             taka=150;
        strcat(choru,"Chilli_Baby_Corn,");
    }
        if(pack==7)
    {
       strcat(choru,"Cheese_Baby_Corn,");
        taka=120;
    }

        if(pack==8)
    {
         strcat(choru,"Mushrooms_Fry,");
          taka=125;
    }
        if(pack==9)
    {
         strcat(choru,"Chilli_Mushrooms,");
          taka=165;
    }
        if(pack==10)
    {
        strcat(choru,"Mushrooms_Grevy,");
         taka=185;
    }
        if(pack==11)
    {
        strcat(choru,"Mushroom's_Soup,");
        taka=165;
    }
        if(pack==12)
    {
        strcat(choru,"Kasmiri_Paneer,");
        taka=175;
    }
        if(pack==13)
    {
        strcat(choru,"Dum_Alu,");
        taka=165;
    }
        if(pack==14)
    {
            strcat(choru,"Veg.Biriyani,");
            taka=265;
    }
        if(pack==15)
    {
      strcat(choru,"Veg.Fried_rice,");
      taka=225;
    }

    kaku.vegbill=kaku.vegbill+taka;
}
strcpy(kaku.vegor,choru);
fprintf(hagia,"%d %d %d %s \n",kaku.gchoru,kaku.nulle,kaku.vegbill,kaku.vegor);
fclose(hagia);
}
void veg()
{

    system("cls");
    system("color  5f");
    printf("\n<------------------------------------------------------------>");
        printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
    printf("\n\t|");
     printf("\tITEMS\t\t\t     rs:-");
     printf(" |");
      printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
     printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
     printf("\n\t|");
     printf("1.Dal Rice                 --->    160");
     printf("\t  |");
      printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
      printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
          printf("\n\t|");
     printf("2.Paneer Butter Masala     --->    180");
     printf("\t  |");
      printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
      printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
       printf("\n\t|");
     printf("3.Cheese Paneer            --->    150");
     printf("   |");
      printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
      printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
          printf("\n\t|");
     printf("4.Chilli Paneer            --->    160");
     printf("   |");
        printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
      printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
          printf("\n\t|");
     printf("5.French Fries             --->    125");
     printf("   |");
        printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
      printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
          printf("\n\t|");
     printf("6.Chilli Baby Corn         --->    150");
     printf("   |");
   printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
      printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
          printf("\n\t|");
     printf("7.Cheese Baby Corn         --->    120");
     printf("   |");
   printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
      printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
          printf("\n\t|");
     printf("8.Mushrooms Fry            --->    125");
     printf("   |");
   printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
      printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
          printf("\n\t|");
     printf("9.Chilli  Mushrooms        --->    165");
     printf("   |");
printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
      printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
          printf("\n\t|");
     printf("10.Mushrooms Grevy         --->    185");
     printf("   |");
     printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
      printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
          printf("\n\t|");
     printf("11.Mushroom's Soup         --->    165");
     printf("   |");
     printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
      printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
    printf("\n\t|");
     printf("12.Kasmiri Paneer          --->    175");
     printf("   |");
     printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
      printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
          printf("\n\t|");
     printf("13.Dum Alu                 --->    165");
     printf("   |");
     printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
      printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
          printf("\n\t|");
     printf("14.Veg.Biriyani            --->    265");
     printf("   |");
     printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
      printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
          printf("\n\t|");
     printf("15.Veg.Fried Rice          --->    225");
     printf("   |");
     printf("\n<------------------------------------------------------------>");
       char e[2121];
     printf("\n\nWould you like to order something?? ('yes' or 'no') ------->   ");
     scanf("%s",e);
     int t,mom;
     mom=strcmp(e,"no");
     t=strcmp(e,"yes");
if(t==0)
{
niramish();
}
 if(mom==0)
{
    system("cls");
    system("color 01");
    SetColor(46);
    printf("\n\n\n\n\nOK.....have a nice day sir..\n\n\n\n\n\n\n\n");
}


     veg_invalid:
    SetColor(46);
   printf("\n\n\n\n\n\n\n\t\t\t***** Enter 1 to go  menu card and 2 to exit the program *****");
    SetColor(44);
   printf("\n\t\t---------------------------------------------------------------------------\n\n");
     SetColor(42);
   printf("\t\t\tenter your choice :: ");
     SetColor(43);
   scanf("%d",&n1);
  if(n1==1)
   {
      counter1();
   }
     else if(n1==2)
   {
                    SetColor(43);
                    system("cls");
                    printf("\n\n\n\n\n\t\tTHIS SITE IS DEVLOPED BY ME (........BISWA......)\n\n\n\n\n");
                    exit(0);
   }
                else
                    {
                        printf("\nInvalid!\a\a\a");
                    goto veg_invalid;
                    }
}
void amish()
{

FILE *mutiya;
mutiya=fopen("khetesurukorun.dat","a+");
char velo[1123],oru[1125];
int tarak;
int jack;
int ammount;
retu:
    printf("\n\nenter your serial number ::  ");
scanf("%d",&cku.goru);
while(fscanf(mutiya,"%d %d %d %s \n",&aku.goru,&aku.kallu,&aku.nonbill,aku.nonorder)!=EOF)
{
    if(cku.goru==aku.goru)
    {
        system("cls");
        printf("already exists");
        goto retu;
    }

}
aku.goru=cku.goru;
printf("\n\nHow many items you want to take ::  ");
scanf("%d",&tarak);
aku.kallu=tarak;
strcpy(oru,velo);
aku.nonbill=0;
for(int i=0;i<tarak;i++)
{
    printf("\n\nplease enter the item's number ::   ");
    scanf("%d",&jack);
  if(jack==1)
    {
        strcat(oru,"Fish_finger(6-pis),");
        ammount=270;

    }
        if(jack==2)
    {
        strcat(oru,"Chicken_finger(6-pis),");
         ammount=350;
    }
        if(jack==3)
    {
        strcat(oru,"Fish_cutlet(2-pics),");
         ammount=300;
    }
        if(jack==4)
    {
         strcat(oru,"Chicken_cutlet(1-pis),");
          ammount=170;
    }
        if(jack==5)
    {
        strcat(oru," Fish_kobiraji,");
         ammount=185;
    }
            if(jack==6)
    {
             ammount=195;
        strcat(oru,"Chicken_kobiraji,");
    }
        if(jack==7)
    {
       strcat(oru,"Batter_fish(3-pis),");
        ammount=295;
    }

        if(jack==8)
    {
         strcat(oru,"Chicken_&_Cheese_Salad,");
          ammount=470;
    }
        if(jack==9)
    {
         strcat(oru,"Grilled_&_Chicken_Breasts,");
          ammount=370;
    }
        if(jack==10)
    {
        strcat(oru,"Papper_Chicken_Dry,");
         ammount=640;
    }
        if(jack==11)
    {
        strcat(oru,"Baked_Mushrooms,");
        ammount=610;
    }
        if(jack==12)
    {
        strcat(oru,"Velvet_Chicken_Breasts,");
        ammount=870;
    }
        if(jack==13)
    {
        strcat(oru,"Chicken_continental,");
        ammount=970;
    }
        if(jack==14)
    {
            strcat(oru,"Chicken_Butterfry(2-pis),");
            ammount=400;
    }
        if(jack==15)
    {
      strcat(oru,"Mutton_curry(3-pis),");
      ammount=600;
    }
            if(jack==16)
    {
      strcat(oru,"Junglee_Mass(2-pis),");
      ammount=850;
    }
            if(jack==17)
    {
      strcat(oru,"Butterfield_lamb(4-pis),");
      ammount=1000;
    }
            if(jack==18)
    {
      char chr[2156]="i";
      char chr1[2156]="ii";
      char chr2[2156]="iii";
      char chr3[2156]="iv";
      char chr4[2156]="v";
      char tii[323];
      printf("\n\nenter type of biriyani (roman no[small]) ::  ");
      scanf("%s",tii);
      printf("\n\n");
      int yy=strcmp(tii,chr);
      int xy=strcmp(tii,chr1);
      int zy=strcmp(tii,chr2);
      int zz=strcmp(tii,chr3);
      int uu=strcmp(tii,chr4);
      if(yy==0)
      {
               strcat(oru,"Chicken(Biriyani),");
          ammount=1200;
      }

            if(xy==0)
      {
               strcat(oru,"Mutton(Biriyanni),");
          ammount=1500;
      }

            if(zy==0)
      {
               strcat(oru,"lamb(Biriyani),");
          ammount=3500;
      }

            if(zz==0)
      {
               strcat(oru,"Pork(Biriyani),");
          ammount=3500;
      }
            if(uu==0)
      {
               strcat(oru,"Ostrich(Biriyani),");
          ammount=5500;
      }



    }
            if(jack==19)
    {
      char chrr[2156]="i";
      char chrr1[2156]="ii";
      char chrr2[2156]="iii";
      char chrr3[2156]="iv";
      char chrr4[2156]="v";
      char tiir[323];
      printf("\n\nenter type of fried rice (roman no[small]) ::  ");
      scanf("%s",tiir);
      printf("\n\n");
      int yy=strcmp(tiir,chrr);
      int xy=strcmp(tiir,chrr1);
      int zy=strcmp(tiir,chrr2);
      int zz=strcmp(tiir,chrr3);
      int uu=strcmp(tiir,chrr4);
      if(yy==0)
      {
               strcat(oru,"Mixed(Fried_rice),");
          ammount=3500;
      }

            if(xy==0)
      {
               strcat(oru,"Chicken(Fried_rice),");
          ammount=2500;
      }

            if(zy==0)
      {
               strcat(oru,"Mutton(Fried_rice),");
          ammount=3750;
      }

            if(zz==0)
      {
               strcat(oru,"Lamb(Fried_rice),");
          ammount=2500;
      }
            if(uu==0)
      {
               strcat(oru,"Pork(Fried_rice),");
          ammount=2500;
      }


    }
            if(jack==20)
    {
      strcat(oru,"Mogolian_Lamb,");
      ammount=500;
    }
            if(jack==21)
    {
      strcat(oru,"Chicken_curry(5-pis),");
      ammount=850;
    }
            if(jack==22)
    {
      strcat(oru,"Sticky Pork,");
      ammount=590;
    }
    if(jack==23)
    {
      strcat(oru,"Garlic_lamb,");
      ammount=550;
    }
            if(jack==24)
    {
      strcat(oru,"Garlic_pork,");
      ammount=900;
    }
            if(jack==25)
    {
      strcat(oru,"Garlic_Chicken,");
      ammount=580;
    }
     if(jack==26)
    {
      strcat(oru,"Pork_Stew,");
      ammount=550;
    }
            if(jack==27)
    {
      strcat(oru,"Lamb_Shank_Casserole,");
      ammount=700;
    }
            if(jack==28)
    {
      strcat(oru,"Ranch_Pork_Chops");
      ammount=820;
    }
            if(jack==29)
    {
      strcat(oru,"Garlic_lamon_lamb,");
      ammount=740;
    }
            if(jack==30)
    {
      strcat(oru,"Sweet_&_Sour_Pork,");
      ammount=990;
    }
            if(jack==31)
    {
      strcat(oru,"Italian_Chicken,");
      ammount=5100;
    }
            if(jack==32)
    {
      strcat(oru,"Turkey_lamb,");
      ammount=4800;
    }
            if(jack==33)
    {
      strcat(oru,"Mutton_kasha(2-pis),");
      ammount=600;
    }
            if(jack==34)
    {
      strcat(oru,"Chicken_Kasha(8-pis),");
      ammount=1500;
    }
            if(jack==35)
    {
      strcat(oru,"Mixed_Soup,");
      ammount=1700;
    }
    aku.nonbill=aku.nonbill+ammount;
}
strcpy(aku.nonorder,oru);
fprintf(mutiya,"%d %d %d %s \n",aku.goru,aku.kallu,aku.nonbill,aku.nonorder);
fclose(mutiya);


}
void nonveg()
{
    system("cls");
      system("cls");
      system("color f0");
     printf("\n<------------------------------------------------------------>");
        printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
    printf("\n\t|");
     printf("\tITEMS\t\t\t    rs:-");
     printf("  |");
      printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
     printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
     printf("\n\t|");
     printf("1.Fish Finger(6-pis)      --->    270");
     printf("    |");
      printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
      printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
          printf("\n\t|");
     printf("2.Chicken Finger(6-pis)   --->    350");
     printf("    |");
      printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
      printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
       printf("\n\t|");
     printf("3.Fish Cutlet(2-pis)      --->    300");
     printf("\t  |");
      printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
      printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
          printf("\n\t|");
     printf("4.Chicken Cutlet (1-pis)  --->    170");
     printf("    |");
        printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
      printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
          printf("\n\t|");
     printf("5.Fish Kobiraji           --->    185");
     printf("    |");
        printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
      printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
          printf("\n\t|");
     printf("6.Chicken kobiraji        --->    195");
     printf("    |");
   printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
      printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
          printf("\n\t|");
     printf("7.Batter Fish (3-pis)     --->    295");
     printf("    |");
   printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
      printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
          printf("\n\t|");
     printf("8.Chicken & Cheese Salad  --->    470");
     printf("    |");
   printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
      printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
          printf("\n\t|");
     printf("9.Grilled Chicken Breasts --->    370");
     printf("    |");
        printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
      printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
          printf("\n\t|");
     printf("10.Pepper Chicken Dry     --->    640");
     printf("    |");
        printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
      printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
          printf("\n\t|");
     printf("11.Baked Mushrooms        --->    610");
     printf("    |");
        printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
      printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
          printf("\n\t|");
     printf("12.Velvet Chicken Breasts --->    870");
     printf("    |");
      printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
      printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
          printf("\n\t|");
     printf("13.Chicken Continental    --->    970");
     printf("    |");
        printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
      printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
          printf("\n\t|");
     printf("14.Chicken ButterFry(2pis)--->    400");
     printf("    |");
        printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
      printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
          printf("\n\t|");
     printf("15.Mutton Curry ( 3 pis ) --->    600");
     printf("    |");
        printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
      printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
          printf("\n\t|");
     printf("16.Junglee mass (2 pis)   --->    850");
     printf("    |");
        printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
      printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
          printf("\n\t|");
     printf("17.Butterfield lamb(4-pis)--->   1000");
     printf("    |");
        printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
      printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
          printf("\n\t|");
     printf("18.<--------------BIRIYANI-------------->");
     printf("|");
        printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
      printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
          printf("\n\t|");
     printf("i).Chicken               --->    1200");
     printf("    |");
           printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
      printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
          printf("\n\t|");
     printf("ii).Mutton               --->    1500");
     printf("    |");
     printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
      printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
          printf("\n\t|");
     printf("iii).Lamb                --->    3500");
     printf("    |");
     printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
      printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
          printf("\n\t|");
     printf("iv).Pork                 --->    3500");
     printf("    |");
     printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
      printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
          printf("\n\t|");
     printf("v).Ostrich               --->    5500");
     printf("    |");
     printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
      printf("\n\t|");
     printf("<--------------------------------------->");
  printf("|");
   printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
      printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
       printf("\n\t|");
     printf("19.<-------------FRIED RICE------------->");
     printf("|");
        printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
      printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
          printf("\n\t|");
     printf("i).Mixed                 --->     3500");
     printf("   |");
           printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
      printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
          printf("\n\t|");
     printf("ii).Chicken              --->     2500");
     printf("   |");
     printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
      printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
          printf("\n\t|");
     printf("iii).Mutton              --->     3750");
     printf("   |");
     printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
      printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
          printf("\n\t|");
     printf("iv).Lamb                 --->     2500");
     printf("   |");
     printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
      printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
          printf("\n\t|");
     printf("v).Pork                  --->     2500");
     printf("   |");
     printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
      printf("\n\t|");
     printf("<--------------------------------------->");
  printf("|");
     printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
      printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
          printf("\n\t|");
     printf("20.Mogolian lamb           --->   500");
     printf("    |");
          printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
      printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
          printf("\n\t|");
     printf("21.Chicekn Curry(5-pis)    --->   850");
     printf("    |");
     printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
      printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
          printf("\n\t|");
     printf("22.Sticky Pork             --->   590");
     printf("    |");
     printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
      printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
          printf("\n\t|");
     printf("23.Garlic lamb             --->   550");
     printf("    |");
        printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
      printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
          printf("\n\t|");
     printf("24.Garlic Pork             --->   900");
     printf("    |");
      printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
      printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
          printf("\n\t|");
     printf("25.Garlic Chicken          --->   580");
     printf("    |");
          printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
      printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
          printf("\n\t|");
     printf("26.Pork Stew               --->   550");
     printf("    |");
          printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
      printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
          printf("\n\t|");
     printf("27.Lamb shank casserole    --->   700");
     printf("    |");
          printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
      printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
          printf("\n\t|");
     printf("28.Ranch Pork Chops        --->   820");
     printf("    |");
          printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
      printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
          printf("\n\t|");
     printf("29.Garlic lamon lamb       --->   740");
     printf("    |");
          printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
      printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
          printf("\n\t|");
     printf("30.Sweet & Sour pork       --->   990");
     printf("    |");
          printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
      printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
          printf("\n\t|");
     printf("31.Italian chicken         --->   5100");
     printf("   |");
          printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
      printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
          printf("\n\t|");
     printf("32.Turkey lamb             --->   4800");
     printf("   |");
          printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
      printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
          printf("\n\t|");
     printf("33.Mutton Kasha(2-pis)     --->   600");
     printf("    |");
          printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
      printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
          printf("\n\t|");
     printf("34.Chicken Kasha (8-pis)   --->   1500");
     printf("   |");
          printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
      printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
          printf("\n\t|");
     printf("35.Mixed Soup              --->   1700");
     printf("   |");
     printf("\n<------------------------------------------------------------>");
           char e[2121];
     printf("\n\nWould you like to order something?? ('yes' or 'no') ------->   ");
     scanf("%s",e);
     int t,mom;
     mom=strcmp(e,"no");
     t=strcmp(e,"yes");
if(t==0)
{
amish();
}
 if(mom==0)
{
    system("cls");
    system("color 01");
    SetColor(46);
    printf("\n\n\n\n\nOK.....have a nice day sir..\n\n\n\n\n\n\n\n");
}

      c1_invalid:
    SetColor(41);
   printf("\n\n\n\n\n\n\n\t\t\t***** Enter 1 to go  menu card and 2 to exit the program *****");
    SetColor(44);
   printf("\n\t\t---------------------------------------------------------------------------\n\n");
     SetColor(42);
   printf("\t\t\tenter your choice :: ");
     SetColor(43);
   scanf("%d",&n1);
  if(n1==1)
   {
     counter1();
   }
     else if(n1==2)
   {
                    SetColor(43);
                    system("cls");
                    printf("\n\n\n\n\n\t\tTHIS SITE IS DEVLOPED BY ME (........BISWA......)\n\n\n\n\n");
                    exit(0);
   }
                else
                    {
                        printf("\nInvalid!\a\a\a");
                    goto c1_invalid;
                    }
}
void modh()
{
    FILE *chutiyamma;
chutiyamma=fopen("ganja.dat","a+");
char velo[1123];
int tinku;
int hack;
int ammmy;
rettt:
    printf("\n\nenter your serial number ::  ");
scanf("%d",&icu.leri);
while(fscanf(chutiyamma,"%d %d %d %s \n",&hku.leri,&hku.viky,&hku.billi,hku.ordert)!=EOF)
{
    if(icu.leri==hku.leri)
    {
        system("cls");
        printf("already exists");
        goto rettt;
    }

}
char orru[112];
hku.leri=icu.leri;

printf("\n\nHow many items you want to take ::  ");
scanf("%d",&tinku);
hku.viky=tinku;
strcpy(orru,velo);
hku.billi=0;
for(int i=0;i<tinku;i++)
{
    printf("\n\nplease enter the drink's number ::   ");
    scanf("%d",&hack);
    if(hack==1)
    {
        strcat(orru,"King_fisher(1-bottle),");
        ammmy=350;

    }
        if(hack==2)
    {
        strcat(orru,"Tuborg(light),");
         ammmy=150;
    }
        if(hack==3)
    {
        strcat(orru,"Tuborg(strong),");
         ammmy=165;
    }
        if(hack==4)
    {
         strcat(orru,"Carlsberg(light),");
          ammmy=170;
    }
        if(hack==5)
    {
        strcat(orru,"Carlsberg(strong),");
         ammmy=185;
    }
            if(hack==6)
    {
             ammmy=180;
        strcat(orru,"King_fisher(light),");
    }
        if(hack==7)
    {
       strcat(orru,"King_fisher(strong),");
        ammmy=195;
    }

        if(hack==8)
    {
         strcat(orru,"Majic_moments(750-ml)");
          ammmy=670;
    }
        if(hack==9)
    {
         strcat(orru,"Romanov(750-ml),");
          ammmy=370;
    }
        if(hack==10)
    {
        strcat(orru,"Feul(750-ml),");
         ammmy=630;
    }
        if(hack==11)
    {
        strcat(orru,"Vladivar(750-ml),");
        ammmy=700;
    }
        if(hack==12)
    {
        strcat(orru,"White_Mischief(750-ml),");
        ammmy=470;
    }
        if(hack==13)
    {
        strcat(orru,"Wodka_Gorbatschow(750-ml),");
        ammmy=970;
    }
        if(hack==14)
    {
            strcat(orru,"Corona(750-ml),");
            ammmy=600;
    }
        if(hack==15)
    {
      strcat(orru,"Heineken(750-ml),");
      ammmy=500;
    }
            if(hack==16)
    {
      strcat(orru,"Vodka(750-ml),");
      ammmy=850;
    }
            if(hack==17)
    {
      strcat(orru,"Red_wine(750-ml),");
      ammmy=1700;
    }
         if(hack==18)
    {
      char chrri[2156]="i";
      char chrri1[2156]="ii";
      char chrri2[2156]="iii";
      char chrri3[2156]="iv";
      char chrri4[2156]="v";
      char tii[323];
      printf("\n\nenter type of CHAMPAGNE (roman no[small]) ::  ");
      scanf("%s",tii);
      printf("\n\n");
      int yy=strcmp(tii,chrri);
      int xy=strcmp(tii,chrri1);
      int zy=strcmp(tii,chrri2);
      int zz=strcmp(tii,chrri3);
      int uu=strcmp(tii,chrri4);
      if(yy==0)
      {
               strcat(orru,"Cristal,");
          ammmy=12000;
      }

            if(xy==0)
      {
               strcat(orru,"Perrier_Jouet");
          ammmy=3500;
      }

            if(zy==0)
      {
               strcat(orru,"Krug,");
          ammmy=13500;
      }

            if(zz==0)
      {
               strcat(orru,"Moet_&_Chandon,");
          ammmy=5850;
      }
            if(uu==0)
      {
               strcat(orru,"Taittinger,");
          ammmy=5500;
      }



    }
            if(hack==19)
    {
      char chrrir[2156]="i";
      char chrrir1[2156]="ii";
      char chrrir2[2156]="iii";
      char chrrir3[2156]="iv";
      char chrrir4[2156]="v";
      char tiir[323];
      printf("\n\nenter type of SCOTH (roman no[small]) ::  ");
      scanf("%s",tiir);
      printf("\n\n");
      int yy=strcmp(tiir,chrrir);
      int xy=strcmp(tiir,chrrir1);
      int zy=strcmp(tiir,chrrir2);
      int zz=strcmp(tiir,chrrir3);
      int uu=strcmp(tiir,chrrir4);
      if(yy==0)
      {
               strcat(orru,"Laphroaig,");
          ammmy=15000;
      }

            if(xy==0)
      {
               strcat(orru,"Benriach,");
          ammmy=6500;
      }

            if(zy==0)
      {
               strcat(orru,"Glendronach,");
          ammmy=17500;
      }

            if(zz==0)
      {
               strcat(orru,"Highlabd_park_magnus ,");
          ammmy=9850;
      }
            if(uu==0)
      {
               strcat(orru,"Jhonnie_Walker,");
          ammmy=8500;
      }
    }

            if(hack==20)
    {
      strcat(orru,"RUM(750-ml),");
      ammmy=500;
    }
            if(hack==21)
    {
      strcat(orru,"WISHKY(750-ml),");
      ammmy=650;
    }



hku.billi=hku.billi+ammmy;
}

strcpy(hku.ordert,orru);
printf("\n\n\ntotal bill for hard drinks ::  %d",hku.billi);
fprintf(chutiyamma,"%d %d %d %s \n",hku.leri,hku.viky,hku.billi,orru);
fclose(chutiyamma);
}
void drinks()
{
      system("cls");
      system("color f0");
     printf("\n<------------------------------------------------------------>");
        printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
    printf("\n\t|");
     printf("\tBRAND\t\t\t   rs:-");
     printf("   |");
      printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
     printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
     printf("\n\t|");
     printf("1.King_fisher(1-bottle)    --->   350");
     printf("\t  |");
      printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
      printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
          printf("\n\t|");
     printf("2.Tuborg  (light)          --->   150");
     printf("\t  |");
      printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
      printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
       printf("\n\t|");
     printf("3.Tuborg  (strong)         --->   165");
     printf("\t  |");
      printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
      printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
          printf("\n\t|");
     printf("4.Carlsberg (light)        --->   170");
     printf("    |");
        printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
      printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
          printf("\n\t|");
     printf("5.Carlsberg  (strong)      --->   185");
     printf("    |");
        printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
      printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
          printf("\n\t|");
     printf("6.King_fisher (light)      --->   180");
     printf("    |");
   printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
      printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
          printf("\n\t|");
     printf("7.King_fisher (strong)     --->   195");
     printf("    |");
   printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
      printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
          printf("\n\t|");
     printf("8.Majic_moments(750 ml)    --->   670");
     printf("    |");
   printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
      printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
          printf("\n\t|");
     printf("9.Romanov (750 ml)         --->   370");
     printf("    |");
        printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
      printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
          printf("\n\t|");
     printf("10.Fuel (750 ml)           --->   630");
     printf("    |");
        printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
      printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
          printf("\n\t|");
     printf("11.Vladivar (750 ml)       --->   700");
     printf("    |");
        printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
      printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
          printf("\n\t|");
     printf("12.White_Mischief(750 ml)  --->   470");
     printf("    |");
      printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
      printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
          printf("\n\t|");
     printf("13.Wodka_Gorbatschow(750ml)--->   970");
     printf("    |");
        printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
      printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
          printf("\n\t|");
     printf("14.Corona (750 ml)         --->   600");
     printf("    |");
        printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
      printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
          printf("\n\t|");
     printf("15.Heineken (750 ml)       --->   500");
     printf("    |");
        printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
      printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
          printf("\n\t|");
     printf("16.Vodka (750 ml)          --->   850");
     printf("    |");
        printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
      printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
          printf("\n\t|");
     printf("17.Red_Wine (750 ml)       --->   1700");
     printf("   |");
        printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
      printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
          printf("\n\t|");
     printf("18.<-------------CHAMPAGNE------------->");
     printf(" |");
        printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
      printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
          printf("\n\t|");
     printf("i).Cristal               --->   12000");
     printf("    |");
           printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
      printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
          printf("\n\t|");
     printf("ii).Perrier Jouet        --->    3500");
     printf("    |");
     printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
      printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
          printf("\n\t|");
     printf("iii).Krug                --->   13500");
     printf("    |");
     printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
      printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
          printf("\n\t|");
     printf("iv).Moet & Chandon       --->    5850");
     printf("    |");
     printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
      printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
          printf("\n\t|");
     printf("v).Taittinger            --->    5500");
     printf("    |");
     printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
      printf("\n\t|");
     printf("<--------------------------------------->");
  printf("|");
   printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
      printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
       printf("\n\t|");
     printf("19.<---------------SCOTCH--------------->");
     printf("|");
        printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
      printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
          printf("\n\t|");
     printf("i).Laphroaig              --->   15000");
     printf("   |");
           printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
      printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
          printf("\n\t|");
     printf("ii).BenRiach              --->    6500");
     printf("   |");
     printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
      printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
          printf("\n\t|");
     printf("iii).GlenDronach          --->   17500");
     printf("   |");
     printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
      printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
          printf("\n\t|");
     printf("iv).Highlabd Park Magnus  --->   9850");
     printf("    |");
     printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
      printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
          printf("\n\t|");
     printf("v).Johnnie Walker         --->    8500");
     printf("   |");
     printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
      printf("\n\t|");
     printf("<--------------------------------------->");
  printf("|");
     printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
      printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
          printf("\n\t|");
     printf("20.Rum (750 ml)             --->   500");
     printf("   |");
          printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
      printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
          printf("\n\t|");
     printf("21.Wishky (750 ml)          --->   650");
     printf("   |");
     printf("\n<------------------------------------------------------------>");
     char e[2121];
     printf("\n\nAre you 21+?? ('yes' or 'no') ------->   ");
     scanf("%s",e);
     int t,mom;
     mom=strcmp(e,"no");
     t=strcmp(e,"yes");
if(t==0)
{
modh();
}
 if(mom==0)
{
    system("cls");
    system("color 01");
    SetColor(46);
    printf("\n\n\n\n\nSorrry sir, you are not elegible for buy any hard drinks.....\n\n\n\n\n\n\n\n");
}
 c1_invalid:
    SetColor(42);
   printf("\n\n\n\n\n\n\n\t\t\t***** Enter 1 to go  menu card and 2 to exit the program *****");
    SetColor(44);
   printf("\n\t\t---------------------------------------------------------------------------\n\n");
     SetColor(42);
   printf("\t\t\tenter your choice :: ");
     SetColor(43);
   scanf("%d",&n1);
  if(n1==1)
   {
     counter1();
   }
     else if(n1==2)
   {
                    SetColor(43);
                    system("cls");
                    printf("\n\n\n\n\n\t\tTHIS SITE IS DEVLOPED BY ME (........BISWA......)\n\n\n\n\n");
                    exit(0);
   }
                else
                    {
                        printf("\nInvalid!\a\a\a");
                    goto c1_invalid;
                    }


}
void colddrinks()
{

FILE *utiya;
utiya=fopen("khabenki.dat","a+");
char velo[1123];
int tarak;
int mack;
int amt;
ret:
    printf("\n\nenter your serial number ::  ");
scanf("%d",&cc.loru);
while(fscanf(utiya,"%d %d %d %s \n",&aa.loru,&aa.mallu,&aa.softdbill,aa.softdorder)!=EOF)
{
    if(cc.loru==aa.loru)
    {
        system("cls");
        printf("already exists");
        goto ret;
    }

}
aa.loru=cc.loru;
printf("\n\nHow many drinks you want to take ::  ");
scanf("%d",&tarak);
aa.mallu=tarak;
strcpy(aa.softdorder,velo);
aa.softdbill=0;
for(int i=0;i<tarak;i++)
{
    printf("\n\nplease enter the drinks's number ::   ");
    scanf("%d",&mack);
    if(mack==1)
    {
        strcat(aa.softdorder,"Coka_Cola,");
        amt=60;

    }
        if(mack==2)
    {
        strcat(aa.softdorder,"Mirinda,");
         amt=60;
    }
        if(mack==3)
    {
        strcat(aa.softdorder,"7-Up,");
         amt=60;
    }
        if(mack==4)
    {
         strcat(aa.softdorder,"Limca,");
          amt=60;
    }
        if(mack==5)
    {
        strcat(aa.softdorder,"Sprite,");
         amt=65;
    }
            if(mack==6)
    {
             amt=50;
        strcat(aa.softdorder,"Dew(750-ml),");
    }
        if(mack==7)
    {
       strcat(aa.softdorder,"Red_bull(1-can),");
        amt=120;
    }

        if(mack==8)
    {
         strcat(aa.softdorder,"Monster_energy(1-can),");
          amt=125;
    }
        if(mack==9)
    {
         strcat(aa.softdorder,"COKE(DIET),");
          amt=65;
    }

    aa.softdbill=aa.softdbill+amt;
}
fprintf(utiya,"%d %d %d %s \n",aa.loru,aa.mallu,aa.softdbill,aa.softdorder);
fclose(utiya);

printf("\n\n\ntotal bill for soft drinks ::  %d",aa.softdbill);
}
void sd()
{
    system("cls");
    system("color  5f");
    printf("\n<------------------------------------------------------------>");
        printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
    printf("\n\t|");
     printf("\tBRAND\t\t\t    rs:-");
     printf("  |");
      printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
     printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
     printf("\n\t|");
     printf("1.Coka_Cola(1-lit)          --->   60");
     printf("\t  |");
      printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
      printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
          printf("\n\t|");
     printf("2.Mirinda (1-lit)           --->   60");
     printf("\t  |");
      printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
      printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
       printf("\n\t|");
     printf("3.7-up (1-lit)              --->   60");
     printf("    |");
      printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
      printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
          printf("\n\t|");
     printf("4.Limca (1-lit)             --->   60");
     printf("    |");
        printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
      printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
          printf("\n\t|");
     printf("5.Sprite  (1-lit)           --->   65");
     printf("    |");
        printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
      printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
          printf("\n\t|");
     printf("6.Mountain_Dew(750-ml)      --->   50");
     printf("    |");
   printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
      printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
          printf("\n\t|");
     printf("7.Red_Bull (1-can)          --->   120");
     printf("   |");
   printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
      printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
          printf("\n\t|");
     printf("8.Monster_energy(1-can)     --->   125");
     printf("   |");
   printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
      printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
          printf("\n\t|");
     printf("9.Diet Coka_Cola            --->   65");
     printf("    |");
        printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
      printf("\n\t|");
     printf("\t\t\t\t");
     printf("\t  |");
     printf("\n<------------------------------------------------------------>");
              char e[2121];
     printf("\n\nWould you like to order something?? ('yes' or 'no') ------->   ");
     scanf("%s",e);
     int t,mom;
     mom=strcmp(e,"no");
     t=strcmp(e,"yes");
if(t==0)
{
colddrinks();
}
 if(mom==0)
{
    system("cls");
    system("color 01");
    SetColor(46);
    printf("\n\n\n\n\nOK.....have a nice day sir..\n\n\n\n\n\n\n\n");
}


 c1_invalid:

   printf("\n\n\n\n\n\t\t\t***** Enter 1 to go  menu card and 2 to exit the program *****");
   printf("\n\t\t---------------------------------------------------------------------------\n\n");
   printf("\t\t\tenter your choice :: ");
   scanf("%d",&n1);
  if(n1==1)
   {
     counter1();
   }
     else if(n1==2)
   {
                    system("cls");
                    printf("\n\n\n\n\n\t\tTHIS SITE IS DEVLOPED BY ME (........BISWA......)\n\n\n\n\n");
                    exit(0);
   }
                else
                    {
                        printf("\nInvalid!\a\a\a");
                    goto c1_invalid;
                    }

}

void counter1()
{
                      system("color 01");
system("cls");
SetColor(43);
printf("\n\t\t\t%c\t\t%c\n\t\t\t%c\t\t%c\n\t\t\t%c\t\t%c\n\t\t\t%c\t\t%c\n\t\t\t%c\t\t%c\n\t\t\t%c\t\t%c\n\t\t\t%c\t\t%c\n\t\t",178,178,178,178,178,178,178,178,178,178,178,178,178,178);
SetColor(45);
printf("|--------------------------------\n\t\t||\t\t\t\t|");
SetColor(45);
printf("\n\t\t||\t\t\t\t|\n\t\t||\t\t\t\t|\n\t\t|");
SetColor(46);
printf("-----> 1.");
SetColor(42);
printf("Create Record");
SetColor(45);
printf("\t\t|");
SetColor(45);
printf("\n\t\t||\t\t\t\t|\n\t\t||\t\t\t\t|\n\t\t|");
SetColor(46);
printf("-----> 2.");
SetColor(42);
printf("VEG\t");
SetColor(45);
printf("\t\t|");
SetColor(45);
printf("\n\t\t||\t\t\t\t%c\n\t\t||\t\t\t\t%c\n\t\t|",31,30);
SetColor(46);
printf("-----> 3.");
SetColor(42);
printf("DRINKS\t");
SetColor(45);
printf("\t|");
SetColor(45);
printf("\n\t\t||\t\t\t\t%c\n\t\t||\t\t\t\t%c\n\t\t|",31,30);
SetColor(46);
printf("-----> 4.");
SetColor(42);
printf("NON-VEG\t");
SetColor(45);
printf("\t|");
SetColor(45);
printf("\n\t\t||\t\t\t\t%c\n\t\t||\t\t\t\t%c\n\t\t|",31,30);
SetColor(46);
printf("-----> 5.");
SetColor(42);
printf("SOFT DRINKS ");
SetColor(45);
printf("    \t|");
SetColor(45);

printf("\n\t\t||\t\t\t\t%c\n\t\t||\t\t\t\t%c\n\t\t|",31,30);
SetColor(46);
printf("-----> 6.");
SetColor(42);
printf("MENU  ");
SetColor(44);
printf("       ");
SetColor(45);
printf("\t        |");
SetColor(45);
printf("\n\t\t||\t\t\t\t|\n\t\t||\t\t\t\t|\n\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n\n\n",178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178);
SetColor(44);
SetColor(46);
printf("\n\t    Press  Esc _key to refresh..(one or two times)");
            int b=0 ,k=0;
while(1)
{
    b=0;
switch((b=getch()))
{
    case KEY_DOWN :  k++;
            if(k==1)
            {
                       system("color 01");
system("cls");
SetColor(43);
printf("\n\t\t\t%c\t\t%c\n\t\t\t%c\t\t%c\n\t\t\t%c\t\t%c\n\t\t\t%c\t\t%c\n\t\t\t%c\t\t%c\n\t\t\t%c\t\t%c\n\t\t\t%c\t\t%c\n\t\t",178,178,178,178,178,178,178,178,178,178,178,178,178,178);
SetColor(45);
printf("|--------------------------------\n\t\t||\t\t\t\t|");
printf("\n\t\t||\t\t\t\t|\n\t\t||\t\t\t\t|\n\t\t|");
SetColor(46);
printf("-----> 1.");
SetColor(44);
printf("Create Record");
SetColor(45);
printf("\t\t|");
SetColor(45);
printf("\n\t\t||\t\t\t\t|\n\t\t||\t\t\t\t|\n\t\t|");
SetColor(46);
printf("-----> 2.");
SetColor(42);
printf("VEG\t");
SetColor(45);
printf("\t\t|");
SetColor(45);
printf("\n\t\t||\t\t\t\t%c\n\t\t||\t\t\t\t%c\n\t\t|",31,30);
SetColor(46);
printf("-----> 3.");
SetColor(42);
printf("DRINKS\t");
SetColor(45);
printf("\t|");
SetColor(45);
printf("\n\t\t||\t\t\t\t%c\n\t\t||\t\t\t\t%c\n\t\t|",31,30);
SetColor(46);
printf("-----> 4.");
SetColor(42);
printf("NON-VEG\t");
SetColor(45);
printf("\t|");
SetColor(45);
printf("\n\t\t||\t\t\t\t%c\n\t\t||\t\t\t\t%c\n\t\t|",31,30);
SetColor(46);
printf("-----> 5.");
SetColor(42);
printf("SOFT DRINKS ");
SetColor(45);
printf("    \t|");
SetColor(45);

printf("\n\t\t||\t\t\t\t%c\n\t\t||\t\t\t\t%c\n\t\t|",31,30);
SetColor(46);
printf("-----> 6.");
SetColor(42);
printf("MENU  ");
SetColor(44);
printf("       ");
SetColor(45);
printf("\t        |");
SetColor(45);
printf("\n\t\t||\t\t\t\t|\n\t\t||\t\t\t\t|\n\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n\n\n",178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178);
SetColor(44);
if(getch()==13)
    new_acc();
            }
                                if(k==2)
                                {
                                    system("color 01");
system("cls");
SetColor(43);
printf("\n\t\t\t%c\t\t%c\n\t\t\t%c\t\t%c\n\t\t\t%c\t\t%c\n\t\t\t%c\t\t%c\n\t\t\t%c\t\t%c\n\t\t\t%c\t\t%c\n\t\t\t%c\t\t%c\n\t\t",178,178,178,178,178,178,178,178,178,178,178,178,178,178);
SetColor(45);
printf("|--------------------------------\n\t\t||\t\t\t\t|");
printf("\n\t\t||\t\t\t\t|\n\t\t||\t\t\t\t|\n\t\t|");
SetColor(46);
printf("-----> 1.");
SetColor(42);
printf("Create Record");
SetColor(45);
printf("\t\t|");
SetColor(45);

printf("\n\t\t||\t\t\t\t|\n\t\t||\t\t\t\t|\n\t\t|");
SetColor(46);
printf("-----> 2.");
SetColor(44);
printf("VEG");
SetColor(44);
printf("  <--- ");
SetColor(45);
printf("\t\t|");
SetColor(45);
printf("\n\t\t||\t\t\t\t%c\n\t\t||\t\t\t\t%c\n\t\t|",31,30);
SetColor(46);
printf("-----> 3.");
SetColor(42);
printf("DRINKS\t");
SetColor(45);
printf("\t|");
SetColor(45);
printf("\n\t\t||\t\t\t\t%c\n\t\t||\t\t\t\t%c\n\t\t|",31,30);
SetColor(46);
printf("-----> 4.");
SetColor(42);
printf("NON-VEG\t");
SetColor(45);
printf("\t|");
SetColor(45);
printf("\n\t\t||\t\t\t\t%c\n\t\t||\t\t\t\t%c\n\t\t|",31,30);
SetColor(46);
printf("-----> 5.");
SetColor(42);
printf("SOFT DRINKS ");
SetColor(45);
printf("    \t|");

SetColor(45);
printf("\n\t\t||\t\t\t\t%c\n\t\t||\t\t\t\t%c\n\t\t|",31,30);
SetColor(46);
printf("-----> 6.");
SetColor(42);
printf("MENU  \t");
SetColor(45);
printf("\t|");
SetColor(45);
printf("\n\t\t||\t\t\t\t|\n\t\t||\t\t\t\t|\n\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n\n\n",178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178);
SetColor(44);
                                    if(getch()==13)
                                        veg();

                                }
                                if(k==3)
                                {
                                    system("color 01");
system("cls");
SetColor(43);
printf("\n\t\t\t%c\t\t%c\n\t\t\t%c\t\t%c\n\t\t\t%c\t\t%c\n\t\t\t%c\t\t%c\n\t\t\t%c\t\t%c\n\t\t\t%c\t\t%c\n\t\t\t%c\t\t%c\n\t\t",178,178,178,178,178,178,178,178,178,178,178,178,178,178);
SetColor(45);
printf("|--------------------------------\n\t\t||\t\t\t\t|");
printf("\n\t\t||\t\t\t\t|\n\t\t||\t\t\t\t|\n\t\t|");
SetColor(46);
printf("-----> 1.");
SetColor(42);
printf("Create Record");
SetColor(45);
printf("\t\t|");
SetColor(45);
printf("\n\t\t||\t\t\t\t|\n\t\t||\t\t\t\t|\n\t\t|");
SetColor(46);
printf("-----> 2.");
SetColor(42);
printf("VEG\t");
SetColor(45);
printf("\t\t|");
SetColor(45);
printf("\n\t\t||\t\t\t\t%c\n\t\t||\t\t\t\t%c\n\t\t|",31,30);
SetColor(46);
printf("-----> 3.");
SetColor(44);
printf("DRINKS");
SetColor(44);
printf("  <--- ");
SetColor(45);
printf("\t        |");
SetColor(45);
printf("\n\t\t||\t\t\t\t%c\n\t\t||\t\t\t\t%c\n\t\t|",31,30);
SetColor(46);
printf("-----> 4.");
SetColor(42);
printf("NON-VEG\t");
SetColor(45);
printf("\t|");
SetColor(45);
printf("\n\t\t||\t\t\t\t%c\n\t\t||\t\t\t\t%c\n\t\t|",31,30);
SetColor(46);
printf("-----> 5.");
SetColor(42);
printf("SOFT DRINKS ");
SetColor(45);
printf("    \t|");
SetColor(45);
printf("\n\t\t||\t\t\t\t%c\n\t\t||\t\t\t\t%c\n\t\t|",31,30);
SetColor(46);
printf("-----> 6.");
SetColor(42);
printf("MENU  \t");
SetColor(45);
printf("\t|");
SetColor(45);
printf("\n\t\t||\t\t\t\t|\n\t\t||\t\t\t\t|\n\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n\n\n",178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178);
SetColor(44);
                                                                       if(getch()==13)
                                        drinks();
                                }
                    if(k==4)
                    {
                        system("color 01");
system("cls");
SetColor(43);
printf("\n\t\t\t%c\t\t%c\n\t\t\t%c\t\t%c\n\t\t\t%c\t\t%c\n\t\t\t%c\t\t%c\n\t\t\t%c\t\t%c\n\t\t\t%c\t\t%c\n\t\t\t%c\t\t%c\n\t\t",178,178,178,178,178,178,178,178,178,178,178,178,178,178);
SetColor(45);
printf("|--------------------------------\n\t\t||\t\t\t\t|");
printf("\n\t\t||\t\t\t\t|\n\t\t||\t\t\t\t|\n\t\t|");
SetColor(46);
printf("-----> 1.");
SetColor(42);
printf("Create Record");
SetColor(45);
printf("\t\t|");
SetColor(45);
printf("\n\t\t||\t\t\t\t|\n\t\t||\t\t\t\t|\n\t\t|");
SetColor(46);
printf("-----> 2.");
SetColor(42);
printf("VEG\t");
SetColor(45);
printf("\t\t|");
SetColor(45);
printf("\n\t\t||\t\t\t\t%c\n\t\t||\t\t\t\t%c\n\t\t|",31,30);
SetColor(46);
printf("-----> 3.");
SetColor(42);
printf("DRINKS\t");
SetColor(45);
printf("\t|");
SetColor(45);
printf("\n\t\t||\t\t\t\t%c\n\t\t||\t\t\t\t%c\n\t\t|",31,30);
SetColor(46);
printf("-----> 4.");
SetColor(44);
printf("NON-VEG");
SetColor(44);
printf("  <--- ");
SetColor(45);
printf("\t|");
SetColor(45);
printf("\n\t\t||\t\t\t\t%c\n\t\t||\t\t\t\t%c\n\t\t|",31,30);
SetColor(46);
printf("-----> 5.");
SetColor(42);
printf("SOFT DRINKS ");
SetColor(45);
printf("    \t|");
SetColor(45);

printf("\n\t\t||\t\t\t\t%c\n\t\t||\t\t\t\t%c\n\t\t|",31,30);
SetColor(46);
printf("-----> 6.");
SetColor(42);
printf("MENU  \t");
SetColor(45);
printf("\t|");
SetColor(45);
printf("\n\t\t||\t\t\t\t|\n\t\t||\t\t\t\t|\n\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n\n\n",178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178);
SetColor(44);
                                                           if(getch()==13)
                                        nonveg();
                    }
                                        if(k==5)
                    {
                        system("color 01");
system("cls");
SetColor(43);
printf("\n\t\t\t%c\t\t%c\n\t\t\t%c\t\t%c\n\t\t\t%c\t\t%c\n\t\t\t%c\t\t%c\n\t\t\t%c\t\t%c\n\t\t\t%c\t\t%c\n\t\t\t%c\t\t%c\n\t\t",178,178,178,178,178,178,178,178,178,178,178,178,178,178);
SetColor(45);
printf("|--------------------------------\n\t\t||\t\t\t\t|");
printf("\n\t\t||\t\t\t\t|\n\t\t||\t\t\t\t|\n\t\t|");
SetColor(46);
printf("-----> 1.");
SetColor(42);
printf("Create Record");
SetColor(45);
printf("\t\t|");
SetColor(45);
printf("\n\t\t||\t\t\t\t|\n\t\t||\t\t\t\t|\n\t\t|");
SetColor(46);
printf("-----> 2.");
SetColor(42);
printf("VEG\t");
SetColor(45);
printf("\t\t|");
SetColor(45);
printf("\n\t\t||\t\t\t\t%c\n\t\t||\t\t\t\t%c\n\t\t|",31,30);
SetColor(46);
printf("-----> 3.");
SetColor(42);
printf("DRINKS\t");
SetColor(45);
printf("\t|");
SetColor(45);
printf("\n\t\t||\t\t\t\t%c\n\t\t||\t\t\t\t%c\n\t\t|",31,30);
SetColor(46);
printf("-----> 4.");
SetColor(42);
printf("NON-VEG\t");
SetColor(45);
printf("\t|");
SetColor(45);
printf("\n\t\t||\t\t\t\t%c\n\t\t||\t\t\t\t%c\n\t\t|",31,30);
SetColor(46);
printf("-----> 5.");
SetColor(44);
printf("SOFT DRINKS ");
SetColor(44);
printf(" <--- ");
SetColor(45);
printf("    |");

SetColor(45);
printf("\n\t\t||\t\t\t\t%c\n\t\t||\t\t\t\t%c\n\t\t|",31,30);
SetColor(46);
printf("-----> 6.");
SetColor(42);
printf("MENU  \t");
SetColor(45);
printf("\t|");
SetColor(45);
printf("\n\t\t||\t\t\t\t|\n\t\t||\t\t\t\t|\n\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n\n\n",178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178);
SetColor(44);
                                                           if(getch()==13)
                                        sd();
                    }
                    if(k==6)
                    {
                        system("color 01");
system("cls");
SetColor(43);
printf("\n\t\t\t%c\t\t%c\n\t\t\t%c\t\t%c\n\t\t\t%c\t\t%c\n\t\t\t%c\t\t%c\n\t\t\t%c\t\t%c\n\t\t\t%c\t\t%c\n\t\t\t%c\t\t%c\n\t\t",178,178,178,178,178,178,178,178,178,178,178,178,178,178);
SetColor(45);
printf("|--------------------------------\n\t\t||\t\t\t\t|");
printf("\n\t\t||\t\t\t\t|\n\t\t||\t\t\t\t|\n\t\t|");
SetColor(46);
printf("-----> 1.");
SetColor(42);
printf("Create Record");
SetColor(45);
printf("\t\t|");
SetColor(45);
printf("\n\t\t||\t\t\t\t|\n\t\t||\t\t\t\t|\n\t\t|");
SetColor(46);
printf("-----> 2.");
SetColor(42);
printf("VEG\t");
SetColor(45);
printf("\t\t|");
SetColor(45);
printf("\n\t\t||\t\t\t\t%c\n\t\t||\t\t\t\t%c\n\t\t|",31,30);
SetColor(46);
printf("-----> 3.");
SetColor(42);
printf("DRINKS\t");
SetColor(45);
printf("\t|");
SetColor(45);
printf("\n\t\t||\t\t\t\t%c\n\t\t||\t\t\t\t%c\n\t\t|",31,30);
SetColor(46);
printf("-----> 4.");
SetColor(42);
printf("NON-VEG\t");
SetColor(45);
printf("\t|");
SetColor(45);
printf("\n\t\t||\t\t\t\t%c\n\t\t||\t\t\t\t%c\n\t\t|",31,30);
SetColor(46);
printf("-----> 5.");
SetColor(42);
printf("SOFT DRINKS ");
SetColor(45);
printf("    \t|");
SetColor(45);

printf("\n\t\t||\t\t\t\t%c\n\t\t||\t\t\t\t%c\n\t\t|",31,30);
SetColor(46);
printf("-----> 6.");
SetColor(44);
printf("MENU  ");
SetColor(44);
printf("  <--- ");
SetColor(45);
printf("\t        |");
SetColor(45);
printf("\n\t\t||\t\t\t\t|\n\t\t||\t\t\t\t|\n\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n\n\n",178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178);
SetColor(44);
                                                           if(getch()==13)
                                                           {
                                                               menu();


                                                           }

                    }
                                     if(k==7)
                    {
                        k=1;

                        system("color 01");
system("cls");
SetColor(43);
printf("\n\t\t\t%c\t\t%c\n\t\t\t%c\t\t%c\n\t\t\t%c\t\t%c\n\t\t\t%c\t\t%c\n\t\t\t%c\t\t%c\n\t\t\t%c\t\t%c\n\t\t\t%c\t\t%c\n\t\t",178,178,178,178,178,178,178,178,178,178,178,178,178,178);
SetColor(45);
printf("|--------------------------------\n\t\t||\t\t\t\t|");
printf("\n\t\t||\t\t\t\t|\n\t\t||\t\t\t\t|\n\t\t|");
SetColor(46);
printf("-----> 1.");
SetColor(44);
printf("Create Record");
SetColor(45);
printf("\t\t|");
SetColor(45);
printf("\n\t\t||\t\t\t\t|\n\t\t||\t\t\t\t|\n\t\t|");
SetColor(46);
printf("-----> 2.");
SetColor(42);
printf("VEG\t");
SetColor(44);
SetColor(45);
printf("\t\t|");
SetColor(45);
printf("\n\t\t||\t\t\t\t%c\n\t\t||\t\t\t\t%c\n\t\t|",31,30);
SetColor(46);
printf("-----> 3.");
SetColor(42);
printf("DRINKS\t");
SetColor(45);
printf("\t|");
SetColor(45);
printf("\n\t\t||\t\t\t\t%c\n\t\t||\t\t\t\t%c\n\t\t|",31,30);
SetColor(46);
printf("-----> 4.");
SetColor(42);
printf("NON-VEG\t");
SetColor(45);
printf("\t|");
SetColor(45);
printf("\n\t\t||\t\t\t\t%c\n\t\t||\t\t\t\t%c\n\t\t|",31,30);
SetColor(46);
printf("-----> 5.");
SetColor(42);
printf("SOFT DRINKS ");
SetColor(45);
printf("    \t|");

SetColor(45);
printf("\n\t\t||\t\t\t\t%c\n\t\t||\t\t\t\t%c\n\t\t|",31,30);
SetColor(46);
printf("-----> 6.");
SetColor(42);
printf("MENU  \t");
SetColor(45);
printf("\t|");
SetColor(45);
printf("\n\t\t||\t\t\t\t|\n\t\t||\t\t\t\t|\n\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n\n\n",178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178);
SetColor(44);
                                        if(getch()==13)
                                        veg();
                    }


                    break;
    case KEY_UP: k--;
        if(k==1)
            {
                       system("color 01");
system("cls");
SetColor(43);
printf("\n\t\t\t%c\t\t%c\n\t\t\t%c\t\t%c\n\t\t\t%c\t\t%c\n\t\t\t%c\t\t%c\n\t\t\t%c\t\t%c\n\t\t\t%c\t\t%c\n\t\t\t%c\t\t%c\n\t\t",178,178,178,178,178,178,178,178,178,178,178,178,178,178);
SetColor(45);
printf("|--------------------------------\n\t\t||\t\t\t\t|");
printf("\n\t\t||\t\t\t\t|\n\t\t||\t\t\t\t|\n\t\t|");
SetColor(46);
printf("-----> 1.");
SetColor(44);
printf("Create Record");
SetColor(45);
printf("\t\t|");
SetColor(45);
printf("\n\t\t||\t\t\t\t|\n\t\t||\t\t\t\t|\n\t\t|");
SetColor(46);
printf("-----> 2.");
SetColor(42);
printf("VEG\t");
SetColor(45);
printf("\t\t|");
SetColor(45);
printf("\n\t\t||\t\t\t\t%c\n\t\t||\t\t\t\t%c\n\t\t|",31,30);
SetColor(46);
printf("-----> 3.");
SetColor(42);
printf("DRINKS\t");
SetColor(45);
printf("\t|");
SetColor(45);
printf("\n\t\t||\t\t\t\t%c\n\t\t||\t\t\t\t%c\n\t\t|",31,30);
SetColor(46);
printf("-----> 4.");
SetColor(42);
printf("NON-VEG\t");
SetColor(45);
printf("\t|");
SetColor(45);
printf("\n\t\t||\t\t\t\t%c\n\t\t||\t\t\t\t%c\n\t\t|",31,30);
SetColor(46);
printf("-----> 5.");
SetColor(42);
printf("SOFT DRINKS ");
SetColor(45);
printf("    \t|");
SetColor(45);

printf("\n\t\t||\t\t\t\t%c\n\t\t||\t\t\t\t%c\n\t\t|",31,30);
SetColor(46);
printf("-----> 6.");
SetColor(42);
printf("MENU  ");
SetColor(44);
printf("       ");
SetColor(45);
printf("\t        |");
SetColor(45);
printf("\n\t\t||\t\t\t\t|\n\t\t||\t\t\t\t|\n\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n\n\n",178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178);
SetColor(44);
if(getch()==13)
    new_acc();
            }
                                if(k==2)
                                {
                                    system("color 01");
system("cls");
SetColor(43);
printf("\n\t\t\t%c\t\t%c\n\t\t\t%c\t\t%c\n\t\t\t%c\t\t%c\n\t\t\t%c\t\t%c\n\t\t\t%c\t\t%c\n\t\t\t%c\t\t%c\n\t\t\t%c\t\t%c\n\t\t",178,178,178,178,178,178,178,178,178,178,178,178,178,178);
SetColor(45);
printf("|--------------------------------\n\t\t||\t\t\t\t|");
printf("\n\t\t||\t\t\t\t|\n\t\t||\t\t\t\t|\n\t\t|");
SetColor(46);
printf("-----> 1.");
SetColor(42);
printf("Create Record");
SetColor(45);
printf("\t\t|");
SetColor(45);

printf("\n\t\t||\t\t\t\t|\n\t\t||\t\t\t\t|\n\t\t|");
SetColor(46);
printf("-----> 2.");
SetColor(44);
printf("VEG");
SetColor(44);
printf("  <--- ");
SetColor(45);
printf("\t\t|");
SetColor(45);
printf("\n\t\t||\t\t\t\t%c\n\t\t||\t\t\t\t%c\n\t\t|",31,30);
SetColor(46);
printf("-----> 3.");
SetColor(42);
printf("DRINKS\t");
SetColor(45);
printf("\t|");
SetColor(45);
printf("\n\t\t||\t\t\t\t%c\n\t\t||\t\t\t\t%c\n\t\t|",31,30);
SetColor(46);
printf("-----> 4.");
SetColor(42);
printf("NON-VEG\t");
SetColor(45);
printf("\t|");
SetColor(45);
printf("\n\t\t||\t\t\t\t%c\n\t\t||\t\t\t\t%c\n\t\t|",31,30);
SetColor(46);
printf("-----> 5.");
SetColor(42);
printf("SOFT DRINKS ");
SetColor(45);
printf("    \t|");

SetColor(45);
printf("\n\t\t||\t\t\t\t%c\n\t\t||\t\t\t\t%c\n\t\t|",31,30);
SetColor(46);
printf("-----> 6.");
SetColor(42);
printf("MENU  \t");
SetColor(45);
printf("\t|");
SetColor(45);
printf("\n\t\t||\t\t\t\t|\n\t\t||\t\t\t\t|\n\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n\n\n",178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178);
SetColor(44);
                                    if(getch()==13)
                                        veg();

                                }
                                if(k==3)
                                {
                                    system("color 01");
system("cls");
SetColor(43);
printf("\n\t\t\t%c\t\t%c\n\t\t\t%c\t\t%c\n\t\t\t%c\t\t%c\n\t\t\t%c\t\t%c\n\t\t\t%c\t\t%c\n\t\t\t%c\t\t%c\n\t\t\t%c\t\t%c\n\t\t",178,178,178,178,178,178,178,178,178,178,178,178,178,178);
SetColor(45);
printf("|--------------------------------\n\t\t||\t\t\t\t|");
printf("\n\t\t||\t\t\t\t|\n\t\t||\t\t\t\t|\n\t\t|");
SetColor(46);
printf("-----> 1.");
SetColor(42);
printf("Create Record");
SetColor(45);
printf("\t\t|");
SetColor(45);
printf("\n\t\t||\t\t\t\t|\n\t\t||\t\t\t\t|\n\t\t|");
SetColor(46);
printf("-----> 2.");
SetColor(42);
printf("VEG\t");
SetColor(45);
printf("\t\t|");
SetColor(45);
printf("\n\t\t||\t\t\t\t%c\n\t\t||\t\t\t\t%c\n\t\t|",31,30);
SetColor(46);
printf("-----> 3.");
SetColor(44);
printf("DRINKS");
SetColor(44);
printf("  <--- ");
SetColor(45);
printf("\t        |");
SetColor(45);
printf("\n\t\t||\t\t\t\t%c\n\t\t||\t\t\t\t%c\n\t\t|",31,30);
SetColor(46);
printf("-----> 4.");
SetColor(42);
printf("NON-VEG\t");
SetColor(45);
printf("\t|");
SetColor(45);
printf("\n\t\t||\t\t\t\t%c\n\t\t||\t\t\t\t%c\n\t\t|",31,30);
SetColor(46);
printf("-----> 5.");
SetColor(42);
printf("SOFT DRINKS ");
SetColor(45);
printf("    \t|");
SetColor(45);
printf("\n\t\t||\t\t\t\t%c\n\t\t||\t\t\t\t%c\n\t\t|",31,30);
SetColor(46);
printf("-----> 6.");
SetColor(42);
printf("MENU  \t");
SetColor(45);
printf("\t|");
SetColor(45);
printf("\n\t\t||\t\t\t\t|\n\t\t||\t\t\t\t|\n\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n\n\n",178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178);
SetColor(44);
                                                                       if(getch()==13)
                                        drinks();
                                }
                    if(k==4)
                    {
                        system("color 01");
system("cls");
SetColor(43);
printf("\n\t\t\t%c\t\t%c\n\t\t\t%c\t\t%c\n\t\t\t%c\t\t%c\n\t\t\t%c\t\t%c\n\t\t\t%c\t\t%c\n\t\t\t%c\t\t%c\n\t\t\t%c\t\t%c\n\t\t",178,178,178,178,178,178,178,178,178,178,178,178,178,178);
SetColor(45);
printf("|--------------------------------\n\t\t||\t\t\t\t|");
printf("\n\t\t||\t\t\t\t|\n\t\t||\t\t\t\t|\n\t\t|");
SetColor(46);
printf("-----> 1.");
SetColor(42);
printf("Create Record");
SetColor(45);
printf("\t\t|");
SetColor(45);
printf("\n\t\t||\t\t\t\t|\n\t\t||\t\t\t\t|\n\t\t|");
SetColor(46);
printf("-----> 2.");
SetColor(42);
printf("VEG\t");
SetColor(45);
printf("\t\t|");
SetColor(45);
printf("\n\t\t||\t\t\t\t%c\n\t\t||\t\t\t\t%c\n\t\t|",31,30);
SetColor(46);
printf("-----> 3.");
SetColor(42);
printf("DRINKS\t");
SetColor(45);
printf("\t|");
SetColor(45);
printf("\n\t\t||\t\t\t\t%c\n\t\t||\t\t\t\t%c\n\t\t|",31,30);
SetColor(46);
printf("-----> 4.");
SetColor(44);
printf("NON-VEG");
SetColor(44);
printf("  <--- ");
SetColor(45);
printf("\t|");
SetColor(45);
printf("\n\t\t||\t\t\t\t%c\n\t\t||\t\t\t\t%c\n\t\t|",31,30);
SetColor(46);
printf("-----> 5.");
SetColor(42);
printf("SOFT DRINKS ");
SetColor(45);
printf("    \t|");
SetColor(45);

printf("\n\t\t||\t\t\t\t%c\n\t\t||\t\t\t\t%c\n\t\t|",31,30);
SetColor(46);
printf("-----> 6.");
SetColor(42);
printf("MENU  \t");
SetColor(45);
printf("\t|");
SetColor(45);
printf("\n\t\t||\t\t\t\t|\n\t\t||\t\t\t\t|\n\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n\n\n",178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178);
SetColor(44);
                                                           if(getch()==13)
                                        nonveg();
                    }
                                        if(k==5)
                    {
                        system("color 01");
system("cls");
SetColor(43);
printf("\n\t\t\t%c\t\t%c\n\t\t\t%c\t\t%c\n\t\t\t%c\t\t%c\n\t\t\t%c\t\t%c\n\t\t\t%c\t\t%c\n\t\t\t%c\t\t%c\n\t\t\t%c\t\t%c\n\t\t",178,178,178,178,178,178,178,178,178,178,178,178,178,178);
SetColor(45);
printf("|--------------------------------\n\t\t||\t\t\t\t|");
printf("\n\t\t||\t\t\t\t|\n\t\t||\t\t\t\t|\n\t\t|");
SetColor(46);
printf("-----> 1.");
SetColor(42);
printf("Create Record");
SetColor(45);
printf("\t\t|");
SetColor(45);
printf("\n\t\t||\t\t\t\t|\n\t\t||\t\t\t\t|\n\t\t|");
SetColor(46);
printf("-----> 2.");
SetColor(42);
printf("VEG\t");
SetColor(45);
printf("\t\t|");
SetColor(45);
printf("\n\t\t||\t\t\t\t%c\n\t\t||\t\t\t\t%c\n\t\t|",31,30);
SetColor(46);
printf("-----> 3.");
SetColor(42);
printf("DRINKS\t");
SetColor(45);
printf("\t|");
SetColor(45);
printf("\n\t\t||\t\t\t\t%c\n\t\t||\t\t\t\t%c\n\t\t|",31,30);
SetColor(46);
printf("-----> 4.");
SetColor(42);
printf("NON-VEG\t");
SetColor(45);
printf("\t|");
SetColor(45);
printf("\n\t\t||\t\t\t\t%c\n\t\t||\t\t\t\t%c\n\t\t|",31,30);
SetColor(46);
printf("-----> 5.");
SetColor(44);
printf("SOFT DRINKS ");
SetColor(44);
printf(" <--- ");
SetColor(45);
printf("    |");

SetColor(45);
printf("\n\t\t||\t\t\t\t%c\n\t\t||\t\t\t\t%c\n\t\t|",31,30);
SetColor(46);
printf("-----> 6.");
SetColor(42);
printf("MENU  \t");
SetColor(45);
printf("\t|");
SetColor(45);
printf("\n\t\t||\t\t\t\t|\n\t\t||\t\t\t\t|\n\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n\n\n",178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178);
SetColor(44);
                                                           if(getch()==13)
                                        sd();
                    }
                    if(k==6)
                    {
                        system("color 01");
system("cls");
SetColor(43);
printf("\n\t\t\t%c\t\t%c\n\t\t\t%c\t\t%c\n\t\t\t%c\t\t%c\n\t\t\t%c\t\t%c\n\t\t\t%c\t\t%c\n\t\t\t%c\t\t%c\n\t\t\t%c\t\t%c\n\t\t",178,178,178,178,178,178,178,178,178,178,178,178,178,178);
SetColor(45);
printf("|--------------------------------\n\t\t||\t\t\t\t|");
printf("\n\t\t||\t\t\t\t|\n\t\t||\t\t\t\t|\n\t\t|");
SetColor(46);
printf("-----> 1.");
SetColor(42);
printf("Create Record");
SetColor(45);
printf("\t\t|");
SetColor(45);
printf("\n\t\t||\t\t\t\t|\n\t\t||\t\t\t\t|\n\t\t|");
SetColor(46);
printf("-----> 2.");
SetColor(42);
printf("VEG\t");
SetColor(45);
printf("\t\t|");
SetColor(45);
printf("\n\t\t||\t\t\t\t%c\n\t\t||\t\t\t\t%c\n\t\t|",31,30);
SetColor(46);
printf("-----> 3.");
SetColor(42);
printf("DRINKS\t");
SetColor(45);
printf("\t|");
SetColor(45);
printf("\n\t\t||\t\t\t\t%c\n\t\t||\t\t\t\t%c\n\t\t|",31,30);
SetColor(46);
printf("-----> 4.");
SetColor(42);
printf("NON-VEG\t");
SetColor(45);
printf("\t|");
SetColor(45);
printf("\n\t\t||\t\t\t\t%c\n\t\t||\t\t\t\t%c\n\t\t|",31,30);
SetColor(46);
printf("-----> 5.");
SetColor(42);
printf("SOFT DRINKS ");
SetColor(45);
printf("    \t|");
SetColor(45);

printf("\n\t\t||\t\t\t\t%c\n\t\t||\t\t\t\t%c\n\t\t|",31,30);
SetColor(46);
printf("-----> 6.");
SetColor(44);
printf("MENU  ");
SetColor(44);
printf("  <--- ");
SetColor(45);
printf("\t        |");
SetColor(45);
printf("\n\t\t||\t\t\t\t|\n\t\t||\t\t\t\t|\n\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n\n\n",178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178);
SetColor(44);
                                                           if(getch()==13)
                                                           {

                                                               menu();

                                                           }

                    }
                                     if(k==0)
                    {
                        k=6;

                        system("color 01");
system("cls");
SetColor(43);
printf("\n\t\t\t%c\t\t%c\n\t\t\t%c\t\t%c\n\t\t\t%c\t\t%c\n\t\t\t%c\t\t%c\n\t\t\t%c\t\t%c\n\t\t\t%c\t\t%c\n\t\t\t%c\t\t%c\n\t\t",178,178,178,178,178,178,178,178,178,178,178,178,178,178);
SetColor(45);
printf("|--------------------------------\n\t\t||\t\t\t\t|");
printf("\n\t\t||\t\t\t\t|\n\t\t||\t\t\t\t|\n\t\t|");
SetColor(46);
printf("-----> 1.");
SetColor(42);
printf("Create Record");
SetColor(45);
printf("\t\t|");
SetColor(45);
printf("\n\t\t||\t\t\t\t|\n\t\t||\t\t\t\t|\n\t\t|");
SetColor(46);
printf("-----> 2.");
SetColor(42);
printf("VEG\t");
SetColor(45);
printf("\t\t|");
SetColor(45);
printf("\n\t\t||\t\t\t\t%c\n\t\t||\t\t\t\t%c\n\t\t|",31,30);
SetColor(46);
printf("-----> 3.");
SetColor(42);
printf("DRINKS\t");
SetColor(45);
printf("\t|");
SetColor(45);
printf("\n\t\t||\t\t\t\t%c\n\t\t||\t\t\t\t%c\n\t\t|",31,30);
SetColor(46);
printf("-----> 4.");
SetColor(42);
printf("NON-VEG\t");
SetColor(45);
printf("\t|");
SetColor(45);
printf("\n\t\t||\t\t\t\t%c\n\t\t||\t\t\t\t%c\n\t\t|",31,30);
SetColor(46);
printf("-----> 5.");
SetColor(42);
printf("SOFT DRINKS ");
SetColor(45);
printf("    \t|");

SetColor(45);
printf("\n\t\t||\t\t\t\t%c\n\t\t||\t\t\t\t%c\n\t\t|",31,30);
SetColor(46);
printf("-----> 6.");
SetColor(42);
printf("MENU  ");
SetColor(44);
printf("  <--- ");
SetColor(45);
printf("\t        |");
SetColor(45);
printf("\n\t\t||\t\t\t\t|\n\t\t||\t\t\t\t|\n\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n\n\n",178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178);
SetColor(44);
                                        if(getch()==13)
                                        new_acc();
                    }


                    break;
case ESC_KEY:  menu();

                        break;
}
}
}
  void cusrec()
    {
 system("color f");
    FILE *view;
    view=fopen("record.dat","r");
    int test=0;
    system("cls");
    printf("\nSERIAL. NO.\t        NAME\t\t\t   \t     ADDRESS\t\t     \tPHONE\n\n----------------------------------------------------------------------------------------------------------------------------------------------------------------\n");

    while(fscanf(view,"%d %s %d/%d/%d %d %s %s %lf %s %f %d/%d/%d",&add.acc_no,add.name,&add.dob.month,&add.dob.day,&add.dob.year,&add.age,add.address,add.adhar,&add.phone,add.acc_type,&add.amt,&add.order.month,&add.order.day,&add.order.year)!=EOF)
       {
           printf("\n\n\n%6d\t\t %10s\t\t\t\t%10s\t\t\t%.0lf",add.acc_no,add.name,add.address,add.phone);
           test++;
       }

    fclose(view);
    if (test==0)
        {   system("cls");
            printf("\nNO RECORDS!!\n");}
    for(int i=0;i<1;i++)
{
system("color A");
Sleep(1000);
system("color B");
Sleep(1000);
system("color C");
Sleep(1000);
system("color A");
Sleep(1000);
system("color B");
Sleep(1000);
system("color D");
system("color E");
Sleep(1000);
system("color F");
}
    c1_invalid:
    SetColor(46);
   printf("\n\n\n\n\n\n\n   ***** Enter 1 to go  main menu ,3 to delete customer record,4 to go details of customers,5 to go order details of customers and 2 to exit the program *****");
    SetColor(44);
   printf("\n--------------------------------------------------------------------------------------------------------------------\n\n");
    SetColor(42);
   printf("\tenter your choice ::  ");
   SetColor(43);
   scanf("%d",&n1);
  if(n1==1)
   {
     menu();
   }
     else if(n1==2)
   {
                    system("cls");
                    printf("\n\n\n\n\n\t\tTHIS SITE IS DEVLOPED BY ME (........BISWA......)\n\n\n\n\n");
                    exit(0);
   }
        else if(n1==3)
   {
       system("cls");
            erase();
   }
           else if(n1==4)
   {
       system("cls");
           see();
   }
              else if(n1==5)
   {
       system("cls");
           seen();
   }
                else
                    {
                        printf("\nInvalid!\a\a\a");
                    goto c1_invalid;
                    }
    }
    void orderdetails()
    {
      system("cls");
    SetColor(46);
    printf("\n<--------------------------------------------------------------------->");
     SetColor(44);
    printf("\n\t|||\t                                       \t|||||||------->");
    printf("\n\t|||\t                                        |||||||------->");
      SetColor(43);
    printf("\n\t|||\t1--->Veg Items       \t\t|||||||<-------");
     SetColor(44);
    printf("\n\t|||\t                                        |||||||------->");
    printf("\n\t|||\t                                        |||||||");
    SetColor(43);
    printf("\n\t|||\t2--->Non-veg Items\t\t|||||||<-------");
     SetColor(44);
    printf("\n\t|||\t                                        |||||||------->");
    printf("\n\t|||\t                                        |||||||------->");
    SetColor(43);
    printf("\n\t|||\t3--->Drinks\t\t\t|||||||<-------");
     SetColor(44);
    printf("\n\t|||\t                                        |||||||------->");
    printf("\n\t|||\t                                        |||||||------->");
        SetColor(43);
    printf("\n\t|||\t4--->Soft-Drinks\t\t|||||||<-------");
     SetColor(44);
    printf("\n\t|||\t                                        |||||||------->");
    printf("\n\t|||\t                                        |||||||------->");
        SetColor(43);
    printf("\n\t|||\t5--->View all\t\t\t|||||||<-------");
     SetColor(44);
    printf("\n\t|||\t                                        |||||||------->");
    printf("\n\t|||\t                                        |||||||------->");
        SetColor(43);
    printf("\n\t|||\t6--->Back\t\t\t|||||||------->");
     SetColor(44);
    printf("\n\t|||\t                                        |||||||------->");
    printf("\n\t|||\t                                        |||||||------->");
     SetColor(46);
    printf("\n<--------------------------------------------------------------------->\n\n\n");
        SetColor(41);
    printf("\n\t.......press ESC to main menu.....");
    int xxx=0;
    int pati=0;
    while(1)
    {
        xxx=0;
    switch((xxx=getch()))
    {
        case KEY_DOWN:  pati++;
                                            if(pati==1)
                                            {
                                                      system("cls");
    SetColor(46);
    printf("\n<--------------------------------------------------------------------->");
     SetColor(44);
    printf("\n\t|||\t                                       \t|||||||------->");
    printf("\n\t|||\t                                        |||||||------->");
      SetColor(42);
    printf("\n\t|||\t1--->Veg Items       \t\t|||||||<-------");
     SetColor(44);
    printf("\n\t|||\t                                        |||||||------->");
    printf("\n\t|||\t                                        |||||||");
    SetColor(43);
    printf("\n\t|||\t2--->Non-veg Items\t\t|||||||<-------");
     SetColor(44);
    printf("\n\t|||\t                                        |||||||------->");
    printf("\n\t|||\t                                        |||||||------->");
    SetColor(43);
    printf("\n\t|||\t3--->Drinks\t\t\t|||||||<-------");
     SetColor(44);
    printf("\n\t|||\t                                        |||||||------->");
    printf("\n\t|||\t                                        |||||||------->");
        SetColor(43);
    printf("\n\t|||\t4--->Soft-Drinks\t\t|||||||<-------");
     SetColor(44);
    printf("\n\t|||\t                                        |||||||------->");
    printf("\n\t|||\t                                        |||||||------->");
        SetColor(43);
    printf("\n\t|||\t5--->View all\t\t\t|||||||<-------");
     SetColor(44);
    printf("\n\t|||\t                                        |||||||------->");
    printf("\n\t|||\t                                        |||||||------->");
        SetColor(43);
    printf("\n\t|||\t6--->Back\t\t\t|||||||------->");
     SetColor(44);
    printf("\n\t|||\t                                        |||||||------->");
    printf("\n\t|||\t                                        |||||||------->");
     SetColor(46);
    printf("\n<--------------------------------------------------------------------->\n\n\n");
        SetColor(41);
    printf("\n\t.......press ESC to main menu.....");
                                                if(getch()==13)
                                                    seen();
                                            }
                                                                                        if(pati==2)
                                            {
                                                      system("cls");
    SetColor(46);
    printf("\n<--------------------------------------------------------------------->");
     SetColor(44);
    printf("\n\t|||\t                                       \t|||||||------->");
    printf("\n\t|||\t                                        |||||||------->");
      SetColor(43);
    printf("\n\t|||\t1--->Veg Items       \t\t|||||||<-------");
     SetColor(44);
    printf("\n\t|||\t                                        |||||||------->");
    printf("\n\t|||\t                                        |||||||");
    SetColor(42);
    printf("\n\t|||\t2--->Non-veg Items\t\t|||||||<-------");
     SetColor(44);
    printf("\n\t|||\t                                        |||||||------->");
    printf("\n\t|||\t                                        |||||||------->");
    SetColor(43);
    printf("\n\t|||\t3--->Drinks\t\t\t|||||||<-------");
     SetColor(44);
    printf("\n\t|||\t                                        |||||||------->");
    printf("\n\t|||\t                                        |||||||------->");
        SetColor(43);
    printf("\n\t|||\t4--->Soft-Drinks\t\t|||||||<-------");
     SetColor(44);
    printf("\n\t|||\t                                        |||||||------->");
    printf("\n\t|||\t                                        |||||||------->");
        SetColor(43);
    printf("\n\t|||\t5--->View all\t\t\t|||||||<-------");
     SetColor(44);
    printf("\n\t|||\t                                        |||||||------->");
    printf("\n\t|||\t                                        |||||||------->");
        SetColor(43);
    printf("\n\t|||\t6--->Back\t\t\t|||||||------->");
     SetColor(44);
    printf("\n\t|||\t                                        |||||||------->");
    printf("\n\t|||\t                                        |||||||------->");
     SetColor(46);
    printf("\n<--------------------------------------------------------------------->\n\n\n");
        SetColor(41);
    printf("\n\t.......press ESC to main menu.....");
                                                if(getch()==13)
                                                    nonsee();
                                            }
                                                                                        if(pati==3)
                                            {
                                                      system("cls");
    SetColor(46);
    printf("\n<--------------------------------------------------------------------->");
     SetColor(44);
    printf("\n\t|||\t                                       \t|||||||------->");
    printf("\n\t|||\t                                        |||||||------->");
      SetColor(43);
    printf("\n\t|||\t1--->Veg Items       \t\t|||||||<-------");
     SetColor(44);
    printf("\n\t|||\t                                        |||||||------->");
    printf("\n\t|||\t                                        |||||||");
    SetColor(43);
    printf("\n\t|||\t2--->Non-veg Items\t\t|||||||<-------");
     SetColor(44);
    printf("\n\t|||\t                                        |||||||------->");
    printf("\n\t|||\t                                        |||||||------->");
    SetColor(42);
    printf("\n\t|||\t3--->Drinks\t\t\t|||||||<-------");
     SetColor(44);
    printf("\n\t|||\t                                        |||||||------->");
    printf("\n\t|||\t                                        |||||||------->");
        SetColor(43);
    printf("\n\t|||\t4--->Soft-Drinks\t\t|||||||<-------");
     SetColor(44);
    printf("\n\t|||\t                                        |||||||------->");
    printf("\n\t|||\t                                        |||||||------->");
        SetColor(43);
    printf("\n\t|||\t5--->View all\t\t\t|||||||<-------");
     SetColor(44);
    printf("\n\t|||\t                                        |||||||------->");
    printf("\n\t|||\t                                        |||||||------->");
        SetColor(43);
    printf("\n\t|||\t6--->Back\t\t\t|||||||------->");
     SetColor(44);
    printf("\n\t|||\t                                        |||||||------->");
    printf("\n\t|||\t                                        |||||||------->");
     SetColor(46);
    printf("\n<--------------------------------------------------------------------->\n\n\n");
        SetColor(41);
    printf("\n\t.......press ESC to main menu.....");
                                                if(getch()==13)
                                                {
                                                    system("cls");
                                                    drinkssee();
                                                }


                                            }
                                                                                        if(pati==4)
                                            {
                                                      system("cls");
    SetColor(46);
    printf("\n<--------------------------------------------------------------------->");
     SetColor(44);
    printf("\n\t|||\t                                       \t|||||||------->");
    printf("\n\t|||\t                                        |||||||------->");
      SetColor(43);
    printf("\n\t|||\t1--->Veg Items       \t\t|||||||<-------");
     SetColor(44);
    printf("\n\t|||\t                                        |||||||------->");
    printf("\n\t|||\t                                        |||||||");
    SetColor(43);
    printf("\n\t|||\t2--->Non-veg Items\t\t|||||||<-------");
     SetColor(44);
    printf("\n\t|||\t                                        |||||||------->");
    printf("\n\t|||\t                                        |||||||------->");
    SetColor(43);
    printf("\n\t|||\t3--->Drinks\t\t\t|||||||<-------");
     SetColor(44);
    printf("\n\t|||\t                                        |||||||------->");
    printf("\n\t|||\t                                        |||||||------->");
        SetColor(42);
    printf("\n\t|||\t4--->Soft-Drinks\t\t|||||||<-------");
     SetColor(44);
    printf("\n\t|||\t                                        |||||||------->");
    printf("\n\t|||\t                                        |||||||------->");
        SetColor(43);
    printf("\n\t|||\t5--->View all\t\t\t|||||||<-------");
     SetColor(44);
    printf("\n\t|||\t                                        |||||||------->");
    printf("\n\t|||\t                                        |||||||------->");
        SetColor(43);
    printf("\n\t|||\t6--->Back\t\t\t|||||||------->");
     SetColor(44);
    printf("\n\t|||\t                                        |||||||------->");
    printf("\n\t|||\t                                        |||||||------->");
     SetColor(46);
    printf("\n<--------------------------------------------------------------------->\n\n\n");
        SetColor(41);
    printf("\n\t.......press ESC to main menu.....");
                                                if(getch()==13)
                                                    softsee();
                                            }
                                                                                        if(pati==5)
                                            {
                                                      system("cls");
    SetColor(46);
    printf("\n<--------------------------------------------------------------------->");
     SetColor(44);
    printf("\n\t|||\t                                       \t|||||||------->");
    printf("\n\t|||\t                                        |||||||------->");
      SetColor(43);
    printf("\n\t|||\t1--->Veg Items       \t\t|||||||<-------");
     SetColor(44);
    printf("\n\t|||\t                                        |||||||------->");
    printf("\n\t|||\t                                        |||||||");
    SetColor(43);
    printf("\n\t|||\t2--->Non-veg Items\t\t|||||||<-------");
     SetColor(44);
    printf("\n\t|||\t                                        |||||||------->");
    printf("\n\t|||\t                                        |||||||------->");
    SetColor(43);
    printf("\n\t|||\t3--->Drinks\t\t\t|||||||<-------");
     SetColor(44);
    printf("\n\t|||\t                                        |||||||------->");
    printf("\n\t|||\t                                        |||||||------->");
        SetColor(43);
    printf("\n\t|||\t4--->Soft-Drinks\t\t|||||||<-------");
     SetColor(44);
    printf("\n\t|||\t                                        |||||||------->");
    printf("\n\t|||\t                                        |||||||------->");
        SetColor(42);
    printf("\n\t|||\t5--->View all\t\t\t|||||||<-------");
     SetColor(44);
    printf("\n\t|||\t                                        |||||||------->");
    printf("\n\t|||\t                                        |||||||------->");
        SetColor(43);
    printf("\n\t|||\t6--->Back\t\t\t|||||||------->");
     SetColor(44);
    printf("\n\t|||\t                                        |||||||------->");
    printf("\n\t|||\t                                        |||||||------->");
     SetColor(46);
    printf("\n<--------------------------------------------------------------------->\n\n\n");
        SetColor(41);
    printf("\n\t.......press ESC to main menu.....");
                                                if(getch()==13)
                                                {
                                                    system("cls");
                                                    orderall();

                                                }

                                            }
                                                                                        if(pati==6)
                                            {
                                                      system("cls");
    SetColor(46);
    printf("\n<--------------------------------------------------------------------->");
     SetColor(44);
    printf("\n\t|||\t                                       \t|||||||------->");
    printf("\n\t|||\t                                        |||||||------->");
      SetColor(43);
    printf("\n\t|||\t1--->Veg Items       \t\t|||||||<-------");
     SetColor(44);
    printf("\n\t|||\t                                        |||||||------->");
    printf("\n\t|||\t                                        |||||||");
    SetColor(43);
    printf("\n\t|||\t2--->Non-veg Items\t\t|||||||<-------");
     SetColor(44);
    printf("\n\t|||\t                                        |||||||------->");
    printf("\n\t|||\t                                        |||||||------->");
    SetColor(43);
    printf("\n\t|||\t3--->Drinks\t\t\t|||||||<-------");
     SetColor(44);
    printf("\n\t|||\t                                        |||||||------->");
    printf("\n\t|||\t                                        |||||||------->");
        SetColor(43);
    printf("\n\t|||\t4--->Soft-Drinks\t\t|||||||<-------");
     SetColor(44);
    printf("\n\t|||\t                                        |||||||------->");
    printf("\n\t|||\t                                        |||||||------->");
        SetColor(43);
    printf("\n\t|||\t5--->View all\t\t\t|||||||<-------");
     SetColor(44);
    printf("\n\t|||\t                                        |||||||------->");
    printf("\n\t|||\t                                        |||||||------->");
        SetColor(42);
    printf("\n\t|||\t6--->Back\t\t\t|||||||------->");
     SetColor(44);
    printf("\n\t|||\t                                        |||||||------->");
    printf("\n\t|||\t                                        |||||||------->");
     SetColor(46);
    printf("\n<--------------------------------------------------------------------->\n\n\n");
        SetColor(41);
    printf("\n\t.......press ESC to main menu.....");
                                                if(getch()==13)
                                                    cr();
                                            }
                                                                      if(pati==7)
                                            {
                                                pati=1;
                                                                                                      system("cls");
    SetColor(46);
    printf("\n<--------------------------------------------------------------------->");
     SetColor(44);
    printf("\n\t|||\t                                       \t|||||||------->");
    printf("\n\t|||\t                                        |||||||------->");
      SetColor(42);
    printf("\n\t|||\t1--->Veg Items       \t\t|||||||<-------");
     SetColor(44);
    printf("\n\t|||\t                                        |||||||------->");
    printf("\n\t|||\t                                        |||||||");
    SetColor(43);
    printf("\n\t|||\t2--->Non-veg Items\t\t|||||||<-------");
     SetColor(44);
    printf("\n\t|||\t                                        |||||||------->");
    printf("\n\t|||\t                                        |||||||------->");
    SetColor(43);
    printf("\n\t|||\t3--->Drinks\t\t\t|||||||<-------");
     SetColor(44);
    printf("\n\t|||\t                                        |||||||------->");
    printf("\n\t|||\t                                        |||||||------->");
        SetColor(43);
    printf("\n\t|||\t4--->Soft-Drinks\t\t|||||||<-------");
     SetColor(44);
    printf("\n\t|||\t                                        |||||||------->");
    printf("\n\t|||\t                                        |||||||------->");
        SetColor(43);
    printf("\n\t|||\t5--->View all\t\t\t|||||||<-------");
     SetColor(44);
    printf("\n\t|||\t                                        |||||||------->");
    printf("\n\t|||\t                                        |||||||------->");
        SetColor(43);
    printf("\n\t|||\t6--->Back\t\t\t|||||||------->");
     SetColor(44);
    printf("\n\t|||\t                                        |||||||------->");
    printf("\n\t|||\t                                        |||||||------->");
     SetColor(46);
    printf("\n<--------------------------------------------------------------------->\n\n\n");
        SetColor(41);
    printf("\n\t.......press ESC to main menu.....");
                                                if(getch()==13)
                                                    seen();
                                            }
                                            break;
    case KEY_UP: pati--;
                                                                        if(pati==1)
                                            {
                                                      system("cls");
    SetColor(46);
    printf("\n<--------------------------------------------------------------------->");
     SetColor(44);
    printf("\n\t|||\t                                       \t|||||||------->");
    printf("\n\t|||\t                                        |||||||------->");
      SetColor(42);
    printf("\n\t|||\t1--->Veg Items       \t\t|||||||<-------");
     SetColor(44);
    printf("\n\t|||\t                                        |||||||------->");
    printf("\n\t|||\t                                        |||||||");
    SetColor(43);
    printf("\n\t|||\t2--->Non-veg Items\t\t|||||||<-------");
     SetColor(44);
    printf("\n\t|||\t                                        |||||||------->");
    printf("\n\t|||\t                                        |||||||------->");
    SetColor(43);
    printf("\n\t|||\t3--->Drinks\t\t\t|||||||<-------");
     SetColor(44);
    printf("\n\t|||\t                                        |||||||------->");
    printf("\n\t|||\t                                        |||||||------->");
        SetColor(43);
    printf("\n\t|||\t4--->Soft-Drinks\t\t|||||||<-------");
     SetColor(44);
    printf("\n\t|||\t                                        |||||||------->");
    printf("\n\t|||\t                                        |||||||------->");
        SetColor(43);
    printf("\n\t|||\t5--->View all\t\t\t|||||||<-------");
     SetColor(44);
    printf("\n\t|||\t                                        |||||||------->");
    printf("\n\t|||\t                                        |||||||------->");
        SetColor(43);
    printf("\n\t|||\t6--->Back\t\t\t|||||||------->");
     SetColor(44);
    printf("\n\t|||\t                                        |||||||------->");
    printf("\n\t|||\t                                        |||||||------->");
     SetColor(46);
    printf("\n<--------------------------------------------------------------------->\n\n\n");
        SetColor(41);
    printf("\n\t.......press ESC to main menu.....");
                                                if(getch()==13)
                                                    seen();
                                            }
                                                                                        if(pati==2)
                                            {
                                                      system("cls");
    SetColor(46);
    printf("\n<--------------------------------------------------------------------->");
     SetColor(44);
    printf("\n\t|||\t                                       \t|||||||------->");
    printf("\n\t|||\t                                        |||||||------->");
      SetColor(43);
    printf("\n\t|||\t1--->Veg Items       \t\t|||||||<-------");
     SetColor(44);
    printf("\n\t|||\t                                        |||||||------->");
    printf("\n\t|||\t                                        |||||||");
    SetColor(42);
    printf("\n\t|||\t2--->Non-veg Items\t\t|||||||<-------");
     SetColor(44);
    printf("\n\t|||\t                                        |||||||------->");
    printf("\n\t|||\t                                        |||||||------->");
    SetColor(43);
    printf("\n\t|||\t3--->Drinks\t\t\t|||||||<-------");
     SetColor(44);
    printf("\n\t|||\t                                        |||||||------->");
    printf("\n\t|||\t                                        |||||||------->");
        SetColor(43);
    printf("\n\t|||\t4--->Soft-Drinks\t\t|||||||<-------");
     SetColor(44);
    printf("\n\t|||\t                                        |||||||------->");
    printf("\n\t|||\t                                        |||||||------->");
        SetColor(43);
    printf("\n\t|||\t5--->View all\t\t\t|||||||<-------");
     SetColor(44);
    printf("\n\t|||\t                                        |||||||------->");
    printf("\n\t|||\t                                        |||||||------->");
        SetColor(43);
    printf("\n\t|||\t6--->Back\t\t\t|||||||------->");
     SetColor(44);
    printf("\n\t|||\t                                        |||||||------->");
    printf("\n\t|||\t                                        |||||||------->");
     SetColor(46);
    printf("\n<--------------------------------------------------------------------->\n\n\n");
        SetColor(41);
    printf("\n\t.......press ESC to main menu.....");
                                                if(getch()==13)
                                                    nonsee();
                                            }
                                                                                        if(pati==3)
                                            {
                                                      system("cls");
    SetColor(46);
    printf("\n<--------------------------------------------------------------------->");
     SetColor(44);
    printf("\n\t|||\t                                       \t|||||||------->");
    printf("\n\t|||\t                                        |||||||------->");
      SetColor(43);
    printf("\n\t|||\t1--->Veg Items       \t\t|||||||<-------");
     SetColor(44);
    printf("\n\t|||\t                                        |||||||------->");
    printf("\n\t|||\t                                        |||||||");
    SetColor(43);
    printf("\n\t|||\t2--->Non-veg Items\t\t|||||||<-------");
     SetColor(44);
    printf("\n\t|||\t                                        |||||||------->");
    printf("\n\t|||\t                                        |||||||------->");
    SetColor(42);
    printf("\n\t|||\t3--->Drinks\t\t\t|||||||<-------");
     SetColor(44);
    printf("\n\t|||\t                                        |||||||------->");
    printf("\n\t|||\t                                        |||||||------->");
        SetColor(43);
    printf("\n\t|||\t4--->Soft-Drinks\t\t|||||||<-------");
     SetColor(44);
    printf("\n\t|||\t                                        |||||||------->");
    printf("\n\t|||\t                                        |||||||------->");
        SetColor(43);
    printf("\n\t|||\t5--->View all\t\t\t|||||||<-------");
     SetColor(44);
    printf("\n\t|||\t                                        |||||||------->");
    printf("\n\t|||\t                                        |||||||------->");
        SetColor(43);
    printf("\n\t|||\t6--->Back\t\t\t|||||||------->");
     SetColor(44);
    printf("\n\t|||\t                                        |||||||------->");
    printf("\n\t|||\t                                        |||||||------->");
     SetColor(46);
    printf("\n<--------------------------------------------------------------------->\n\n\n");
        SetColor(41);
    printf("\n\t.......press ESC to main menu.....");
                                             if(getch()==13)
                                                {
                                                    system("cls");
                                                    drinkssee();
                                                }
                                            }
                                                                                        if(pati==4)
                                            {
                                                      system("cls");
    SetColor(46);
    printf("\n<--------------------------------------------------------------------->");
     SetColor(44);
    printf("\n\t|||\t                                       \t|||||||------->");
    printf("\n\t|||\t                                        |||||||------->");
      SetColor(43);
    printf("\n\t|||\t1--->Veg Items       \t\t|||||||<-------");
     SetColor(44);
    printf("\n\t|||\t                                        |||||||------->");
    printf("\n\t|||\t                                        |||||||");
    SetColor(43);
    printf("\n\t|||\t2--->Non-veg Items\t\t|||||||<-------");
     SetColor(44);
    printf("\n\t|||\t                                        |||||||------->");
    printf("\n\t|||\t                                        |||||||------->");
    SetColor(43);
    printf("\n\t|||\t3--->Drinks\t\t\t|||||||<-------");
     SetColor(44);
    printf("\n\t|||\t                                        |||||||------->");
    printf("\n\t|||\t                                        |||||||------->");
        SetColor(42);
    printf("\n\t|||\t4--->Soft-Drinks\t\t|||||||<-------");
     SetColor(44);
    printf("\n\t|||\t                                        |||||||------->");
    printf("\n\t|||\t                                        |||||||------->");
        SetColor(43);
    printf("\n\t|||\t5--->View all\t\t\t|||||||<-------");
     SetColor(44);
    printf("\n\t|||\t                                        |||||||------->");
    printf("\n\t|||\t                                        |||||||------->");
        SetColor(43);
    printf("\n\t|||\t6--->Back\t\t\t|||||||------->");
     SetColor(44);
    printf("\n\t|||\t                                        |||||||------->");
    printf("\n\t|||\t                                        |||||||------->");
     SetColor(46);
    printf("\n<--------------------------------------------------------------------->\n\n\n");
        SetColor(41);
    printf("\n\t.......press ESC to main menu.....");
                                                if(getch()==13)
                                                    softsee();
                                            }
                                                                                        if(pati==5)
                                            {
                                                      system("cls");
    SetColor(46);
    printf("\n<--------------------------------------------------------------------->");
     SetColor(44);
    printf("\n\t|||\t                                       \t|||||||------->");
    printf("\n\t|||\t                                        |||||||------->");
      SetColor(43);
    printf("\n\t|||\t1--->Veg Items       \t\t|||||||<-------");
     SetColor(44);
    printf("\n\t|||\t                                        |||||||------->");
    printf("\n\t|||\t                                        |||||||");
    SetColor(43);
    printf("\n\t|||\t2--->Non-veg Items\t\t|||||||<-------");
     SetColor(44);
    printf("\n\t|||\t                                        |||||||------->");
    printf("\n\t|||\t                                        |||||||------->");
    SetColor(43);
    printf("\n\t|||\t3--->Drinks\t\t\t|||||||<-------");
     SetColor(44);
    printf("\n\t|||\t                                        |||||||------->");
    printf("\n\t|||\t                                        |||||||------->");
        SetColor(43);
    printf("\n\t|||\t4--->Soft-Drinks\t\t|||||||<-------");
     SetColor(44);
    printf("\n\t|||\t                                        |||||||------->");
    printf("\n\t|||\t                                        |||||||------->");
        SetColor(42);
    printf("\n\t|||\t5--->View all\t\t\t|||||||<-------");
     SetColor(44);
    printf("\n\t|||\t                                        |||||||------->");
    printf("\n\t|||\t                                        |||||||------->");
        SetColor(43);
    printf("\n\t|||\t6--->Back\t\t\t|||||||------->");
     SetColor(44);
    printf("\n\t|||\t                                        |||||||------->");
    printf("\n\t|||\t                                        |||||||------->");
     SetColor(46);
    printf("\n<--------------------------------------------------------------------->\n\n\n");
        SetColor(41);
    printf("\n\t.......press ESC to main menu.....");
                                                      if(getch()==13)
                                                {
                                                    system("cls");
                                                        orderall();

                                                }
                                            }
                                                                                        if(pati==6)
                                            {
                                                      system("cls");
    SetColor(46);
    printf("\n<--------------------------------------------------------------------->");
     SetColor(44);
    printf("\n\t|||\t                                       \t|||||||------->");
    printf("\n\t|||\t                                        |||||||------->");
      SetColor(43);
    printf("\n\t|||\t1--->Veg Items       \t\t|||||||<-------");
     SetColor(44);
    printf("\n\t|||\t                                        |||||||------->");
    printf("\n\t|||\t                                        |||||||");
    SetColor(43);
    printf("\n\t|||\t2--->Non-veg Items\t\t|||||||<-------");
     SetColor(44);
    printf("\n\t|||\t                                        |||||||------->");
    printf("\n\t|||\t                                        |||||||------->");
    SetColor(43);
    printf("\n\t|||\t3--->Drinks\t\t\t|||||||<-------");
     SetColor(44);
    printf("\n\t|||\t                                        |||||||------->");
    printf("\n\t|||\t                                        |||||||------->");
        SetColor(43);
    printf("\n\t|||\t4--->Soft-Drinks\t\t|||||||<-------");
     SetColor(44);
    printf("\n\t|||\t                                        |||||||------->");
    printf("\n\t|||\t                                        |||||||------->");
        SetColor(43);
    printf("\n\t|||\t5--->View all\t\t\t|||||||<-------");
     SetColor(44);
    printf("\n\t|||\t                                        |||||||------->");
    printf("\n\t|||\t                                        |||||||------->");
        SetColor(42);
    printf("\n\t|||\t6--->Back\t\t\t|||||||------->");
     SetColor(44);
    printf("\n\t|||\t                                        |||||||------->");
    printf("\n\t|||\t                                        |||||||------->");
     SetColor(46);
    printf("\n<--------------------------------------------------------------------->\n\n\n");
        SetColor(41);
    printf("\n\t.......press ESC to main menu.....");
                                                if(getch()==13)
                                                    cr();
                                            }
                                            if(pati==0 || pati==-1)
                                            {
                                                pati=6;
                                                                                                      system("cls");
    SetColor(46);
    printf("\n<--------------------------------------------------------------------->");
     SetColor(44);
    printf("\n\t|||\t                                       \t|||||||------->");
    printf("\n\t|||\t                                        |||||||------->");
      SetColor(43);
    printf("\n\t|||\t1--->Veg Items       \t\t|||||||<-------");
     SetColor(44);
    printf("\n\t|||\t                                        |||||||------->");
    printf("\n\t|||\t                                        |||||||");
    SetColor(43);
    printf("\n\t|||\t2--->Non-veg Items\t\t|||||||<-------");
     SetColor(44);
    printf("\n\t|||\t                                        |||||||------->");
    printf("\n\t|||\t                                        |||||||------->");
    SetColor(43);
    printf("\n\t|||\t3--->Drinks\t\t\t|||||||<-------");
     SetColor(44);
    printf("\n\t|||\t                                        |||||||------->");
    printf("\n\t|||\t                                        |||||||------->");
        SetColor(43);
    printf("\n\t|||\t4--->Soft-Drinks\t\t|||||||<-------");
     SetColor(44);
    printf("\n\t|||\t                                        |||||||------->");
    printf("\n\t|||\t                                        |||||||------->");
        SetColor(43);
    printf("\n\t|||\t5--->View all\t\t\t|||||||<-------");
     SetColor(44);
    printf("\n\t|||\t                                        |||||||------->");
    printf("\n\t|||\t                                        |||||||------->");
        SetColor(42);
    printf("\n\t|||\t6--->Back\t\t\t|||||||------->");
     SetColor(44);
    printf("\n\t|||\t                                        |||||||------->");
    printf("\n\t|||\t                                        |||||||------->");
     SetColor(46);
    printf("\n<--------------------------------------------------------------------->\n\n\n");
        SetColor(41);
    printf("\n\t.......press ESC to main menu.....");
                                                if(getch()==13)
                                                    cr();
                                            }
                                            break;
    case ESC_KEY:  menu();
                                break;
    }
    }
    }

void cr()
{
    system("cls");
    SetColor(46);
    printf("\n<--------------------------------------------------------------------->");
     SetColor(44);
    printf("\n\t|||\t                                       \t|||||||------->");
    printf("\n\t|||\t                                        |||||||------->");
      SetColor(43);
    printf("\n\t|||\t1--->Order Details       \t\t|||||||------->");
     SetColor(44);
    printf("\n\t|||\t                                        |||||||------->");
    printf("\n\t|||\t                                        |||||||");
    SetColor(43);
    printf("\n\t|||\t2--->Customer Details\t\t\t|||||||------->");
     SetColor(44);
    printf("\n\t|||\t                                        |||||||------->");
    printf("\n\t|||\t                                        |||||||------->");
     SetColor(46);
    printf("\n<--------------------------------------------------------------------->\n\n\n");
        SetColor(41);
    printf("\n\t.......press ESC to main menu.....");
    int fuck=0;
    int suck=0;
    while(1)
    {
        fuck=0;
    switch((fuck=getch()))
    {
        case KEY_DOWN : suck++;
                                            if(suck==1)
                                            {
                                                    system("cls");
    SetColor(46);
    printf("\n<--------------------------------------------------------------------->");
     SetColor(44);
    printf("\n\t|||\t                                       \t|||||||------->");
    printf("\n\t|||\t                                        |||||||------->");
      SetColor(42);
    printf("\n\t|||\t1--->Order Details       \t\t|||||||------->");
     SetColor(44);
    printf("\n\t|||\t                                        |||||||------->");
    printf("\n\t|||\t                                        |||||||");
    SetColor(43);
    printf("\n\t|||\t2--->Customer Details\t\t\t|||||||------->");
     SetColor(44);
    printf("\n\t|||\t                                        |||||||------->");
    printf("\n\t|||\t                                        |||||||------->");
     SetColor(46);
    printf("\n<--------------------------------------------------------------------->\n\n\n");
        SetColor(41);
    printf("\n\t.......press ESC to main menu.....");
    if(getch()==13)
        orderdetails();
                                            }
                                                                                        if(suck==2)
                                            {
                                                    system("cls");
    SetColor(46);
    printf("\n<--------------------------------------------------------------------->");
     SetColor(44);
    printf("\n\t|||\t                                       \t|||||||------->");
    printf("\n\t|||\t                                        |||||||------->");
      SetColor(43);
    printf("\n\t|||\t1--->Order Details       \t\t|||||||------->");
     SetColor(44);
    printf("\n\t|||\t                                        |||||||------->");
    printf("\n\t|||\t                                        |||||||");
    SetColor(42);
    printf("\n\t|||\t2--->Customer Details\t\t\t|||||||------->");
     SetColor(44);
    printf("\n\t|||\t                                        |||||||------->");
    printf("\n\t|||\t                                        |||||||------->");
     SetColor(46);
    printf("\n<--------------------------------------------------------------------->\n\n\n");
        SetColor(41);
    printf("\n\t.......press ESC to main menu.....");
       if(getch()==13)
        cusrec();
                                            }
                                            if(suck==3)
                                            {
                                                suck=1;
                                                    system("cls");
    SetColor(46);
    printf("\n<--------------------------------------------------------------------->");
     SetColor(44);
    printf("\n\t|||\t                                       \t|||||||------->");
    printf("\n\t|||\t                                        |||||||------->");
      SetColor(42);
    printf("\n\t|||\t1--->Order Details       \t\t|||||||------->");
     SetColor(44);
    printf("\n\t|||\t                                        |||||||------->");
    printf("\n\t|||\t                                        |||||||");
    SetColor(43);
    printf("\n\t|||\t2--->Customer Details\t\t\t|||||||------->");
     SetColor(44);
    printf("\n\t|||\t                                        |||||||------->");
    printf("\n\t|||\t                                        |||||||------->");
     SetColor(46);
    printf("\n<--------------------------------------------------------------------->\n\n\n");
        SetColor(41);
    printf("\n\t.......press ESC to main menu.....");
           if(getch()==13)
        orderdetails();

                                            }
                                            break;
    case KEY_UP:             suck--;
                                                                    if(suck==1)
                                            {
                                                    system("cls");
    SetColor(46);
    printf("\n<--------------------------------------------------------------------->");
     SetColor(44);
    printf("\n\t|||\t                                       \t|||||||------->");
    printf("\n\t|||\t                                        |||||||------->");
      SetColor(42);
    printf("\n\t|||\t1--->Order Details       \t\t|||||||------->");
     SetColor(44);
    printf("\n\t|||\t                                        |||||||------->");
    printf("\n\t|||\t                                        |||||||");
    SetColor(43);
    printf("\n\t|||\t2--->Customer Details\t\t\t|||||||------->");
     SetColor(44);
    printf("\n\t|||\t                                        |||||||------->");
    printf("\n\t|||\t                                        |||||||------->");
     SetColor(46);
    printf("\n<--------------------------------------------------------------------->\n\n\n");
        SetColor(41);
    printf("\n\t.......press ESC to main menu.....");
           if(getch()==13)
        orderdetails();
                                            }
                                                                                        if(suck==2)
                                            {
                                                    system("cls");
    SetColor(46);
    printf("\n<--------------------------------------------------------------------->");
     SetColor(44);
    printf("\n\t|||\t                                       \t|||||||------->");
    printf("\n\t|||\t                                        |||||||------->");
      SetColor(43);
    printf("\n\t|||\t1--->Order Details       \t\t|||||||------->");
     SetColor(44);
    printf("\n\t|||\t                                        |||||||------->");
    printf("\n\t|||\t                                        |||||||");
    SetColor(42);
    printf("\n\t|||\t2--->Customer Details\t\t\t|||||||------->");
     SetColor(44);
    printf("\n\t|||\t                                        |||||||------->");
    printf("\n\t|||\t                                        |||||||------->");
     SetColor(46);
    printf("\n<--------------------------------------------------------------------->\n\n\n");
        SetColor(41);
    printf("\n\t.......press ESC to main menu.....");
           if(getch()==13)
        cusrec();
                                            }
                                            if(suck==0)
                                            {
                                                                                           suck=2;

                                                    system("cls");
    SetColor(46);
    printf("\n<--------------------------------------------------------------------->");
     SetColor(44);
    printf("\n\t|||\t                                       \t|||||||------->");
    printf("\n\t|||\t                                        |||||||------->");
      SetColor(43);
    printf("\n\t|||\t1--->Order Details       \t\t|||||||------->");
     SetColor(44);
    printf("\n\t|||\t                                        |||||||------->");
    printf("\n\t|||\t                                        |||||||");
    SetColor(42);
    printf("\n\t|||\t2--->Customer Details\t\t\t|||||||------->");
     SetColor(44);
    printf("\n\t|||\t                                        |||||||------->");
    printf("\n\t|||\t                                        |||||||------->");
     SetColor(46);
    printf("\n<--------------------------------------------------------------------->\n\n\n");
    SetColor(41);
    printf("\n\t.......press ESC to main menu.....");
           if(getch()==13)
        cusrec();

                                            }
                                            break;
    case ESC_KEY: menu();
                                break;
    }
    }

}


void menu()
{
    int blr=0;
    system("title BISWA DHABA");
    system("mode 1000");
    int khabar;
    system("cls");
system("color a");
SetColorAndBackground(44,0);
printf("\n");
printf("      %c\t\t\t\t\t\t\t \t  %c",30,30);
printf("\n      |\t\t\t\t\t\t\t\t  |");
printf("\n   <----------------------------------------------------------------->");
printf("\n      ||---------------------------------------------------------||");
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n");
printf("      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(42,0);
printf("\n");
SetColorAndBackground(44,0);
printf("      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("\t\t\t\t\t\t\t");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(43,0);
printf("\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 BISWA DHABA \xB2\xB2\xB2\xB2\xB2\xB2\xB2\t");
SetColorAndBackground(42,0);
printf("\t\t|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("\t\t\t\t\t\t\t");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
printf("\n      ||\t\t\t\t\t\t\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
printf("\t");
SetColor(42);
printf("1.ORDER SECTION   (COUNTER - 1)");
SetColor(44);
printf("\t\t");
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(46);
printf("\t2.CUPON SECTION   (COUNTER - 2)\t\t");
SetColor(44);
printf("\t ||");
SetColor(44);
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(45);
printf("\t3.BILLING SECTION (COUNTER - 3)\t\t");
SetColor(44);
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(6);
printf("\t4.CUSTOMER RECORDS   \t\t\t");
SetColor(44);
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(55);
printf("\t5.Exit\t\t\t");
SetColor(44);
printf("\t\t   \t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(42);
printf("---------------------------------------------------------");
SetColor(44);
printf("||");
SetColor(44);
printf("\n      ||");
SetColor(42);
printf("---------------------------------------------------------");
SetColor(44);
printf("||");
printf("\n      ||");
SetColor(44);
printf("---------------------------------------------------------");
printf("||");
printf("\n   <----------------------------------------------------------------->");
printf("\n");
printf("      |\t\t\t\t\t\t\t\t  |",94);
printf("\n      %c\t\t\t\t\t\t\t\t  %c",31,31);
SetColor(46);
printf("\n\t    Press  Esc _key to refresh..(one or two times)");
    while(1)
    {

    khabar=0;


switch((khabar=getch()))
{
    case KEY_DOWN:              blr++;
                                       if(blr==1)
{
 system("cls");
system("color a");
SetColorAndBackground(44,0);
printf("\n");
printf("      %c\t\t\t\t\t\t\t \t  %c",30,30);
printf("\n      |\t\t\t\t\t\t\t\t  |");
printf("\n   <----------------------------------------------------------------->");
printf("\n      ||---------------------------------------------------------||");
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n");
printf("      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(42,0);
printf("\n");
SetColorAndBackground(44,0);
printf("      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("\t\t\t\t\t\t\t");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(43,0);
printf("\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 BISWA DHABA \xB2\xB2\xB2\xB2\xB2\xB2\xB2\t");
SetColorAndBackground(42,0);
printf("\t\t|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("\t\t\t\t\t\t\t");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
printf("\n      ||\t\t\t\t\t\t\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
printf("  ---> ");
SetColor(42);
printf("1.ORDER SECTION   (COUNTER - 1)");
SetColor(44);
printf("\t\t");
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(46);
printf("\t2.CUPON SECTION   (COUNTER - 2)\t\t");
SetColor(44);
printf("\t ||");
SetColor(44);
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(45);
printf("\t3.BILLING SECTION (COUNTER - 3)\t\t");
SetColor(44);
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(6);
printf("\t4.CUSTOMER RECORDS   \t\t\t");
SetColor(44);
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(55);
printf("\t5.Exit\t\t\t");
SetColor(44);
printf("\t\t   \t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(42);
printf("---------------------------------------------------------");
SetColor(44);
printf("||");
SetColor(44);
printf("\n      ||");
SetColor(42);
printf("---------------------------------------------------------");
SetColor(44);
printf("||");
printf("\n      ||");
SetColor(44);
printf("---------------------------------------------------------");
printf("||");
printf("\n   <----------------------------------------------------------------->");
printf("\n");
printf("      |\t\t\t\t\t\t\t\t  |",94);
printf("\n      %c\t\t\t\t\t\t\t\t  %c",31,31);
if(getch()==13)
counter1();
}
  if(blr==2)
{
 system("cls");
system("color a");
SetColorAndBackground(44,0);
printf("\n");
printf("      %c\t\t\t\t\t\t\t \t  %c",30,30);
printf("\n      |\t\t\t\t\t\t\t\t  |");
printf("\n   <----------------------------------------------------------------->");
printf("\n      ||---------------------------------------------------------||");
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n");
printf("      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(42,0);
printf("\n");
SetColorAndBackground(44,0);
printf("      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("\t\t\t\t\t\t\t");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(43,0);
printf("\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 BISWA DHABA \xB2\xB2\xB2\xB2\xB2\xB2\xB2\t");
SetColorAndBackground(42,0);
printf("\t\t|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("\t\t\t\t\t\t\t");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
printf("\n      ||\t\t\t\t\t\t\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColorAndBackground(47,0);
printf("\t1.ORDER SECTION   (COUNTER - 1)\t\t");
SetColor(44);
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
printf("  ---> ");
SetColor(43);
printf("2.CUPON SECTION   (COUNTER - 2)\t\t");
SetColor(44);
printf("\t ||");
SetColor(44);
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(45);
printf("\t3.BILLING SECTION (COUNTER - 3)\t\t");
SetColor(44);
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(6);
printf("\t4.CUSTOMER RECORDS   \t\t\t");
SetColor(44);
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(55);
printf("\t5.Exit\t\t\t");
SetColor(44);
printf("\t\t   \t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(42);
printf("---------------------------------------------------------");
SetColor(44);
printf("||");
SetColor(44);
printf("\n      ||");
SetColor(42);
printf("---------------------------------------------------------");
SetColor(44);
printf("||");
printf("\n      ||");
SetColor(44);
printf("---------------------------------------------------------");
printf("||");
printf("\n   <----------------------------------------------------------------->");
printf("\n");
printf("      |\t\t\t\t\t\t\t\t  |",94);
printf("\n      %c\t\t\t\t\t\t\t\t  %c",31,31);
if(getch()==13)
counter2();
}
          if(blr==3)
{
 system("cls");
system("color a");
SetColorAndBackground(44,0);
printf("\n");
printf("      %c\t\t\t\t\t\t\t \t  %c",30,30);
printf("\n      |\t\t\t\t\t\t\t\t  |");
printf("\n   <----------------------------------------------------------------->");
printf("\n      ||---------------------------------------------------------||");
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n");
printf("      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(42,0);
printf("\n");
SetColorAndBackground(44,0);
printf("      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("\t\t\t\t\t\t\t");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(43,0);
printf("\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 BISWA DHABA \xB2\xB2\xB2\xB2\xB2\xB2\xB2\t");
SetColorAndBackground(42,0);
printf("\t\t|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("\t\t\t\t\t\t\t");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
printf("\n      ||\t\t\t\t\t\t\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColorAndBackground(47,0);
printf("\t1.ORDER SECTION   (COUNTER - 1)\t\t");
SetColor(44);
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColorAndBackground(46,0);
printf("\t2.CUPON SECTION   (COUNTER - 2)\t\t");
SetColor(44);
printf("\t ||");
SetColor(44);
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
printf("  ---> ");
SetColor(43);
printf("3.BILLING SECTION (COUNTER - 3)\t\t");
SetColor(44);
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(6);
printf("\t4.CUSTOMER RECORDS   \t\t\t");
SetColor(44);
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(55);
printf("\t5.Exit\t\t\t");
SetColor(44);
printf("\t\t   \t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(42);
printf("---------------------------------------------------------");
SetColor(44);
printf("||");
SetColor(44);
printf("\n      ||");
SetColor(42);
printf("---------------------------------------------------------");
SetColor(44);
printf("||");
printf("\n      ||");
SetColor(44);
printf("---------------------------------------------------------");
printf("||");
printf("\n   <----------------------------------------------------------------->");
printf("\n");
printf("      |\t\t\t\t\t\t\t\t  |",94);
printf("\n      %c\t\t\t\t\t\t\t\t  %c",31,31);
if(getch()==13)
counter3();
}
      if(blr==4)
{
 system("cls");
system("color a");
SetColorAndBackground(44,0);
printf("\n");
printf("      %c\t\t\t\t\t\t\t \t  %c",30,30);
printf("\n      |\t\t\t\t\t\t\t\t  |");
printf("\n   <----------------------------------------------------------------->");
printf("\n      ||---------------------------------------------------------||");
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n");
printf("      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(42,0);
printf("\n");
SetColorAndBackground(44,0);
printf("      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("\t\t\t\t\t\t\t");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(43,0);
printf("\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 BISWA DHABA \xB2\xB2\xB2\xB2\xB2\xB2\xB2\t");
SetColorAndBackground(42,0);
printf("\t\t|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("\t\t\t\t\t\t\t");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
printf("\n      ||\t\t\t\t\t\t\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColorAndBackground(47,0);
printf("\t1.ORDER SECTION   (COUNTER - 1)\t\t");
SetColor(44);
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColorAndBackground(46,0);
printf("\t2.CUPON SECTION   (COUNTER - 2)\t\t");
SetColor(44);
printf("\t ||");
SetColor(44);
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColorAndBackground(45,0);
printf("\t3.BILLING SECTION (COUNTER - 3)\t\t");
SetColor(44);
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
printf("  ---> ");
SetColor(43);
printf("4.CUSTOMER RECORDS   \t\t\t");
SetColor(44);
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColorAndBackground(55,0);
printf("\t5.Exit\t\t\t");
SetColor(44);
printf("\t\t   \t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(42);
printf("---------------------------------------------------------");
SetColor(44);
printf("||");
SetColor(44);
printf("\n      ||");
SetColor(42);
printf("---------------------------------------------------------");
SetColor(44);
printf("||");
printf("\n      ||");
SetColor(44);
printf("---------------------------------------------------------");
printf("||");
printf("\n   <----------------------------------------------------------------->");
printf("\n");
printf("      |\t\t\t\t\t\t\t\t  |",94);
printf("\n      %c\t\t\t\t\t\t\t\t  %c",31,31);
if(getch()==13)
cr();
}
 if(blr==5)
{
 system("cls");
system("color a");
SetColorAndBackground(44,0);
printf("\n");
printf("      %c\t\t\t\t\t\t\t \t  %c",30,30);
printf("\n      |\t\t\t\t\t\t\t\t  |");
printf("\n   <----------------------------------------------------------------->");
printf("\n      ||---------------------------------------------------------||");
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n");
printf("      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(42,0);
printf("\n");
SetColorAndBackground(44,0);
printf("      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("\t\t\t\t\t\t\t");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(43,0);
printf("\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 BISWA DHABA \xB2\xB2\xB2\xB2\xB2\xB2\xB2\t");
SetColorAndBackground(42,0);
printf("\t\t|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("\t\t\t\t\t\t\t");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
printf("\n      ||\t\t\t\t\t\t\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColorAndBackground(47,0);
printf("\t1.ORDER SECTION   (COUNTER - 1)\t\t");
SetColor(44);
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColorAndBackground(46,0);
printf("\t2.CUPON SECTION   (COUNTER - 2)\t\t");
SetColor(44);
printf("\t ||");
SetColor(44);
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColorAndBackground(45,0);
printf("\t3.BILLING SECTION (COUNTER - 3)\t\t");
SetColor(44);
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColorAndBackground(6,0);
printf("\t4.CUSTOMER RECORDS   \t\t\t");
SetColor(44);
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
printf("  ---> ");
SetColor(43);
printf("5.Exit\t\t\t");
SetColor(44);
printf("\t\t   \t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(42);
printf("---------------------------------------------------------");
SetColor(44);
printf("||");
SetColor(44);
printf("\n      ||");
SetColor(42);
printf("---------------------------------------------------------");
SetColor(44);
printf("||");
printf("\n      ||");
SetColor(44);
printf("---------------------------------------------------------");
printf("||");
printf("\n   <----------------------------------------------------------------->");
printf("\n");
printf("      |\t\t\t\t\t\t\t\t  |",94);
printf("\n      %c\t\t\t\t\t\t\t\t  %c",31,31);
if(getch()==13)
{
                   SetColor(43);
                    system("cls");
                    printf("\n\n\n\n\n\t\tTHIS SITE IS DEVLOPED BY ME (........BISWA......)\n\n\n\n\n");
                    exit(0);
                    break;
}

}
if(blr==6)
{
    blr=1;
    system("cls");
system("color a");
SetColorAndBackground(44,0);
printf("\n");
printf("      %c\t\t\t\t\t\t\t \t  %c",30,30);
printf("\n      |\t\t\t\t\t\t\t\t  |");
printf("\n   <----------------------------------------------------------------->");
printf("\n      ||---------------------------------------------------------||");
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n");
printf("      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(42,0);
printf("\n");
SetColorAndBackground(44,0);
printf("      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("\t\t\t\t\t\t\t");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(43,0);
printf("\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 BISWA DHABA \xB2\xB2\xB2\xB2\xB2\xB2\xB2\t");
SetColorAndBackground(42,0);
printf("\t\t|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("\t\t\t\t\t\t\t");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
printf("\n      ||\t\t\t\t\t\t\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
printf("  ---> ");
SetColor(43);
printf("1.ORDER SECTION   (COUNTER - 1)");
SetColor(44);
printf("\t\t");
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(46);
printf("\t2.CUPON SECTION   (COUNTER - 2)\t\t");
SetColor(44);
printf("\t ||");
SetColor(44);
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(45);
printf("\t3.BILLING SECTION (COUNTER - 3)\t\t");
SetColor(44);
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(6);
printf("\t4.CUSTOMER RECORDS   \t\t\t");
SetColor(44);
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(55);
printf("\t5.Exit\t\t\t");
SetColor(44);
printf("\t\t   \t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(42);
printf("---------------------------------------------------------");
SetColor(44);
printf("||");
SetColor(44);
printf("\n      ||");
SetColor(42);
printf("---------------------------------------------------------");
SetColor(44);
printf("||");
printf("\n      ||");
SetColor(44);
printf("---------------------------------------------------------");
printf("||");
printf("\n   <----------------------------------------------------------------->");
printf("\n");
printf("      |\t\t\t\t\t\t\t\t  |",94);
printf("\n      %c\t\t\t\t\t\t\t\t  %c",31,31);
if(getch()==13)
    counter1();
}

break;

    case KEY_UP:      blr--;

                                             if(blr==1)
{
 system("cls");
system("color a");
SetColorAndBackground(44,0);
printf("\n");
printf("      %c\t\t\t\t\t\t\t \t  %c",30,30);
printf("\n      |\t\t\t\t\t\t\t\t  |");
printf("\n   <----------------------------------------------------------------->");
printf("\n      ||---------------------------------------------------------||");
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n");
printf("      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(42,0);
printf("\n");
SetColorAndBackground(44,0);
printf("      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("\t\t\t\t\t\t\t");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(43,0);
printf("\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 BISWA DHABA \xB2\xB2\xB2\xB2\xB2\xB2\xB2\t");
SetColorAndBackground(42,0);
printf("\t\t|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("\t\t\t\t\t\t\t");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
printf("\n      ||\t\t\t\t\t\t\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
printf("  ---> ");
SetColor(43);
printf("1.ORDER SECTION   (COUNTER - 1)");
SetColor(44);
printf("\t\t");
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(46);
printf("\t2.CUPON SECTION   (COUNTER - 2)\t\t");
SetColor(44);
printf("\t ||");
SetColor(44);
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(45);
printf("\t3.BILLING SECTION (COUNTER - 3)\t\t");
SetColor(44);
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(6);
printf("\t4.CUSTOMER RECORDS   \t\t\t");
SetColor(44);
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(55);
printf("\t5.Exit\t\t\t");
SetColor(44);
printf("\t\t   \t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(42);
printf("---------------------------------------------------------");
SetColor(44);
printf("||");
SetColor(44);
printf("\n      ||");
SetColor(42);
printf("---------------------------------------------------------");
SetColor(44);
printf("||");
printf("\n      ||");
SetColor(44);
printf("---------------------------------------------------------");
printf("||");
printf("\n   <----------------------------------------------------------------->");
printf("\n");
printf("      |\t\t\t\t\t\t\t\t  |",94);
printf("\n      %c\t\t\t\t\t\t\t\t  %c",31,31);
if(getch()==13)
counter1();
}
  if(blr==2)
{
 system("cls");
system("color a");
SetColorAndBackground(44,0);
printf("\n");
printf("      %c\t\t\t\t\t\t\t \t  %c",30,30);
printf("\n      |\t\t\t\t\t\t\t\t  |");
printf("\n   <----------------------------------------------------------------->");
printf("\n      ||---------------------------------------------------------||");
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n");
printf("      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(42,0);
printf("\n");
SetColorAndBackground(44,0);
printf("      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("\t\t\t\t\t\t\t");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(43,0);
printf("\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 BISWA DHABA \xB2\xB2\xB2\xB2\xB2\xB2\xB2\t");
SetColorAndBackground(42,0);
printf("\t\t|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("\t\t\t\t\t\t\t");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
printf("\n      ||\t\t\t\t\t\t\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColorAndBackground(47,0);
printf("\t1.ORDER SECTION   (COUNTER - 1)\t\t");
SetColor(44);
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
printf("  ---> ");
SetColor(43);
printf("2.CUPON SECTION   (COUNTER - 2)\t\t");
SetColor(44);
printf("\t ||");
SetColor(44);
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(45);
printf("\t3.BILLING SECTION (COUNTER - 3)\t\t");
SetColor(44);
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(6);
printf("\t4.CUSTOMER RECORDS   \t\t\t");
SetColor(44);
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(55);
printf("\t5.Exit\t\t\t");
SetColor(44);
printf("\t\t   \t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(42);
printf("---------------------------------------------------------");
SetColor(44);
printf("||");
SetColor(44);
printf("\n      ||");
SetColor(42);
printf("---------------------------------------------------------");
SetColor(44);
printf("||");
printf("\n      ||");
SetColor(44);
printf("---------------------------------------------------------");
printf("||");
printf("\n   <----------------------------------------------------------------->");
printf("\n");
printf("      |\t\t\t\t\t\t\t\t  |",94);
printf("\n      %c\t\t\t\t\t\t\t\t  %c",31,31);
if(getch()==13)
counter2();
}
          if(blr==3)
{
 system("cls");
system("color a");
SetColorAndBackground(44,0);
printf("\n");
printf("      %c\t\t\t\t\t\t\t \t  %c",30,30);
printf("\n      |\t\t\t\t\t\t\t\t  |");
printf("\n   <----------------------------------------------------------------->");
printf("\n      ||---------------------------------------------------------||");
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n");
printf("      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(42,0);
printf("\n");
SetColorAndBackground(44,0);
printf("      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("\t\t\t\t\t\t\t");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(43,0);
printf("\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 BISWA DHABA \xB2\xB2\xB2\xB2\xB2\xB2\xB2\t");
SetColorAndBackground(42,0);
printf("\t\t|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("\t\t\t\t\t\t\t");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
printf("\n      ||\t\t\t\t\t\t\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColorAndBackground(47,0);
printf("\t1.ORDER SECTION   (COUNTER - 1)\t\t");
SetColor(44);
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColorAndBackground(46,0);
printf("\t2.CUPON SECTION   (COUNTER - 2)\t\t");
SetColor(44);
printf("\t ||");
SetColor(44);
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
printf("  ---> ");
SetColor(43);
printf("3.BILLING SECTION (COUNTER - 3)\t\t");
SetColor(44);
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(6);
printf("\t4.CUSTOMER RECORDS   \t\t\t");
SetColor(44);
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(55);
printf("\t5.Exit\t\t\t");
SetColor(44);
printf("\t\t   \t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(42);
printf("---------------------------------------------------------");
SetColor(44);
printf("||");
SetColor(44);
printf("\n      ||");
SetColor(42);
printf("---------------------------------------------------------");
SetColor(44);
printf("||");
printf("\n      ||");
SetColor(44);
printf("---------------------------------------------------------");
printf("||");
printf("\n   <----------------------------------------------------------------->");
printf("\n");
printf("      |\t\t\t\t\t\t\t\t  |",94);
printf("\n      %c\t\t\t\t\t\t\t\t  %c",31,31);
if(getch()==13)
counter3();
}
      if(blr==4)
{
 system("cls");
system("color a");
SetColorAndBackground(44,0);
printf("\n");
printf("      %c\t\t\t\t\t\t\t \t  %c",30,30);
printf("\n      |\t\t\t\t\t\t\t\t  |");
printf("\n   <----------------------------------------------------------------->");
printf("\n      ||---------------------------------------------------------||");
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n");
printf("      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(42,0);
printf("\n");
SetColorAndBackground(44,0);
printf("      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("\t\t\t\t\t\t\t");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(43,0);
printf("\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 BISWA DHABA \xB2\xB2\xB2\xB2\xB2\xB2\xB2\t");
SetColorAndBackground(42,0);
printf("\t\t|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("\t\t\t\t\t\t\t");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
printf("\n      ||\t\t\t\t\t\t\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColorAndBackground(47,0);
printf("\t1.ORDER SECTION   (COUNTER - 1)\t\t");
SetColor(44);
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColorAndBackground(46,0);
printf("\t2.CUPON SECTION   (COUNTER - 2)\t\t");
SetColor(44);
printf("\t ||");
SetColor(44);
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColorAndBackground(45,0);
printf("\t3.BILLING SECTION (COUNTER - 3)\t\t");
SetColor(44);
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
printf("  ---> ");
SetColor(43);
printf("4.CUSTOMER RECORDS   \t\t\t");
SetColor(44);
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColorAndBackground(55,0);
printf("\t5.Exit\t\t\t");
SetColor(44);
printf("\t\t   \t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(42);
printf("---------------------------------------------------------");
SetColor(44);
printf("||");
SetColor(44);
printf("\n      ||");
SetColor(42);
printf("---------------------------------------------------------");
SetColor(44);
printf("||");
printf("\n      ||");
SetColor(44);
printf("---------------------------------------------------------");
printf("||");
printf("\n   <----------------------------------------------------------------->");
printf("\n");
printf("      |\t\t\t\t\t\t\t\t  |",94);
printf("\n      %c\t\t\t\t\t\t\t\t  %c",31,31);
if(getch()==13)
cr();
}
 if(blr==5)
{
 system("cls");
system("color a");
SetColorAndBackground(44,0);
printf("\n");
printf("      %c\t\t\t\t\t\t\t \t  %c",30,30);
printf("\n      |\t\t\t\t\t\t\t\t  |");
printf("\n   <----------------------------------------------------------------->");
printf("\n      ||---------------------------------------------------------||");
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n");
printf("      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(42,0);
printf("\n");
SetColorAndBackground(44,0);
printf("      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("\t\t\t\t\t\t\t");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(43,0);
printf("\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 BISWA DHABA \xB2\xB2\xB2\xB2\xB2\xB2\xB2\t");
SetColorAndBackground(42,0);
printf("\t\t|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("\t\t\t\t\t\t\t");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
printf("\n      ||\t\t\t\t\t\t\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColorAndBackground(47,0);
printf("\t1.ORDER SECTION   (COUNTER - 1)\t\t");
SetColor(44);
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColorAndBackground(46,0);
printf("\t2.CUPON SECTION   (COUNTER - 2)\t\t");
SetColor(44);
printf("\t ||");
SetColor(44);
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColorAndBackground(45,0);
printf("\t3.BILLING SECTION (COUNTER - 3)\t\t");
SetColor(44);
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColorAndBackground(6,0);
printf("\t4.CUSTOMER RECORDS   \t\t\t");
SetColor(44);
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
printf("  ---> ");
SetColor(43);
printf("5.Exit\t\t\t");
SetColor(44);
printf("\t\t   \t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(42);
printf("---------------------------------------------------------");
SetColor(44);
printf("||");
SetColor(44);
printf("\n      ||");
SetColor(42);
printf("---------------------------------------------------------");
SetColor(44);
printf("||");
printf("\n      ||");
SetColor(44);
printf("---------------------------------------------------------");
printf("||");
printf("\n   <----------------------------------------------------------------->");
printf("\n");
printf("      |\t\t\t\t\t\t\t\t  |",94);
printf("\n      %c\t\t\t\t\t\t\t\t  %c",31,31);
if(getch()==13)
{
                   SetColor(43);
                    system("cls");
                    printf("\n\n\n\n\n\t\tTHIS SITE IS DEVLOPED BY ME (........BISWA......)\n\n\n\n\n");
                    exit(0);

}

}

if(blr==0 || blr==-1)
{
    blr=5;
system("cls");
system("color a");
SetColorAndBackground(44,0);
printf("\n");
printf("      %c\t\t\t\t\t\t\t \t  %c",30,30);
printf("\n      |\t\t\t\t\t\t\t\t  |");
printf("\n   <----------------------------------------------------------------->");
printf("\n      ||---------------------------------------------------------||");
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n");
printf("      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(42,0);
printf("\n");
SetColorAndBackground(44,0);
printf("      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("\t\t\t\t\t\t\t");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(43,0);
printf("\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 BISWA DHABA \xB2\xB2\xB2\xB2\xB2\xB2\xB2\t");
SetColorAndBackground(42,0);
printf("\t\t|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("\t\t\t\t\t\t\t");
SetColorAndBackground(42,0);
printf("|");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
SetColorAndBackground(44,0);
printf("\n      ||");
SetColorAndBackground(42,0);
printf("---------------------------------------------------------");
SetColorAndBackground(44,0);
printf("||");
printf("\n      ||\t\t\t\t\t\t\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(42);
printf("\t1.ORDER SECTION   (COUNTER - 1)");
SetColor(44);
printf("\t\t");
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(46);
printf("\t2.CUPON SECTION   (COUNTER - 2)\t\t");
SetColor(44);
printf("\t ||");
SetColor(44);
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(45);
printf("\t3.BILLING SECTION (COUNTER - 3)\t\t");
SetColor(44);
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(6);
printf("\t4.CUSTOMER RECORDS   \t\t\t");
SetColor(44);
printf("\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
printf("  ---> ");
SetColor(43);
printf("5.Exit\t\t\t");
SetColor(44);
printf("\t\t   \t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
printf("\n      ||\t\t\t\t\t\t\t ||");
SetColor(44);
printf("\n      ||");
SetColor(42);
printf("---------------------------------------------------------");
SetColor(44);
printf("||");
SetColor(44);
printf("\n      ||");
SetColor(42);
printf("---------------------------------------------------------");
SetColor(44);
printf("||");
printf("\n      ||");
SetColor(44);
printf("---------------------------------------------------------");
printf("||");
printf("\n   <----------------------------------------------------------------->");
printf("\n");
printf("      |\t\t\t\t\t\t\t\t  |",94);
printf("\n      %c\t\t\t\t\t\t\t\t  %c",31,31);
}

break;
case ESC_KEY: menu();
                            break;


}
    }
}

