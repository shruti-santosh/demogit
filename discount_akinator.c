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
int i,r,j,n,s,t,k,l;
clrscr();
design();
gotoxy(10,10);
printf("Welcome to the akinator(the discount version)");

gotoxy(10,15);
printf("Press any key to continue");
gotoxy(10,17);
getch();

clrscr();
design();
gotoxy(10,10);
printf("Let's play a game  ");
gotoxy(10,12);
printf("Guess any number of your choice & after we go through a series of ops");
gotoxy(10,14);
printf("I will predict the result from the set of operations");
gotoxy(10,16);
printf("Press any key to proceed");
gotoxy(10,18);
getch();

clrscr();
design();
gotoxy(10,10);
printf("You could choose any calculators of your choice");
gotoxy(10,12);
printf("Cause the road we are about to take is not all rosy");
gotoxy(10,14);
printf("So without any further ado, let's play the game");
gotoxy(10,16);
printf("Press any key to proceed");
gotoxy(10,18);
getch();

clrscr();
design();
gotoxy(10,10);
printf("Choose any number between 1 and 100");
gotoxy(10,16);
printf("Press any key to proceed");
gotoxy(10,18);
getch();

clrscr();
design();
gotoxy(10,10);
printf("Multiply it by 25");
s=50;
s=s*25;
gotoxy(10,16);
printf("Press any key to proceed");
gotoxy(10,18);
getch();


clrscr();
design();
gotoxy(10,10);
printf("Add 199");
s=s+199;
gotoxy(10,16);
printf("Press any key to proceed");
gotoxy(10,18);
getch();

clrscr();
design();
gotoxy(10,10);
printf("Multiply the resultant with the reverse of the number");
r=0;
t=n;
while(t>0)
{
r=(r*10)+(t%10);
t/=10;
}
s=s*r;
gotoxy(10,16);
printf("Press any key to proceed");
gotoxy(10,18);
getch();

clrscr();
design();
gotoxy(10,10);
printf("Divide the number by its last digit");

s=s/(n%10);
gotoxy(10,16);
printf("Press any key to proceed");
gotoxy(10,18);
getch();

clrscr();
design();
gotoxy(10,8);
printf("We are almost there");
gotoxy(10,10);
printf("Enter the last digit");
gotoxy(10,14);
scanf("%d",&k);
gotoxy(10,16);
printf("Press any key to proceed");
gotoxy(10,18);
getch();


clrscr();
design();
gotoxy(10,8);
printf("And the last operation is ");
gotoxy(10,10);
printf("Multiply it by %d",t);

gotoxy(10,16);
printf("Press any key to proceed");
gotoxy(10,18);
getch();

clrscr();
design();
gotoxy(10,8);
printf("The Akinator believes your answer is ");
gotoxy(10,10);
printf("%d",t);
gotoxy(10,16);
printf("Press any key to proceed");
gotoxy(10,18);
getch();

clrscr();
design();
gotoxy(10,8);
printf("Thank you for taking part in this social experiment to prove that  ");
gotoxy(10,10);
printf("the discount Akinator is always right");

gotoxy(10,16);
printf("Press any key to proceed");
gotoxy(10,18);
getch();
exit(0);


}
