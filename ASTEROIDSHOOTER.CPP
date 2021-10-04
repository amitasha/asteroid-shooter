#include<stdio.h>
#include<dos.h>
#include<ctype.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>
xp[20],yp[20];
void bar(int z)
{
	window(z+1,22,70,25);
	textcolor(10);
	cprintf("    Û  ");
	window(z+1,23,70,25);
	cprintf("   Þ");
	textcolor(9);
	cprintf("Û");
	textcolor(10);
	cprintf("Ý  ");
	window(z+1,24,70,25);
	cprintf("  Þ");
	textcolor(9);
	cprintf("ÛßÛ");
	textcolor(10);
	cprintf("Ý  ");
}
const int sz=6;
int xx[sz],yy[sz];
void up()
{
	int flag=0,k;
	static scr=0;
	for(int i=0;i<sz && xx[i]!=0 ;i++)
	{
		for(k=0;k<20 ;k++)
		{
			if(xx[i]==xp[k] && yy[i]==yp[k]&& xp[k]!=0)
			{
				xx[i]=0;
				window(74,20,80,24);
				scr++;
				textcolor(15);
				cprintf("%d",scr);
				if(scr<10)
				cprintf("  ");
				else cprintf(" ");
			}
		}
	}
	textcolor(10);
	for(i=0;i<20;i++)
	{
		if(xp[i]!=0)
		{
			flag++;
			window(xp[i],yp[i],xp[i]+1,yp[i]+1);
			if(yp[i]!=1)
			cprintf("%c",4);
			window(xp[i],yp[i]+1,xp[i]+1,yp[i]+2);
			if(yp[i]!=21)
			cprintf(" ");
			yp[i]--;
			delay(22/flag);
		}
		if(yp[i]==0)
			xp[i]=0;
	}
	textcolor(WHITE);
}
void status(int x)
{
	window(66,17,79,19);
	if(x==1)
	{
	textcolor(LIGHTGREEN);
	cprintf("  Playing.. ");
	}
	else if(x==2)
	cprintf("   Paused   ");
	else
	{
	textcolor(LIGHTRED);
	cprintf("   Stoped   ");
	}
}
void down()
{
	int x,i;
	if(random(10)==1){
	x=random(52)+7;
	textcolor(12);
	for(i=0;i<sz;i++)
	{
		if(xx[i]==0)
		{
			xx[i]=x;
			yy[i]=2;
			window(xx[i],yy[i],xx[i]+1,yy[i]+1);
			cprintf("*");
			break;
		}
	}             /// after
	for(i=0;i<sz;i++)
	{
		if(random(2)){
		window(xx[i],yy[i],xx[i],yy[i]+2);
		cprintf("+#");
		if(yy[i]>=20)
		{
			status(3);
			sound(100);
			delay(210);
			nosound();
			sound(250);
			delay(100);
			nosound();
			sound(100);
			delay(210);
			nosound();
			sound(250);
			delay(250);
			nosound();

			getch();
			delay(1500);
			exit(0);
		}
		yy[i]++;      }
	}
	textcolor(WHITE);
	delay(300);
	}
}
 int i,a,r;
 clrscr();
 gotoxy(30,12);
 printf("Welcome You!

			IN THE JARGON OF A NUMBER..");
 printf("







					 Press any key to continue....");
 getch();
 clrscr();
 gotoxy(15,8);
 printf("Just think a number between 1 to 63 in your mind");
 printf("

				  Think on one

			");
 printf("Do not enter that number");
 printf("

		    I will find that number on your mind....");
 printf("






						 Press any key to continue...");
 getch();
 clrscr();
 gotoxy(20,7);
 printf("By Just answering few questions....");
 printf("



	If your number is present in the numbers");
 printf(" shown on your screen,

		Then press P and if not present");
 printf(" then press N


	");
 printf(" But please be honest while entering the answer...");
 printf("




						Press any key to continue...");
 getch();
 clrscr();
 r=generate();
 if(r==0)
 {
  gotoxy(20,11);
  printf("You didn't think of any number between 1 to 63");
  printf("


				 So try again...");
 }
 else
 {
 gotoxy(30,11);
 printf("Your number is %d",r);
 printf("


Surprised! But friends it is not a magic,");
 printf(" it just involves some mathematical computation....");
 printf(" so guys just try to find out the method.


				");
 printf(" Thank You!

							");
 getch();
}

int generate()
{
 int a,i,j,f,num[6],n,r=0;
 char ch[6];
 for(j=0;j<=5;j++)
 {
  gotoxy(1,7);
  f=fun(j);
  for(i=1;i<=63;i++)
  {
   //f=fun(j);
   //printf("%d",f);
   a=i & f;
   if(a==f)
   //gotoxy(5,10);
   printf("	%d",i);

  }
  printf("



  Let me remind you if the number is present then");
  printf(" press P otherwise press N");
  printf("


		 Enter your answer:	");

  ch[j]=getche();
  printf("


						Press any key to continue....");
  //clrscr();
  if(ch[j]=='p' || ch[j]=='P')
  {
   num[j]=1;
   n=fun(j);
   r=r+n;
  }
void main()
{
	clrscr();
	char ch;
	_setcursortype(_NOCURSOR);
	randomize();
	textcolor(15);
	cprintf("\n Ú                                                             ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿ ");
	for(int i=0;i<18;i++)
	cprintf(" ³                                                             ³              ³ ");
	cprintf(" À                                                             ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ ");
	window(66,3,78,21);
	textcolor(11);
	cprintf("Press X      ");
	cprintf("to Exit_____ \n");
	textcolor(14);
	cprintf("Press P to   ");
	cprintf("Pause Game__ \n");
	textcolor(11);
	cprintf("Press Space  ");
	cprintf("to Shoot____ \n");
	textcolor(14);
	cprintf("Press Left,  ");
	cprintf("Right to Move\n");
	textcolor(WHITE);
	cprintf("ÄÄÄÄÄÄÄÄÄÄÄÄ ");
	cprintf("Status:      ");
	cprintf("   Stoped    \n");  // cprintf("  Playing.. "); cprintf("   Stoped   ");
	cprintf("Score :      ");
	cprintf("        0   ");
//	getch(); return;
	int x=0;
	for(i=0;i<20;i++)
	{
		xp[i]=0;
	}
	for(i=0;i<sz;i++)
		xx[i]=0;
	bar(x);

	while(1)
	{
		status(1);
		while(!kbhit())
		{
			up();
			down();
		}
		ch=getch();
		switch(tolower(ch))
		{
			case 'p' :  status(2);
						sound(1500);
						delay(110);
						nosound();
						sound(500);
						delay(200);
						nosound();
						sound(2200);
						delay(150);
						nosound();
						getch();
			case ' ' :  sound(600);
						delay(40);
						nosound();
						sound(1500);
						delay(40);
						nosound();
						for(i=0;i<20;i++)
						{
							if(xp[i]==0)
							{
								xp[i]=x+5;
								yp[i]=21;
								break;
							}
						}
						break;
			case 0 : 	ch=getch();
						if(ch==75 && x>0)
						{
							x-=1;
							bar(x);
						}
						else if(ch==77 && x<55)
						{
							x+=1;
							bar(x);
						}
						break;
			case 'x' : return;
		}
	}
}
