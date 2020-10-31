#include<stdio.h>
#include<conio.h>
void design()
{int i=0,j=0;
for(i=1;i<81;i+=3)
{gotoxy(i,1);
printf("*");}
for(j=2;j<25;j++)
{gotoxy(1,j);
printf("*");}
for(i=1;i<81;i+=3)
{gotoxy(i,25);
printf("*");}
for(j=2;j<25;j++)
{gotoxy(79,j);
printf("*");}
}
void main()
{
int s;
char op;
op='y';
clrscr();
design();
gotoxy(10,10);
printf("Not your simple history ");
gotoxy(10,15);
printf("Press any key to continue");
gotoxy(10,17);
getch();

clrscr();
design();
gotoxy(5,10);
printf("I would first take a moment to thank God for making this dream a reality");
gotoxy(5,11);
printf("Currently 'Not your simple History' is still a work in progress");
gotoxy(5,12);
printf("So any types of update is all the more welcome");
gotoxy(10,20);
printf("Press any key to continue");
gotoxy(10,17);
getch();



clrscr();
design();
gotoxy(5,10);
printf("Welcome to the section 'Not Your Simple History'");
gotoxy(5,11);
printf("where we encounter incidents in the past which may/may not be available ");
gotoxy(5,12);
printf("in the history books of the present day. On introspect,");
gotoxy(5,13);
printf("Ripley's Believe it or not might have suited this section better, ");
gotoxy(5,14);
printf("but since the presentor does not have the ample time and resources ");
gotoxy(5,15);
printf("to fight a lawsuit,the reader must ,sadly, contend with the title in hand.");
gotoxy(10,20);
printf("Press any key to continue");
gotoxy(10,17);
getch();

do{
clrscr();
design();
gotoxy(10,5);
printf("Not Your Simple Index");
gotoxy(10,8);
printf("1.The ransom of the Roman Chief");
gotoxy(10,20);
printf("9.EXIT");
gotoxy(30,24);
printf("ENTER YOUR OPTION");
scanf("%d",&s);
switch(s)
{case 1:
{
clrscr();
design();
gotoxy(10,5);
printf("The Ransom of the Roman Chief");
gotoxy(5,10);
printf("The small inlets in Cicilia were the lairs of pirates who terrorized");
gotoxy(5,11);
printf("the eastern Mediterranean sea. Being the feroious pirates, they were,  ");
gotoxy(5,12);
printf("the count of their kidnappings and ransoms, they received, saw no bounds.");
gotoxy(5,13);
printf("But once they happened to kidnap a 25 year old Roman nobleman ,");
gotoxy(5,14);
printf(" who was on his way to Rhodes. But contrary to the previous captives ,");
gotoxy(5,15);
printf("he showed no fear and in fact, he charmed them, telling his captors to ");
gotoxy(5,16);
printf("double the ransom as he deemed the previous amount too low for a man of ");
gotoxy(5,17);
printf("his stature, and often joked about how he would punish them,once free. ");
gotoxy(5,18);
printf("In due time, the ransom was paid and the captive freed. ");
gotoxy(5,19);
printf("and the pirates relxed in the doubled ransom (or they thought).....");
gotoxy(10,22);
printf("Press any key to continue");
gotoxy(10,23);
getch();

clrscr();
design();
gotoxy(5,5);
printf("Months passed by, but once the pirates spotted a fleet and surprise led");
gotoxy(5,6);
printf("by the same young captive. A fight ensured and to save your time, the");
gotoxy(5,7);
printf("young man won, apturing his ex-captors and punished each of them ");
gotoxy(5,8);
printf("taking back the ransom paid in the process");
gotoxy(5,9);
printf("So one may wonder , how did the turned tables");
gotoxy(5,13);
printf("The young man happened to be the future master of Mediterranean");
gotoxy(5,14);
printf("the one who crossed the Rubicon  ");
gotoxy(5,15);
printf("the one who laid the foundations of the Roman Empire");
gotoxy(5,16);
printf("Julius Caesar");

gotoxy(5,18);
printf("Moral - Caesar is Caesar");

gotoxy(10,22);
printf("Press any key");
gotoxy(10,23);
getch();

}
break;

case 9:{clrscr();
design();
gotoxy(10,10);
printf("THANK YOU FOR SPENDING YOUR TIME IN NOT YOUR SIMPLE HISTORY");
gotoxy(10,15);
printf("PRESS ANY KEY TO EXIT");
getch();
clrscr();
exit(0);}
break;
default:{clrscr();
design();
gotoxy(10,10);printf("INVALID OPTION . PLEASE TRY  AGAIN.");
gotoxy(10,15);printf("");
gotoxy(10,22);
printf("Press any key");

getch();}
}
clrscr();
design();
gotoxy(10,10);
printf(" TO RETURN TO THE MAIN MENU,TYPE Y "); scanf(" %c",&op);
}while(op=='Y'||op=='y');
clrscr();
design();
gotoxy(10,10);
printf("THANK YOU FOR SPENDING YOUR TIME IN NOT YOUR SIMPLE HISTORY"); gotoxy(10,15);
printf("PRESS ANY KEY TO EXIT");
getch();
clrscr();
exit(0);
}


