#include<stdio.h>
#include<conio.h>
#include<GRAPHICS.h>
#include<dos.h>
#define max 10
#include<string.h>
struct passenger
{
char FName[50];
char LName[50];
char ContactNo[12];
char Departure_Address[100];
int No_of_passenger;
char Departure_Time[10];
}detail;
struct cabs
{
char cab_name[20];
char car_no[20];
char car_type[20];
int capacity;
char Fare[20];
}cab[4];
struct driver
{
char Name[50];
char contact[12];
char License_No[20];
char car_name[20];
}drive[4];
void main()
{
int i,gd=DETECT,x,y,gm,j,m;
char ch,s[7],s1[7]={'s','t','a','r','k','\0'};
FILE *fp,*fp1,*fp3;
fp=fopen("Cabs.txt","w+");
fp1=fopen("Driver.txt","w+");
fp3=fopen("passenger.txt","w+");
struct cabs cab[4]={{"TATA Indica","RJ14 FT 6209","HatchBack",4,"7Rs/Km"},
{"TOYOTA  Etios","RJ14 FT 6309","Sedan",4,"8s/Km"},
{"Swift Dzire","RJ14 FT 6409","Sedan",4,"9Rs/Km"},
{"TOYOTA Innova","RJ14 NX 2131","Luxury",7,"13 Rs/km"}};

struct driver drive[4]={{"Ram Tiwari","9242439113","KI875KJ10","TATA Indica"},
{"Manmohan Das","9377309971","U896JYGFF","TOYOTA Etios"},
{"Shyam Lal","8793416723","IKUGYG587GH","Swift DZire"},
{"Hanuman Shah","6800493014","KJG654GJHG","TOYOTA Innova"}};
for(i=0;i<4;i++)
{
fprintf(fp,"%d\n Car Details is:-\n",i+1);
fprintf(fp,"\ncab_name:-%s\ncar_no.:-%s\ncar_type:-%s\ncapacity:-%d\nFare:-%s\n",
cab[i].cab_name,cab[i].car_no,cab[i].car_type,cab[i].capacity,cab[i].Fare);
}
for(i=0;i<4;i++)
{
fprintf(fp1,"%d\nDriver Details Are:-\n\n",i+1);
fprintf(fp1,"DriverName:-%s\nContactNo:-%s\nLicenseNo:-%s\nCar_Name:-%s\n",
drive[i].Name,drive[i].contact,drive[i].License_No,drive[i].car_name);
}

initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
setcolor(14);
x=getmaxx()/2;
y=getmaxy()/2;
for(i=0;i<=800;i=i+10)
{
setcolor(14);
rectangle(80+i,150,120+i,200);
rectangle(120+i,160,160+i,200);
circle(80+i,210,10);
circle(160+i,210,10);
outtextxy(x-150,y,"WelCome To YellowCabs");
delay(50);
cleardevice();
}
printf("login password:");
gets(s);
m=strcmp (s,s1);
if(m==0)
{
printf("access granted");
settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
setcolor(15);
outtextxy(100,200,"Press Enter to select your ride");
getch();
cleardevice();

outtextxy(0,200,"Press Respected key to choose your ride");
cleardevice();
printf("\n\n\tOur Cab Services:-\n\t0-TATA Indica\n\t1-Hyundai Etios\n\t2-Swift Dzire\n\t3-TOYOTA Innova\n");
scanf("\n%d",&ch);
cleardevice();
if(ch==0||ch==1||ch==2||ch==3)
{
cleardevice();
outtextxy(x-250,y-150,"Cab Details Are:-");
printf("\n\tCarName:-%s\n\tCarNo:-%s\n\tCarType:-%s\n\tCapacity:-%d\n\tFare:-%s\n\n\n\n",
cab[ch].cab_name,cab[ch].car_no,cab[ch].car_type,cab[ch].capacity,cab[ch].Fare);
outtextxy(x-250,y+10,"Driver Details Are:-");
printf("\n\tDriverName:-%s\n\tContactno:-%s\n\tLicenseNo.:-%s\n\tCar_Name:-%s\n",
drive[ch].Name,drive[ch].contact,drive[ch].License_No,drive[ch].car_name);
}
else
{printf("Select a Given Key\n");}
getch();
cleardevice();
outtextxy(0,0,"Press Enter To Book Your Ride");
getch();
closegraph();
clrscr();
printf("\nEnter Your FirstName:-");
scanf("%s",detail.FName);
printf("\nEnter LastName:-");
scanf("%s",detail.LName);
printf("\nEnter Contact Number:-");
scanf("%s",detail.ContactNo);
printf("\nEnter Departure Address(Without spacing):-");
scanf("%s",detail.Departure_Address);
printf("\nEnter Number Of Passenger:-");
scanf("%d",&detail.No_of_passenger);
printf("\nEnter Departure Time(Without Spacing):-");
scanf("%s",detail.Departure_Time);
fprintf(fp3,"Passenger Detail is:-\n");
fprintf(fp3,"Name:- %s %s\nContact_No:-%s\nDeparture Address:-%s\nNumber of passenger:-%d\nDeparture Time:-%s\n",
detail.FName,detail.LName,detail.ContactNo,detail.Departure_Address,detail.No_of_passenger,detail.Departure_Time);
clrscr();
if(ch==0)
{
printf("\n\n\nYour Booking details are:-\n\n");
printf("Name:-%s %s\nContactNo:-%s\nDepartureAddress:-%s\nNo of passenger:-%d\nDepartureTime:-%s\nCabBooked:-%s\nDriverName:-%s\n",
detail.FName,detail.LName,detail.ContactNo,detail.Departure_Address,
detail.No_of_passenger,detail.Departure_Time,cab[ch].cab_name,drive[ch].Name);
}
if(ch==1)
{
printf("\n\n\nYour Booking details are:-\n\n");
printf("Name:-%s %s\nContactNo:-%s\nDepartureAddress:-%s\nNo of passenger:-%d\nDepartureTime:-%s\nCabBooked:-%s\nDriverName:-%s\n",
detail.FName,detail.LName,detail.ContactNo,detail.Departure_Address,
detail.No_of_passenger,detail.Departure_Time,cab[ch].cab_name,drive[ch].Name);
}
if(ch==2)
{
printf("\n\n\nYour Booking details are:-\n\n");
printf("Name:-%s %s\nContactNo:-%s\nDepartureAddress:-%s\nNo of passenger:-%d\nDepartureTime:-%s\nCabBooked:-%s\nDriverName:-%s\n",
detail.FName,detail.LName,detail.ContactNo,detail.Departure_Address,
detail.No_of_passenger,detail.Departure_Time,cab[ch].cab_name,drive[ch].Name);
}
if(ch==3)
{
printf("\n\n\nYour Booking details are:-\n\n");
printf("Name:-%s %s\nContactNo:-%s\nDepartureAddress:-%s\nNo of passenger:-%d\nDepartureTime:-%s\nCabBooked:-%s\nDriverName:-%s\n",
detail.FName,detail.LName,
detail.ContactNo,detail.Departure_Address,
detail.No_of_passenger,detail.Departure_Time,cab[ch].cab_name,drive[ch].Name);
}
printf("\n\n\t\t\tTHANKS FOR BOOKING CAB\n");
printf("\n\t\t\t\tHAPPY JOURNEY\t\n");
}
else
printf ("access denied");
getch();
}

