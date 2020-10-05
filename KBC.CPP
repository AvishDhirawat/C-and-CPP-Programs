#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<string.h>
int main ()
{
int gd=DETECT,w,u,gm,x,y,r,i,a,o,m,ch,t,n,q,d,f,g;
char p[7],s[7],s1[7]={'p','o','r','w','a','l','\0'};
void initgraph(int *graphdriver,int *graphmode,"C:\Dev-Cpp\include");
settextstyle (DEFAULT_FONT,HORIZ_DIR,2);
x=getmaxx()/2;
y=getmaxy()/2;
setcolor (LIGHTCYAN);
for (i=0;i<20;i++)
{
circle (x,y,40+i);
delay(100);
}
setcolor (YELLOW);
outtextxy(x-25,y-8,"GKQ");
outtextxy(30,400,"WELCOME TO THE GENERAL KNOWLEDGE QUIZ");
getch();
cleardevice();
settextstyle (DEFAULT_FONT,HORIZ_DIR,2);
setcolor(LIGHTBLUE);
outtextxy(220,50,"LOGIN YOUR GKC ID");
printf ("\n\n\n\n\n\n\nenter the username:");
gets (p);
printf ("\n\n\n\n\n\nenter the password:");
gets (s);
m=strcmp(s,s1);
if (m==0)
{
printf ("YOUR ID LOGIN SUCCESSFULLY");
cleardevice();
setcolor(YELLOW);
outtextxy(150,150,"RULES FOR PLAYING GKQ");
printf("\nWe have 10 Questions are there and each have 4 options three options are wrong  and 1 option are correct.");
printf("\n\n\nIf you may have choose the wrong option you throughout to the game.");
getch();
cleardevice();
settextstyle(DEFAULT_FONT,HORIZ_DIR,3);
setcolor(14);
outtextxy(95,220,"LET'S PLAY GKQ");
settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
outtextxy(430,430,"Press 1 for ready");
scanf("%d",&ch);
cleardevice();
printf("\nQ.1 Which country ranks number one in the 2016 rio olympics medal standings?\n\n(1)CHINA\t\t\t\t(2)RUSSIA\n\n(3)UK\t\t\t\t\t(4)USA");
printf("\n\n\nchoose option:");
scanf("%d",&t);
getch();
cleardevice();
if (t==4)
{
printf("\nQ.2 Who is the author of the recently published book Final Test:Exit Sachin Tendulkar?\n\n(1)SACHIN TENDULKAR\t\t\t\t(2)DILIP D'SOUZA\n\n(3)YUVRAJ SINGH\t\t\t\t\t(4)KAPIL DEV");
scanf("%d",&q);
getch();
cleardevice();
}
if (q==2)
{
printf("\n\nQ.3 Who is the following has been selected as the horiculture ambassdor of Maharastra?\n\n(1)SHAH RUKH KHAN\t\t\t\t(2)AMIR KHAN\n\n(3)AMITABH BACHCHAN\t\t\t\t(4)SALMAN KHAN");
scanf("%d",&w);
}
if (w==3)
{
printf("\n\nQ.4 The 2016 Mountain Echoes literacy festival will be held which country?\n\n(1)NEPAL\t\t\t\t\t(2)BHUTAN\n\n(3)INDIA\t\t\t\t\t(4)MYANMAR");
scanf ("%d",&r);
}
if (r==2)
{
printf("\n\nQ.5 What is the India's ranking in the Press Freedom Index 2018?\n\n(1)121\t\t\t\t\t(2)89\n\n(3)138\t\t\t\t\t(4)76");
scanf ("%d",&u);
}
if (u==3)
{
printf("\n\nQ.6 The QIP in economy stands for?\n\n(1)Quartely Investment Programme\t(2Qualified Investment Project\n\n(3)Quality Improvement Programme\t(4)Qualified Institutional Placement");scanf("%d",&o);
}
if (o==4)
{
printf("\n\nQ.7 Humpback, pilot and blue are all types of what animals?\n\n(1)Whale\t\t\t\t(2)Camel\n\n(3)Yak\t\t\t\t\t(4)Eagle");
scanf("%d",&a);
}
if (a==1)
{
printf("\n\nQ.8 Who became the CEO of the Indian IT Company Wipro in 2016?\n\n(1)Satya Nadela\t\t\t\t(2)Abidali Neemuchwala\n\n(3)Nandan Nilekani\t\t\t(4)Sundar Pichai");
scanf("%d",&d);
}
if (d==2)
{
printf ("\n\nQ.9 Who is the founder of Amazon?\n\n(1)Jeff Bezos\t\t\t\t\t(2)Bill Gates\n\n(3)Warren Buffet\t\t\t\t(4)Mark Zuckerberg");
scanf("%d",&f);
}
if (f==1)
{
printf("\n\nQ.10 Which is the longest play by William Shakespeare?\n\n(1)Othello\t\t\t\t(2)Coriolanous\n\n(3)Richard III\t\t\t\t(4)Halmet");
scanf("%d",&g);
}
else
{
printf("Your Answer is Wrong");
getch();
cleardevice();
setcolor(14);
settextstyle(DEFAULT_FONT,HORIZ_DIR,4);
outtextxy(80,250,"You are Looser");
}
getch();
cleardevice();
if (g==4)
{
setcolor(14);
settextstyle(DEFAULT_FONT,HORIZ_DIR,4);
outtextxy(80,250,"You are winner ;)");
}
getch();
closegraph();
}
else
{
printf ("\n\n\n\n\t\t\tYOUR ID OR PASSWORD ARE INCORRECT");
}
return 0;
getch();
}
