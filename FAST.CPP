#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<process.h>
#include<dos.h>
#include<stdlib.h>
#include<time.h>
int scan;
int ascii;
int no=0;
int m=0,p[1000],q[1000],a[1000],score=0,b=20;;
float distance=0,speed,diff;
time_t first, second;
void main()
{
first = time(NULL);  /* Gets system time */
clrscr();
void outline(void);
void logic(void);
void getkey(void);
logic();
getch();
}
void outline()
{//outline start
	gotoxy(1,25);
	textcolor(10);
	cprintf("È");
	for(int h=2;h<=12;h++)
	{
	gotoxy(h,25);
	textcolor(10);
	cprintf("Í");
	}
	for(h=69;h<=79;h++)
	{
	gotoxy(h,25);
	textcolor(10);
	cprintf("Í");
	}
	gotoxy(80,25);
	textcolor(10);
	cprintf("¼");
	gotoxy(1,1);
	textcolor(10);
	cprintf("É");
	for(h=2;h<=12;h++)
	{
	gotoxy(h,1);
	textcolor(10);
	cprintf("Í");
	}
	for(h=69;h<=79;h++)
	{
	gotoxy(h,1);
	textcolor(10);
	cprintf("Í");
	}
	gotoxy(80,1);
	textcolor(10);
	cprintf("»");
	for(int v=2;v<=3;v++)
	{
	gotoxy(1,v);
	textcolor(10);
	cprintf("º");
	}
	for(v=2;v<=3;v++)
	{
	gotoxy(80,v);
	textcolor(10);
	cprintf("º");
	}
	for(v=22;v<=23;v++)
	{
	gotoxy(1,v);
	textcolor(10);
	cprintf("º");
	}
	for(v=22;v<=23;v++)
	{
	gotoxy(80,v);
	textcolor(10);
	cprintf("º");
	}
	gotoxy(1,1);
	gotoxy(20,1);
	textcolor(10);
	cprintf("Ú");
	gotoxy(62,1);
	textcolor(10);
	cprintf("¿");
	gotoxy(62,25);
	textcolor(10);
	cprintf("Ù");
	gotoxy(20,25);
	textcolor(10);
	cprintf("À");
	for(h=21;h<=61;h++)
	{
	gotoxy(h,25);
	textcolor(10);
	cprintf("Ä");
	}
	for(h=21;h<=61;h++)
	{
	gotoxy(h,1);
	textcolor(10);
	cprintf("Ä");
	}
	for(v=2;v<=24;v++)
	{
	gotoxy(20,v);
	textcolor(10);
	cprintf("³");
	}
	for(v=2;v<=24;v++)
	{
	gotoxy(62,v);
	textcolor(10);
	cprintf("³");
	}
	gotoxy(34,1);
	textcolor(10);
	cprintf("Â");
	gotoxy(48,1);
	textcolor(10);
	cprintf("Â");
	gotoxy(34,25);
	textcolor(10);
	cprintf("Á");
	gotoxy(48,25);
	textcolor(10);
	cprintf("Á");

	for(v=2;v<=24;v++)
	{
	for(h=21;h<=61;h++)
	{
	gotoxy(h,v);
	textcolor(8);
	cprintf("°");
	}
	}
	for(v=2;v<=24;v++)
	{
	gotoxy(34,v);
	textcolor(10);
	cprintf("³");
	}
	for(v=2;v<=24;v++)
	{
	gotoxy(48,v);
	textcolor(10);
	cprintf("³");
	}
	gotoxy(67,3);
	textcolor(15);
	cprintf("Distance(km):-");
	gotoxy(67,4);
	textcolor(9);
	cprintf("ÚÄÄÄÄÄÄÄÄÄÄÄ¿");
	gotoxy(67,5);
	textcolor(9);
	cprintf("³           ³");
	gotoxy(67,6);
	textcolor(9);
	cprintf("ÀÄÄÄÄÄÄÄÄÄÄÄÙ");
	gotoxy(67,7);
	textcolor(15);
	cprintf("Time(s):-");
	gotoxy(67,8);
	textcolor(9);
	cprintf("ÚÄÄÄÄÄÄÄÄÄÄÄ¿");
	gotoxy(67,9);
	textcolor(9);
	cprintf("³           ³");
	gotoxy(67,10);
	textcolor(9);
	cprintf("ÀÄÄÄÄÄÄÄÄÄÄÄÙ");
	gotoxy(67,11);
	textcolor(15);
	cprintf("Speed(km/h):-");
	gotoxy(67,12);
	textcolor(9);
	cprintf("ÚÄÄÄÄÄÄÄÄÄÄÄ¿");
	gotoxy(67,13);
	textcolor(9);
	cprintf("³           ³");
	gotoxy(67,14);
	textcolor(9);
	cprintf("ÀÄÄÄÄÄÄÄÄÄÄÄÙ");
	gotoxy(67,15);
	textcolor(15);
	cprintf("Score:-");
	gotoxy(67,16);
	textcolor(9);
	cprintf("ÚÄÄÄÄÄÄÄÄÄÄÄ¿");
	gotoxy(67,17);
	textcolor(9);
	cprintf("³           ³");
	gotoxy(67,18);
	textcolor(9);
	cprintf("ÀÄÄÄÄÄÄÄÄÄÄÄÙ");
}//outline end
void logic()
{//logic funtion start
void getkey(int,int);
void outline(void);
outline();
int i=41,j=24; ///user 3 axis
      while(1)
      {
      ////////////////////////////for user part
      switch(i)
	     {//this switch for moving user car
	     case 41:
	     gotoxy(41,22);
	     textcolor(11);
	     cprintf("");
	     gotoxy(40,23);
	     textcolor(2);
	     cprintf("³");
	     gotoxy(41,23);
	     textcolor(14);
	     cprintf("ß");
	     gotoxy(42,23);
	     textcolor(2);
	     cprintf("³");
	     break;
	     case 55:
	     gotoxy(55,22);
	     textcolor(11);
	     cprintf("");
	     gotoxy(54,23);
	     textcolor(2);
	     cprintf("³");
	     gotoxy(55,23);
	     textcolor(14);
	     cprintf("ß");
	     gotoxy(56,23);
	     textcolor(2);
	     cprintf("³");
	     break;
	     case 27:
	     gotoxy(27,22);
	     textcolor(11);
	     cprintf("");
	     gotoxy(26,23);
	     textcolor(2);
	     cprintf("³");
	     gotoxy(27,23);
	     textcolor(14);
	     cprintf("ß");
	     gotoxy(28,23);
	     textcolor(2);
	     cprintf("³");
	     break;
	     }//switch moving user car is end
  //////////////////////for user part end
   getkey(i,j);
    switch(scan)
       {
	 case 75:  //left arrow key
		i=i-14;
	      if(i<27)
		{
		i=i+14;
		}
		sound(400);
		delay(40);
		nosound();
		break;

	  case 77:  //right arrow key
		i=i+14;
		if(i>55)
		{
		i=i-14;
		}
		sound(400);
		delay(40);
		nosound();
	     break;

	   case 80:  //down arrow key
		   b=b-1;
		   if(b<20)
		   {
		   b=20;
		   }
		   break;


	   case 72:  //up arrow key
		   b=b+1;
		   if(b>200)
		   {
		   b=200;
		   }
		break;

	   case 1 :   //for exit from the programme
		exit(0);
		break;
	     } //switch


	  }//while
}//logic funtion end
void getkey(int ownx,int owny)
	  {
	  union REGS ii,oo;
	  while(!kbhit())
	  {
	  switch(ownx)
	  {//user car part start
	  case 41:
	     gotoxy(41,22);
	     textcolor(11);
	     cprintf("");
	     gotoxy(40,23);
	     textcolor(2);
	     cprintf("³");
	     gotoxy(41,23);
	     textcolor(14);
	     cprintf("ß");
	     gotoxy(42,23);
	     textcolor(2);
	     cprintf("³");
	     break;
	     case 55:
	     gotoxy(55,22);
	     textcolor(11);
	     cprintf("");
	     gotoxy(54,23);
	     textcolor(2);
	     cprintf("³");
	     gotoxy(55,23);
	     textcolor(14);
	     cprintf("ß");
	     gotoxy(56,23);
	     textcolor(2);
	     cprintf("³");
	     break;
	     case 27:
	     gotoxy(27,22);
	     textcolor(11);
	     cprintf("");
	     gotoxy(26,23);
	     textcolor(2);
	     cprintf("³");
	     gotoxy(27,23);
	     textcolor(14);
	     cprintf("ß");
	     gotoxy(28,23);
	     textcolor(2);
	     cprintf("³");
	     break;
	  }//user car part end

	      delay(150);
		//%2==0 if start
		gotoxy(20,1);
		textcolor(0);
		cprintf("Û");
		gotoxy(62,1);
		textcolor(0);
		cprintf("Û");
		gotoxy(34,1);
		textcolor(0);
		cprintf("%c",char(25));
		gotoxy(48,1);
		textcolor(0);
		cprintf("%c",char(25));

		gotoxy(20,2);
		textcolor(15);
		cprintf("Û");
		gotoxy(62,2);
		textcolor(15);
		cprintf("Û");
		gotoxy(34,2);
		textcolor(15);
		cprintf("%c",char(25));
		gotoxy(48,2);
		textcolor(15);
		cprintf("%c",char(25));

		gotoxy(20,3);
		textcolor(0);
		cprintf("Û");
		gotoxy(62,3);
		textcolor(0);
		cprintf("Û");
		gotoxy(34,3);
		textcolor(0);
		cprintf("%c",char(25));
		gotoxy(48,3);
		textcolor(0);
		cprintf("%c",char(25));

		gotoxy(20,4);
		textcolor(15);
		cprintf("Û");
		gotoxy(62,4);
		textcolor(15);
		cprintf("Û");
		gotoxy(34,4);
		textcolor(15);
		cprintf("%c",char(25));
		gotoxy(48,4);
		textcolor(15);
		cprintf("%c",char(25));

		gotoxy(20,5);
		textcolor(0);
		cprintf("Û");
		gotoxy(62,5);
		textcolor(0);
		cprintf("Û");
		gotoxy(34,5);
		textcolor(0);
		cprintf("%c",char(25));
		gotoxy(48,5);
		textcolor(0);
		cprintf("%c",char(25));

		gotoxy(20,6);
		textcolor(15);
		cprintf("Û");
		gotoxy(62,6);
		textcolor(15);
		cprintf("Û");
		gotoxy(34,6);
		textcolor(15);
		cprintf("%c",char(25));
		gotoxy(48,6);
		textcolor(15);
		cprintf("%c",char(25));

		gotoxy(20,7);
		textcolor(0);
		cprintf("Û");
		gotoxy(62,7);
		textcolor(0);
		cprintf("Û");
		gotoxy(34,7);
		textcolor(0);
		cprintf("%c",char(25));
		gotoxy(48,7);
		textcolor(0);
		cprintf("%c",char(25));

		gotoxy(20,8);
		textcolor(15);
		cprintf("Û");
		gotoxy(62,8);
		textcolor(15);
		cprintf("Û");
		gotoxy(34,8);
		textcolor(15);
		cprintf("%c",char(25));
		gotoxy(48,8);
		textcolor(15);
		cprintf("%c",char(25));

		gotoxy(20,9);
		textcolor(0);
		cprintf("Û");
		gotoxy(62,9);
		textcolor(0);
		cprintf("Û");
		gotoxy(34,9);
		textcolor(0);
		cprintf("%c",char(25));
		gotoxy(48,9);
		textcolor(0);
		cprintf("%c",char(25));

		gotoxy(20,10);
		textcolor(15);
		cprintf("Û");
		gotoxy(62,10);
		textcolor(15);
		cprintf("Û");
		gotoxy(34,10);
		textcolor(15);
		cprintf("%c",char(25));
		gotoxy(48,10);
		textcolor(15);
		cprintf("%c",char(25));

		gotoxy(20,11);
		textcolor(0);
		cprintf("Û");
		gotoxy(62,11);
		textcolor(0);
		cprintf("Û");
		gotoxy(34,11);
		textcolor(0);
		cprintf("%c",char(25));
		gotoxy(48,11);
		textcolor(0);
		cprintf("%c",char(25));

		gotoxy(20,12);
		textcolor(15);
		cprintf("Û");
		gotoxy(62,12);
		textcolor(15);
		cprintf("Û");
		gotoxy(34,12);
		textcolor(15);
		cprintf("%c",char(25));
		gotoxy(48,12);
		textcolor(15);
		cprintf("%c",char(25));

		gotoxy(20,13);
		textcolor(0);
		cprintf("Û");
		gotoxy(62,13);
		textcolor(0);
		cprintf("Û");
		gotoxy(34,13);
		textcolor(0);
		cprintf("%c",char(25));
		gotoxy(48,13);
		textcolor(0);
		cprintf("%c",char(25));

		gotoxy(20,14);
		textcolor(15);
		cprintf("Û");
		gotoxy(62,14);
		textcolor(15);
		cprintf("Û");
		gotoxy(34,14);
		textcolor(15);
		cprintf("%c",char(25));
		gotoxy(48,14);
		textcolor(15);
		cprintf("%c",char(25));

		gotoxy(20,15);
		textcolor(0);
		cprintf("Û");
		gotoxy(62,15);
		textcolor(0);
		cprintf("Û");
		gotoxy(34,15);
		textcolor(0);
		cprintf("%c",char(25));
		gotoxy(48,15);
		textcolor(0);
		cprintf("%c",char(25));

		gotoxy(20,16);
		textcolor(15);
		cprintf("Û");
		gotoxy(62,16);
		textcolor(15);
		cprintf("Û");
		gotoxy(34,16);
		textcolor(15);
		cprintf("%c",char(25));
		gotoxy(48,16);
		textcolor(15);
		cprintf("%c",char(25));

		gotoxy(20,17);
		textcolor(0);
		cprintf("Û");
		gotoxy(62,17);
		textcolor(0);
		cprintf("Û");
		gotoxy(34,17);
		textcolor(0);
		cprintf("%c",char(25));
		gotoxy(48,17);
		textcolor(0);
		cprintf("%c",char(25));

		gotoxy(20,18);
		textcolor(15);
		cprintf("Û");
		gotoxy(62,18);
		textcolor(15);
		cprintf("Û");
		gotoxy(34,18);
		textcolor(15);
		cprintf("%c",char(25));
		gotoxy(48,18);
		textcolor(15);
		cprintf("%c",char(25));

		gotoxy(20,19);
		textcolor(0);
		cprintf("Û");
		gotoxy(62,19);
		textcolor(0);
		cprintf("Û");
		gotoxy(34,19);
		textcolor(0);
		cprintf("%c",char(25));
		gotoxy(48,19);
		textcolor(0);
		cprintf("%c",char(25));

		gotoxy(20,20);
		textcolor(15);
		cprintf("Û");
		gotoxy(62,20);
		textcolor(15);
		cprintf("Û");
		gotoxy(34,20);
		textcolor(15);
		cprintf("%c",char(25));
		gotoxy(48,20);
		textcolor(15);
		cprintf("%c",char(25));

		gotoxy(20,21);
		textcolor(0);
		cprintf("Û");
		gotoxy(62,21);
		textcolor(0);
		cprintf("Û");
		gotoxy(34,21);
		textcolor(0);
		cprintf("%c",char(25));
		gotoxy(48,21);
		textcolor(0);
		cprintf("%c",char(25));

		gotoxy(20,22);
		textcolor(15);
		cprintf("Û");
		gotoxy(62,22);
		textcolor(15);
		cprintf("Û");
		gotoxy(34,22);
		textcolor(15);
		cprintf("%c",char(25));
		gotoxy(48,22);
		textcolor(15);
		cprintf("%c",char(25));

		gotoxy(20,23);
		textcolor(0);
		cprintf("Û");
		gotoxy(62,23);
		textcolor(0);
		cprintf("Û");
		gotoxy(34,23);
		textcolor(0);
		cprintf("%c",char(25));
		gotoxy(48,23);
		textcolor(0);
		cprintf("%c",char(25));

		gotoxy(20,24);
		textcolor(15);
		cprintf("Û");
		gotoxy(62,24);
		textcolor(15);
		cprintf("Û");
		gotoxy(34,24);
		textcolor(15);
		cprintf("%c",char(25));
		gotoxy(48,24);
		textcolor(15);
		cprintf("%c",char(25));

		gotoxy(20,25);
		textcolor(0);
		cprintf("Û");
		gotoxy(62,25);
		textcolor(0);
		cprintf("Û");
		gotoxy(34,25);
		textcolor(0);
		cprintf("%c",char(25));
		gotoxy(48,25);
		textcolor(0);
		cprintf("%c",char(25));


		delay(150);
		//%2==0 if end
		//%2!=0 start
		gotoxy(20,1);
		textcolor(15);
		cprintf("Û");
		gotoxy(62,1);
		textcolor(15);
		cprintf("Û");
		gotoxy(34,1);
		textcolor(15);
		cprintf("%c",char(25));
		gotoxy(48,1);
		textcolor(15);
		cprintf("%c",char(25));

		 gotoxy(20,2);
		textcolor(0);
		cprintf("Û");
		gotoxy(62,2);
		textcolor(0);
		cprintf("Û");
		gotoxy(34,2);
		textcolor(0);
		cprintf("%c",char(25));
		gotoxy(48,2);
		textcolor(0);
		cprintf("%c",char(25));

		gotoxy(20,3);
		textcolor(15);
		cprintf("Û");
		gotoxy(62,3);
		textcolor(15);
		cprintf("Û");
		gotoxy(34,3);
		textcolor(15);
		cprintf("%c",char(25));
		gotoxy(48,3);
		textcolor(15);
		cprintf("%c",char(25));

		gotoxy(20,4);
		textcolor(0);
		cprintf("Û");
		gotoxy(62,4);
		textcolor(0);
		cprintf("Û");
		gotoxy(34,4);
		textcolor(0);
		cprintf("%c",char(25));
		gotoxy(48,4);
		textcolor(0);
		cprintf("%c",char(25));

		gotoxy(20,5);
		textcolor(15);
		cprintf("Û");
		gotoxy(62,5);
		textcolor(15);
		cprintf("Û");
		gotoxy(34,5);
		textcolor(15);
		cprintf("%c",char(25));
		gotoxy(48,5);
		textcolor(15);
		cprintf("%c",char(25));

		gotoxy(20,6);
		textcolor(0);
		cprintf("Û");
		gotoxy(62,6);
		textcolor(0);
		cprintf("Û");
		gotoxy(34,6);
		textcolor(0);
		cprintf("%c",char(25));
		gotoxy(48,6);
		textcolor(0);
		cprintf("%c",char(25));

		gotoxy(20,7);
		textcolor(15);
		cprintf("Û");
		gotoxy(62,7);
		textcolor(15);
		cprintf("Û");
		gotoxy(34,7);
		textcolor(15);
		cprintf("%c",char(25));
		gotoxy(48,7);
		textcolor(15);
		cprintf("%c",char(25));

		gotoxy(20,8);
		textcolor(0);
		cprintf("Û");
		gotoxy(62,8);
		textcolor(0);
		cprintf("Û");
		gotoxy(34,8);
		textcolor(0);
		cprintf("%c",char(25));
		gotoxy(48,8);
		textcolor(0);
		cprintf("%c",char(25));

		gotoxy(20,9);
		textcolor(15);
		cprintf("Û");
		gotoxy(62,9);
		textcolor(15);
		cprintf("Û");
		gotoxy(34,9);
		textcolor(15);
		cprintf("%c",char(25));
		gotoxy(48,9);
		textcolor(15);
		cprintf("%c",char(25));

		gotoxy(20,10);
		textcolor(0);
		cprintf("Û");
		gotoxy(62,10);
		textcolor(0);
		cprintf("Û");
		gotoxy(34,10);
		textcolor(0);
		cprintf("%c",char(25));
		gotoxy(48,10);
		textcolor(0);
		cprintf("%c",char(25));

		gotoxy(20,11);
		textcolor(15);
		cprintf("Û");
		gotoxy(62,11);
		textcolor(15);
		cprintf("Û");
		gotoxy(34,11);
		textcolor(15);
		cprintf("%c",char(25));
		gotoxy(48,11);
		textcolor(15);
		cprintf("%c",char(25));

		gotoxy(20,12);
		textcolor(0);
		cprintf("Û");
		gotoxy(62,12);
		textcolor(0);
		cprintf("Û");
		gotoxy(34,12);
		textcolor(0);
		cprintf("%c",char(25));
		gotoxy(48,12);
		textcolor(0);
		cprintf("%c",char(25));

		gotoxy(20,13);
		textcolor(15);
		cprintf("Û");
		gotoxy(62,13);
		textcolor(15);
		cprintf("Û");
		gotoxy(34,13);
		textcolor(15);
		cprintf("%c",char(25));
		gotoxy(48,13);
		textcolor(15);
		cprintf("%c",char(25));

		gotoxy(20,14);
		textcolor(0);
		cprintf("Û");
		gotoxy(62,14);
		textcolor(0);
		cprintf("Û");
		gotoxy(34,14);
		textcolor(0);
		cprintf("%c",char(25));
		gotoxy(48,14);
		textcolor(0);
		cprintf("%c",char(25));

		gotoxy(20,15);
		textcolor(15);
		cprintf("Û");
		gotoxy(62,15);
		textcolor(15);
		cprintf("Û");
		gotoxy(34,15);
		textcolor(15);
		cprintf("%c",char(25));
		gotoxy(48,15);
		textcolor(15);
		cprintf("%c",char(25));

		gotoxy(20,16);
		textcolor(0);
		cprintf("Û");
		gotoxy(62,16);
		textcolor(0);
		cprintf("Û");
		gotoxy(34,16);
		textcolor(0);
		cprintf("%c",char(25));
		gotoxy(48,16);
		textcolor(0);
		cprintf("%c",char(25));

		gotoxy(20,17);
		textcolor(15);
		cprintf("Û");
		gotoxy(62,17);
		textcolor(15);
		cprintf("Û");
		gotoxy(34,17);
		textcolor(15);
		cprintf("%c",char(25));
		gotoxy(48,17);
		textcolor(15);
		cprintf("%c",char(25));

		gotoxy(20,18);
		textcolor(0);
		cprintf("Û");
		gotoxy(62,18);
		textcolor(0);
		cprintf("Û");
		gotoxy(34,18);
		textcolor(0);
		cprintf("%c",char(25));
		gotoxy(48,18);
		textcolor(0);
		cprintf("%c",char(25));

		gotoxy(20,19);
		textcolor(15);
		cprintf("Û");
		gotoxy(62,19);
		textcolor(15);
		cprintf("Û");
		gotoxy(34,19);
		textcolor(15);
		cprintf("%c",char(25));
		gotoxy(48,19);
		textcolor(15);
		cprintf("%c",char(25));

		gotoxy(20,20);
		textcolor(0);
		cprintf("Û");
		gotoxy(62,20);
		textcolor(0);
		cprintf("Û");
		gotoxy(34,20);
		textcolor(0);
		cprintf("%c",char(25));
		gotoxy(48,20);
		textcolor(0);
		cprintf("%c",char(25));

		gotoxy(20,21);
		textcolor(15);
		cprintf("Û");
		gotoxy(62,21);
		textcolor(15);
		cprintf("Û");
		gotoxy(34,21);
		textcolor(15);
		cprintf("%c",char(25));
		gotoxy(48,21);
		textcolor(15);
		cprintf("%c",char(25));

		gotoxy(20,22);
		textcolor(0);
		cprintf("Û");
		gotoxy(62,22);
		textcolor(0);
		cprintf("Û");
		gotoxy(34,22);
		textcolor(0);
		cprintf("%c",char(25));
		gotoxy(48,22);
		textcolor(0);
		cprintf("%c",char(25));

		gotoxy(20,23);
		textcolor(15);
		cprintf("Û");
		gotoxy(62,23);
		textcolor(15);
		cprintf("Û");
		gotoxy(34,23);
		textcolor(15);
		cprintf("%c",char(25));
		gotoxy(48,23);
		textcolor(15);
		cprintf("%c",char(25));

		gotoxy(20,24);
		textcolor(0);
		cprintf("Û");
		gotoxy(62,24);
		textcolor(0);
		cprintf("Û");
		gotoxy(34,24);
		textcolor(0);
		cprintf("%c",char(25));
		gotoxy(48,24);
		textcolor(0);
		cprintf("%c",char(25));

		gotoxy(20,25);
		textcolor(15);
		cprintf("Û");
		gotoxy(62,25);
		textcolor(15);
		cprintf("Û");
		gotoxy(34,25);
		textcolor(15);
		cprintf("%c",char(25));
		gotoxy(48,25);
		textcolor(15);
		cprintf("%c",char(25));

////////////////////////every time repeat part start
      for(int v=1;v<=25;v++)
	{
	for(int h=21;h<=33;h++)
	{
	gotoxy(h,v);
	textcolor(8);
	cprintf("°");
	}
	}
	for(v=1;v<=25;v++)
	{
	for(int h=35;h<=47;h++)
	{
	gotoxy(h,v);
	textcolor(8);
	cprintf("°");
	}
	}
	for(v=1;v<=25;v++)
	{
	for(int h=49;h<=61;h++)
	{
	gotoxy(h,v);
	textcolor(8);
	cprintf("°");
	}
	}
     ///////////every time repeat part end

     //////////////////column select part start
int k,l;
time_t t;

srand((unsigned) time(&t));
for(k=0; k<1; k++)
    {
    l=(rand() % 3)+1;
    }
    switch(l)
    {//start
    case 1:
	 p[m]=27;
	 q[m]=2;
	 break;
    case 2:
	 p[m]=41;
	 q[m]=2;
	 break;
    case 3:
	 p[m]=55;
	 q[m]=2;
	 break;
    }//end
 ///////////////////////coloumn select part end

 /////////////////////////randomly car select part
int y,z;
//time_t t;

randomize();
srand((unsigned) time(&t));
for(y=0; y<1; y++)
    {
    z=(rand() % 20)+1;
    }
    ////execeptional flag condition start
    if(a[m-1]==z||a[m-2]==z)
    {
    z=0;
    }
    //////////execeptional flag condition end
    switch(z)
    {//start
    case 1:
	 a[m]=1;
	 break;
    case 2:
	 a[m]=2;
	 break;
    case 3:
	 a[m]=3;
	 break;
    case 4:
	 a[m]=4;
	 break;
    }//end
 //////////////////////////randomly car select part end

 /////main logic part(putting the car in respective row and column) START
for(int n=0;n<=m;n++)
{//main for loop start

switch(a[n])
{//start
case 1:
q[n]=q[n]+1;
if(q[n]>24)
{
q[n]=0;
}
break;
case 2:
q[n]=q[n]+2;
if(q[n]>24)
{
q[n]=0;
}
break;
case 3:
q[n]=q[n]+1;
if(q[n]>24)
{
q[n]=0;
}
break;
case 4:
q[n]=q[n]+2;
if(q[n]>24)
{
q[n]=0;
}
break;
}//end
/////////main car hitting and gane over part start
if(ownx==p[n]&&owny==q[n])
 {
	clrscr();
	gotoxy(32,12);
	textcolor(12);
	cprintf("G A M E  O V E R ");
	textcolor(10);
	gotoxy(32,15);
	cprintf("T R Y   A G A I N");
	nosound();
	delay(1000);
	exit(0);
	}
	////////////////main car hitting and game over part end

switch(a[n])
{///car part start
case 1:
	switch(p[n])
	{///switch p[n] case 1 start
	case 27:
		switch(q[n])
		{//switch q[n] case 27 ,case 1(car) start
		 case 2:
		 gotoxy(26,2);
		 textcolor(5);
		 cprintf("³");
		 gotoxy(27,2);
		 textcolor(10);
		 cprintf("±");
		 gotoxy(28,2);
		 textcolor(5);
		 cprintf("³");
		 gotoxy(27,3);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 3:
		 gotoxy(26,3);
		 textcolor(5);
		 cprintf("³");
		 gotoxy(27,3);
		 textcolor(10);
		 cprintf("±");
		 gotoxy(28,3);
		 textcolor(5);
		 cprintf("³");
		 gotoxy(27,4);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 4:
		 gotoxy(26,4);
		 textcolor(5);
		 cprintf("³");
		 gotoxy(27,4);
		 textcolor(10);
		 cprintf("±");
		 gotoxy(28,4);
		 textcolor(5);
		 cprintf("³");
		 gotoxy(27,5);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 5:
		 gotoxy(26,5);
		 textcolor(5);
		 cprintf("³");
		 gotoxy(27,5);
		 textcolor(10);
		 cprintf("±");
		 gotoxy(28,5);
		 textcolor(5);
		 cprintf("³");
		 gotoxy(27,6);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 6:
		 gotoxy(26,6);
		 textcolor(5);
		 cprintf("³");
		 gotoxy(27,6);
		 textcolor(10);
		 cprintf("±");
		 gotoxy(28,6);
		 textcolor(5);
		 cprintf("³");
		 gotoxy(27,7);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 7:
		 gotoxy(26,7);
		 textcolor(5);
		 cprintf("³");
		 gotoxy(27,7);
		 textcolor(10);
		 cprintf("±");
		 gotoxy(28,7);
		 textcolor(5);
		 cprintf("³");
		 gotoxy(27,8);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 8:
		 gotoxy(26,8);
		 textcolor(5);
		 cprintf("³");
		 gotoxy(27,8);
		 textcolor(10);
		 cprintf("±");
		 gotoxy(28,8);
		 textcolor(5);
		 cprintf("³");
		 gotoxy(27,9);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 9:
		 gotoxy(26,9);
		 textcolor(5);
		 cprintf("³");
		 gotoxy(27,9);
		 textcolor(10);
		 cprintf("±");
		 gotoxy(28,9);
		 textcolor(5);
		 cprintf("³");
		 gotoxy(27,10);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 10:
		 gotoxy(26,10);
		 textcolor(5);
		 cprintf("³");
		 gotoxy(27,10);
		 textcolor(10);
		 cprintf("±");
		 gotoxy(28,10);
		 textcolor(5);
		 cprintf("³");
		 gotoxy(27,11);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 11:
		 gotoxy(26,11);
		 textcolor(5);
		 cprintf("³");
		 gotoxy(27,11);
		 textcolor(10);
		 cprintf("±");
		 gotoxy(28,11);
		 textcolor(5);
		 cprintf("³");
		 gotoxy(27,12);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 12:
		 gotoxy(26,12);
		 textcolor(5);
		 cprintf("³");
		 gotoxy(27,12);
		 textcolor(10);
		 cprintf("±");
		 gotoxy(28,12);
		 textcolor(5);
		 cprintf("³");
		 gotoxy(27,13);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 13:
		 gotoxy(26,13);
		 textcolor(5);
		 cprintf("³");
		 gotoxy(27,13);
		 textcolor(10);
		 cprintf("±");
		 gotoxy(28,13);
		 textcolor(5);
		 cprintf("³");
		 gotoxy(27,14);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 14:
		 gotoxy(26,14);
		 textcolor(5);
		 cprintf("³");
		 gotoxy(27,14);
		 textcolor(10);
		 cprintf("±");
		 gotoxy(28,14);
		 textcolor(5);
		 cprintf("³");
		 gotoxy(27,15);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 15:
		 gotoxy(26,15);
		 textcolor(5);
		 cprintf("³");
		 gotoxy(27,15);
		 textcolor(10);
		 cprintf("±");
		 gotoxy(28,15);
		 textcolor(5);
		 cprintf("³");
		 gotoxy(27,16);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 16:
		 gotoxy(26,16);
		 textcolor(5);
		 cprintf("³");
		 gotoxy(27,16);
		 textcolor(10);
		 cprintf("±");
		 gotoxy(28,16);
		 textcolor(5);
		 cprintf("³");
		 gotoxy(27,17);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 17:
		 gotoxy(26,17);
		 textcolor(5);
		 cprintf("³");
		 gotoxy(27,17);
		 textcolor(10);
		 cprintf("±");
		 gotoxy(28,17);
		 textcolor(5);
		 cprintf("³");
		 gotoxy(27,18);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 18:
		 gotoxy(26,18);
		 textcolor(5);
		 cprintf("³");
		 gotoxy(27,18);
		 textcolor(10);
		 cprintf("±");
		 gotoxy(28,18);
		 textcolor(5);
		 cprintf("³");
		 gotoxy(27,19);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 19:
		 gotoxy(26,19);
		 textcolor(5);
		 cprintf("³");
		 gotoxy(27,19);
		 textcolor(10);
		 cprintf("±");
		 gotoxy(28,19);
		 textcolor(5);
		 cprintf("³");
		 gotoxy(27,20);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 20:
		 gotoxy(26,20);
		 textcolor(5);
		 cprintf("³");
		 gotoxy(27,20);
		 textcolor(10);
		 cprintf("±");
		 gotoxy(28,20);
		 textcolor(5);
		 cprintf("³");
		 gotoxy(27,21);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 21:
		 gotoxy(26,21);
		 textcolor(5);
		 cprintf("³");
		 gotoxy(27,21);
		 textcolor(10);
		 cprintf("±");
		 gotoxy(28,21);
		 textcolor(5);
		 cprintf("³");
		 gotoxy(27,22);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 22:
		 gotoxy(26,22);
		 textcolor(5);
		 cprintf("³");
		 gotoxy(27,22);
		 textcolor(10);
		 cprintf("±");
		 gotoxy(28,22);
		 textcolor(5);
		 cprintf("³");
		 gotoxy(27,23);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 23:
		 gotoxy(26,23);
		 textcolor(5);
		 cprintf("³");
		 gotoxy(27,23);
		 textcolor(10);
		 cprintf("±");
		 gotoxy(28,23);
		 textcolor(5);
		 cprintf("³");
		 gotoxy(27,24);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 24:
		 gotoxy(26,24);
		 textcolor(5);
		 cprintf("³");
		 gotoxy(27,24);
		 textcolor(10);
		 cprintf("±");
		 gotoxy(28,24);
		 textcolor(5);
		 cprintf("³");
		 gotoxy(27,25);
		 textcolor(4);
		 cprintf("");
		 break;
		}//switch q[n] case 27 ,case 1(car) end

	break;
	case 41:
		switch(q[n])
		{//switch q[n] case 41 ,case 1(car) start
		 case 2:
		 gotoxy(40,2);
		 textcolor(5);
		 cprintf("³");
		 gotoxy(41,2);
		 textcolor(10);
		 cprintf("±");
		 gotoxy(42,2);
		 textcolor(5);
		 cprintf("³");
		 gotoxy(41,3);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 3:
		 gotoxy(40,3);
		 textcolor(5);
		 cprintf("³");
		 gotoxy(41,3);
		 textcolor(10);
		 cprintf("±");
		 gotoxy(42,3);
		 textcolor(5);
		 cprintf("³");
		 gotoxy(41,4);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 4:
		 gotoxy(40,4);
		 textcolor(5);
		 cprintf("³");
		 gotoxy(41,4);
		 textcolor(10);
		 cprintf("±");
		 gotoxy(42,4);
		 textcolor(5);
		 cprintf("³");
		 gotoxy(41,5);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 5:
		 gotoxy(40,5);
		 textcolor(5);
		 cprintf("³");
		 gotoxy(41,5);
		 textcolor(10);
		 cprintf("±");
		 gotoxy(42,5);
		 textcolor(5);
		 cprintf("³");
		 gotoxy(41,6);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 6:
		 gotoxy(40,6);
		 textcolor(5);
		 cprintf("³");
		 gotoxy(41,6);
		 textcolor(10);
		 cprintf("±");
		 gotoxy(42,6);
		 textcolor(5);
		 cprintf("³");
		 gotoxy(41,7);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 7:
		 gotoxy(40,7);
		 textcolor(5);
		 cprintf("³");
		 gotoxy(41,7);
		 textcolor(10);
		 cprintf("±");
		 gotoxy(42,7);
		 textcolor(5);
		 cprintf("³");
		 gotoxy(41,8);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 8:
		 gotoxy(40,8);
		 textcolor(5);
		 cprintf("³");
		 gotoxy(41,8);
		 textcolor(10);
		 cprintf("±");
		 gotoxy(42,8);
		 textcolor(5);
		 cprintf("³");
		 gotoxy(41,9);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 9:
		 gotoxy(40,9);
		 textcolor(5);
		 cprintf("³");
		 gotoxy(41,9);
		 textcolor(10);
		 cprintf("±");
		 gotoxy(42,9);
		 textcolor(5);
		 cprintf("³");
		 gotoxy(41,10);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 10:
		 gotoxy(40,10);
		 textcolor(5);
		 cprintf("³");
		 gotoxy(41,10);
		 textcolor(10);
		 cprintf("±");
		 gotoxy(42,10);
		 textcolor(5);
		 cprintf("³");
		 gotoxy(41,11);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 11:
		 gotoxy(40,11);
		 textcolor(5);
		 cprintf("³");
		 gotoxy(41,11);
		 textcolor(10);
		 cprintf("±");
		 gotoxy(42,11);
		 textcolor(5);
		 cprintf("³");
		 gotoxy(41,12);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 12:
		 gotoxy(40,12);
		 textcolor(5);
		 cprintf("³");
		 gotoxy(41,12);
		 textcolor(10);
		 cprintf("±");
		 gotoxy(42,12);
		 textcolor(5);
		 cprintf("³");
		 gotoxy(41,13);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 13:
		 gotoxy(40,13);
		 textcolor(5);
		 cprintf("³");
		 gotoxy(41,13);
		 textcolor(10);
		 cprintf("±");
		 gotoxy(42,13);
		 textcolor(5);
		 cprintf("³");
		 gotoxy(41,14);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 14:
		 gotoxy(40,14);
		 textcolor(5);
		 cprintf("³");
		 gotoxy(41,14);
		 textcolor(10);
		 cprintf("±");
		 gotoxy(42,14);
		 textcolor(5);
		 cprintf("³");
		 gotoxy(41,15);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 15:
		 gotoxy(40,15);
		 textcolor(5);
		 cprintf("³");
		 gotoxy(41,15);
		 textcolor(10);
		 cprintf("±");
		 gotoxy(42,15);
		 textcolor(5);
		 cprintf("³");
		 gotoxy(41,16);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 16:
		 gotoxy(40,16);
		 textcolor(5);
		 cprintf("³");
		 gotoxy(41,16);
		 textcolor(10);
		 cprintf("±");
		 gotoxy(42,16);
		 textcolor(5);
		 cprintf("³");
		 gotoxy(41,17);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 17:
		 gotoxy(40,17);
		 textcolor(5);
		 cprintf("³");
		 gotoxy(41,17);
		 textcolor(10);
		 cprintf("±");
		 gotoxy(42,17);
		 textcolor(5);
		 cprintf("³");
		 gotoxy(41,18);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 18:
		 gotoxy(40,18);
		 textcolor(5);
		 cprintf("³");
		 gotoxy(41,18);
		 textcolor(10);
		 cprintf("±");
		 gotoxy(42,18);
		 textcolor(5);
		 cprintf("³");
		 gotoxy(41,19);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 19:
		 gotoxy(40,19);
		 textcolor(5);
		 cprintf("³");
		 gotoxy(41,19);
		 textcolor(10);
		 cprintf("±");
		 gotoxy(42,19);
		 textcolor(5);
		 cprintf("³");
		 gotoxy(41,20);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 20:
		 gotoxy(40,20);
		 textcolor(5);
		 cprintf("³");
		 gotoxy(41,20);
		 textcolor(10);
		 cprintf("±");
		 gotoxy(42,20);
		 textcolor(5);
		 cprintf("³");
		 gotoxy(41,21);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 21:
		 gotoxy(40,21);
		 textcolor(5);
		 cprintf("³");
		 gotoxy(41,21);
		 textcolor(10);
		 cprintf("±");
		 gotoxy(42,21);
		 textcolor(5);
		 cprintf("³");
		 gotoxy(41,22);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 22:
		 gotoxy(40,22);
		 textcolor(5);
		 cprintf("³");
		 gotoxy(41,22);
		 textcolor(10);
		 cprintf("±");
		 gotoxy(42,22);
		 textcolor(5);
		 cprintf("³");
		 gotoxy(41,23);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 23:
		 gotoxy(40,23);
		 textcolor(5);
		 cprintf("³");
		 gotoxy(41,23);
		 textcolor(10);
		 cprintf("±");
		 gotoxy(42,23);
		 textcolor(5);
		 cprintf("³");
		 gotoxy(41,24);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 24:
		 gotoxy(40,24);
		 textcolor(5);
		 cprintf("³");
		 gotoxy(41,24);
		 textcolor(10);
		 cprintf("±");
		 gotoxy(42,24);
		 textcolor(5);
		 cprintf("³");
		 gotoxy(41,25);
		 textcolor(4);
		 cprintf("");
		 break;
		}//switch q[n] case 27 ,case 1(car) end
	break;
	case 55:
		switch(q[n])
		{//switch q[n] case 55 ,case 1(car) start
		 case 2:
		 gotoxy(54,2);
		 textcolor(5);
		 cprintf("³");
		 gotoxy(55,2);
		 textcolor(10);
		 cprintf("±");
		 gotoxy(56,2);
		 textcolor(5);
		 cprintf("³");
		 gotoxy(55,3);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 3:
		 gotoxy(54,3);
		 textcolor(5);
		 cprintf("³");
		 gotoxy(55,3);
		 textcolor(10);
		 cprintf("±");
		 gotoxy(56,3);
		 textcolor(5);
		 cprintf("³");
		 gotoxy(55,4);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 4:
		 gotoxy(54,4);
		 textcolor(5);
		 cprintf("³");
		 gotoxy(55,4);
		 textcolor(10);
		 cprintf("±");
		 gotoxy(56,4);
		 textcolor(5);
		 cprintf("³");
		 gotoxy(55,5);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 5:
		 gotoxy(54,5);
		 textcolor(5);
		 cprintf("³");
		 gotoxy(55,5);
		 textcolor(10);
		 cprintf("±");
		 gotoxy(56,5);
		 textcolor(5);
		 cprintf("³");
		 gotoxy(55,6);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 6:
		 gotoxy(54,6);
		 textcolor(5);
		 cprintf("³");
		 gotoxy(55,6);
		 textcolor(10);
		 cprintf("±");
		 gotoxy(56,6);
		 textcolor(5);
		 cprintf("³");
		 gotoxy(55,7);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 7:
		 gotoxy(54,7);
		 textcolor(5);
		 cprintf("³");
		 gotoxy(55,7);
		 textcolor(10);
		 cprintf("±");
		 gotoxy(56,7);
		 textcolor(5);
		 cprintf("³");
		 gotoxy(55,8);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 8:
		 gotoxy(54,8);
		 textcolor(5);
		 cprintf("³");
		 gotoxy(55,8);
		 textcolor(10);
		 cprintf("±");
		 gotoxy(56,8);
		 textcolor(5);
		 cprintf("³");
		 gotoxy(55,9);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 9:
		 gotoxy(54,9);
		 textcolor(5);
		 cprintf("³");
		 gotoxy(55,9);
		 textcolor(10);
		 cprintf("±");
		 gotoxy(56,9);
		 textcolor(5);
		 cprintf("³");
		 gotoxy(55,10);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 10:
		 gotoxy(54,10);
		 textcolor(5);
		 cprintf("³");
		 gotoxy(55,10);
		 textcolor(10);
		 cprintf("±");
		 gotoxy(56,10);
		 textcolor(5);
		 cprintf("³");
		 gotoxy(55,11);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 11:
		 gotoxy(54,11);
		 textcolor(5);
		 cprintf("³");
		 gotoxy(55,11);
		 textcolor(10);
		 cprintf("±");
		 gotoxy(56,11);
		 textcolor(5);
		 cprintf("³");
		 gotoxy(55,12);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 12:
		 gotoxy(54,12);
		 textcolor(5);
		 cprintf("³");
		 gotoxy(55,12);
		 textcolor(10);
		 cprintf("±");
		 gotoxy(56,12);
		 textcolor(5);
		 cprintf("³");
		 gotoxy(55,13);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 13:
		 gotoxy(54,13);
		 textcolor(5);
		 cprintf("³");
		 gotoxy(55,13);
		 textcolor(10);
		 cprintf("±");
		 gotoxy(56,13);
		 textcolor(5);
		 cprintf("³");
		 gotoxy(55,14);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 14:
		 gotoxy(54,14);
		 textcolor(5);
		 cprintf("³");
		 gotoxy(55,14);
		 textcolor(10);
		 cprintf("±");
		 gotoxy(56,14);
		 textcolor(5);
		 cprintf("³");
		 gotoxy(55,15);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 15:
		 gotoxy(54,15);
		 textcolor(5);
		 cprintf("³");
		 gotoxy(55,15);
		 textcolor(10);
		 cprintf("±");
		 gotoxy(56,15);
		 textcolor(5);
		 cprintf("³");
		 gotoxy(55,16);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 16:
		 gotoxy(54,16);
		 textcolor(5);
		 cprintf("³");
		 gotoxy(55,16);
		 textcolor(10);
		 cprintf("±");
		 gotoxy(56,16);
		 textcolor(5);
		 cprintf("³");
		 gotoxy(55,17);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 17:
		 gotoxy(54,17);
		 textcolor(5);
		 cprintf("³");
		 gotoxy(55,17);
		 textcolor(10);
		 cprintf("±");
		 gotoxy(56,17);
		 textcolor(5);
		 cprintf("³");
		 gotoxy(55,18);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 18:
		 gotoxy(54,18);
		 textcolor(5);
		 cprintf("³");
		 gotoxy(55,18);
		 textcolor(10);
		 cprintf("±");
		 gotoxy(56,18);
		 textcolor(5);
		 cprintf("³");
		 gotoxy(55,19);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 19:
		 gotoxy(54,19);
		 textcolor(5);
		 cprintf("³");
		 gotoxy(55,19);
		 textcolor(10);
		 cprintf("±");
		 gotoxy(56,19);
		 textcolor(5);
		 cprintf("³");
		 gotoxy(54,20);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 20:
		 gotoxy(54,20);
		 textcolor(5);
		 cprintf("³");
		 gotoxy(55,20);
		 textcolor(10);
		 cprintf("±");
		 gotoxy(56,20);
		 textcolor(5);
		 cprintf("³");
		 gotoxy(55,21);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 21:
		 gotoxy(54,21);
		 textcolor(5);
		 cprintf("³");
		 gotoxy(55,21);
		 textcolor(10);
		 cprintf("±");
		 gotoxy(56,21);
		 textcolor(5);
		 cprintf("³");
		 gotoxy(55,22);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 22:
		 gotoxy(54,22);
		 textcolor(5);
		 cprintf("³");
		 gotoxy(55,22);
		 textcolor(10);
		 cprintf("±");
		 gotoxy(56,22);
		 textcolor(5);
		 cprintf("³");
		 gotoxy(55,23);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 23:
		 gotoxy(54,23);
		 textcolor(5);
		 cprintf("³");
		 gotoxy(55,23);
		 textcolor(10);
		 cprintf("±");
		 gotoxy(56,23);
		 textcolor(5);
		 cprintf("³");
		 gotoxy(55,24);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 24:
		 gotoxy(54,24);
		 textcolor(5);
		 cprintf("³");
		 gotoxy(55,24);
		 textcolor(10);
		 cprintf("±");
		 gotoxy(56,24);
		 textcolor(5);
		 cprintf("³");
		 gotoxy(55,25);
		 textcolor(4);
		 cprintf("");
		 break;
		}//switch q[n] case 55 ,case 1(car) end
	break;
	}// switch p[n] case 1 end
break;

case 2:
	switch(p[n])
	{///switch p[n] case 2 start
	case 27:
		switch(q[n])
		{//switch q[n] case 27 ,case 2(car) start
		 case 2:
		 gotoxy(26,2);
		 textcolor(6);
		 cprintf("%c",char(17));
		 gotoxy(27,2);
		 textcolor(11);
		 cprintf("Ø");
		 gotoxy(28,2);
		 textcolor(6);
		 cprintf("%c",char(16));
		 gotoxy(27,3);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 3:
		 gotoxy(26,3);
		 textcolor(6);
		 cprintf("%c",char(17));
		 gotoxy(27,3);
		 textcolor(11);
		 cprintf("Ø");
		 gotoxy(28,3);
		 textcolor(6);
		 cprintf("%c",char(16));
		 gotoxy(27,4);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 4:
		 gotoxy(26,4);
		 textcolor(6);
		 cprintf("%c",char(17));
		 gotoxy(27,4);
		 textcolor(11);
		 cprintf("Ø");
		 gotoxy(28,4);
		 textcolor(6);
		 cprintf("%c",char(16));
		 gotoxy(27,5);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 5:
		 gotoxy(26,5);
		 textcolor(6);
		 cprintf("%c",char(17));
		 gotoxy(27,5);
		 textcolor(11);
		 cprintf("Ø");
		 gotoxy(28,5);
		 textcolor(6);
		 cprintf("%c",char(16));
		 gotoxy(27,6);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 6:
		 gotoxy(26,6);
		 textcolor(6);
		 cprintf("%c",char(17));
		 gotoxy(27,6);
		 textcolor(11);
		 cprintf("Ø");
		 gotoxy(28,6);
		 textcolor(6);
		 cprintf("%c",char(16));
		 gotoxy(27,7);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 7:
		 gotoxy(26,7);
		 textcolor(6);
		 cprintf("%c",char(17));
		 gotoxy(27,7);
		 textcolor(11);
		 cprintf("Ø");
		 gotoxy(28,7);
		 textcolor(6);
		 cprintf("%c",char(16));
		 gotoxy(27,8);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 8:
		 gotoxy(26,8);
		 textcolor(6);
		 cprintf("%c",char(17));
		 gotoxy(27,8);
		 textcolor(11);
		 cprintf("Ø");
		 gotoxy(28,8);
		 textcolor(6);
		 cprintf("%c",char(16));
		 gotoxy(27,9);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 9:
		 gotoxy(26,9);
		 textcolor(6);
		 cprintf("%c",char(17));
		 gotoxy(27,9);
		 textcolor(11);
		 cprintf("Ø");
		 gotoxy(28,9);
		 textcolor(6);
		 cprintf("%c",char(16));
		 gotoxy(27,10);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 10:
		 gotoxy(26,10);
		 textcolor(6);
		 cprintf("%c",char(17));
		 gotoxy(27,10);
		 textcolor(11);
		 cprintf("Ø");
		 gotoxy(28,10);
		 textcolor(6);
		 cprintf("%c",char(16));
		 gotoxy(27,11);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 11:
		 gotoxy(26,11);
		 textcolor(6);
		 cprintf("%c",char(17));
		 gotoxy(27,11);
		 textcolor(11);
		 cprintf("Ø");
		 gotoxy(28,11);
		 textcolor(6);
		 cprintf("%c",char(16));
		 gotoxy(27,12);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 12:
		 gotoxy(26,12);
		 textcolor(6);
		 cprintf("%c",char(17));
		 gotoxy(27,12);
		 textcolor(11);
		 cprintf("Ø");
		 gotoxy(28,12);
		 textcolor(6);
		 cprintf("%c",char(16));
		 gotoxy(27,13);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 13:
		 gotoxy(26,13);
		 textcolor(6);
		 cprintf("%c",char(17));
		 gotoxy(27,13);
		 textcolor(11);
		 cprintf("Ø");
		 gotoxy(28,13);
		 textcolor(6);
		 cprintf("%c",char(16));
		 gotoxy(27,14);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 14:
		 gotoxy(26,14);
		 textcolor(6);
		 cprintf("%c",char(17));
		 gotoxy(27,14);
		 textcolor(11);
		 cprintf("Ø");
		 gotoxy(28,14);
		 textcolor(6);
		 cprintf("%c",char(16));
		 gotoxy(27,15);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 15:
		 gotoxy(26,15);
		 textcolor(6);
		 cprintf("%c",char(17));
		 gotoxy(27,15);
		 textcolor(11);
		 cprintf("Ø");
		 gotoxy(28,15);
		 textcolor(6);
		 cprintf("%c",char(16));
		 gotoxy(27,16);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 16:
		 gotoxy(26,16);
		 textcolor(6);
		 cprintf("%c",char(17));
		 gotoxy(27,16);
		 textcolor(11);
		 cprintf("Ø");
		 gotoxy(28,16);
		 textcolor(6);
		 cprintf("%c",char(16));
		 gotoxy(27,17);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 17:
		 gotoxy(26,17);
		 textcolor(6);
		 cprintf("%c",char(17));
		 gotoxy(27,17);
		 textcolor(11);
		 cprintf("Ø");
		 gotoxy(28,17);
		 textcolor(6);
		 cprintf("%c",char(16));
		 gotoxy(27,18);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 18:
		 gotoxy(26,18);
		 textcolor(6);
		 cprintf("%c",char(17));
		 gotoxy(27,18);
		 textcolor(11);
		 cprintf("Ø");
		 gotoxy(28,18);
		 textcolor(6);
		 cprintf("%c",char(16));
		 gotoxy(27,19);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 19:
		 gotoxy(26,19);
		 textcolor(6);
		 cprintf("%c",char(17));
		 gotoxy(27,19);
		 textcolor(11);
		 cprintf("Ø");
		 gotoxy(28,19);
		 textcolor(6);
		 cprintf("%c",char(16));
		 gotoxy(27,20);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 20:
		 gotoxy(26,20);
		 textcolor(6);
		 cprintf("%c",char(17));
		 gotoxy(27,20);
		 textcolor(11);
		 cprintf("Ø");
		 gotoxy(28,20);
		 textcolor(6);
		 cprintf("%c",char(16));
		 gotoxy(27,21);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 21:
		 gotoxy(26,21);
		 textcolor(6);
		 cprintf("%c",char(17));
		 gotoxy(27,21);
		 textcolor(11);
		 cprintf("Ø");
		 gotoxy(28,21);
		 textcolor(6);
		 cprintf("%c",char(16));
		 gotoxy(27,22);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 22:
		 gotoxy(26,22);
		 textcolor(6);
		 cprintf("%c",char(17));
		 gotoxy(27,22);
		 textcolor(11);
		 cprintf("Ø");
		 gotoxy(28,22);
		 textcolor(6);
		 cprintf("%c",char(16));
		 gotoxy(27,23);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 23:
		 gotoxy(26,23);
		 textcolor(6);
		 cprintf("%c",char(17));
		 gotoxy(27,23);
		 textcolor(11);
		 cprintf("Ø");
		 gotoxy(28,23);
		 textcolor(6);
		 cprintf("%c",char(16));
		 gotoxy(27,24);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 24:
		 gotoxy(26,24);
		 textcolor(6);
		 cprintf("%c",char(17));
		 gotoxy(27,24);
		 textcolor(11);
		 cprintf("Ø");
		 gotoxy(28,24);
		 textcolor(6);
		 cprintf("%c",char(16));
		 gotoxy(27,25);
		 textcolor(4);
		 cprintf("");
		 break;
		}//switch q[n] case 27 ,case 2(car) end

	break;
	case 41:
		switch(q[n])
		{//switch q[n] case 41 ,case 2(car) start
		 case 2:
		 gotoxy(40,2);
		 textcolor(6);
		 cprintf("%c",char(17));
		 gotoxy(41,2);
		 textcolor(11);
		 cprintf("Ø");
		 gotoxy(42,2);
		 textcolor(6);
		 cprintf("%c",char(16));
		 gotoxy(41,3);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 3:
		 gotoxy(40,3);
		 textcolor(6);
		 cprintf("%c",char(17));
		 gotoxy(41,3);
		 textcolor(11);
		 cprintf("Ø");
		 gotoxy(42,3);
		 textcolor(6);
		 cprintf("%c",char(16));
		 gotoxy(41,4);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 4:
		 gotoxy(40,4);
		 textcolor(6);
		 cprintf("%c",char(17));
		 gotoxy(41,4);
		 textcolor(11);
		 cprintf("Ø");
		 gotoxy(42,4);
		 textcolor(6);
		 cprintf("%c",char(16));
		 gotoxy(41,5);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 5:
		 gotoxy(40,5);
		 textcolor(6);
		 cprintf("%c",char(17));
		 gotoxy(41,5);
		 textcolor(11);
		 cprintf("Ø");
		 gotoxy(42,5);
		 textcolor(6);
		 cprintf("%c",char(16));
		 gotoxy(41,6);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 6:
		 gotoxy(40,6);
		 textcolor(6);
		 cprintf("%c",char(17));
		 gotoxy(41,6);
		 textcolor(11);
		 cprintf("Ø");
		 gotoxy(42,6);
		 textcolor(6);
		 cprintf("%c",char(16));
		 gotoxy(41,7);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 7:
		 gotoxy(40,7);
		 textcolor(6);
		 cprintf("%c",char(17));
		 gotoxy(41,7);
		 textcolor(11);
		 cprintf("Ø");
		 gotoxy(42,7);
		 textcolor(6);
		 cprintf("%c",char(16));
		 gotoxy(41,8);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 8:
		 gotoxy(40,8);
		 textcolor(6);
		 cprintf("%c",char(17));
		 gotoxy(41,8);
		 textcolor(11);
		 cprintf("Ø");
		 gotoxy(42,8);
		 textcolor(6);
		 cprintf("%c",char(16));
		 gotoxy(41,9);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 9:
		 gotoxy(40,9);
		 textcolor(6);
		 cprintf("%c",char(17));
		 gotoxy(41,9);
		 textcolor(11);
		 cprintf("Ø");
		 gotoxy(42,9);
		 textcolor(6);
		 cprintf("%c",char(16));
		 gotoxy(41,10);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 10:
		 gotoxy(40,10);
		 textcolor(6);
		 cprintf("%c",char(17));
		 gotoxy(41,10);
		 textcolor(11);
		 cprintf("Ø");
		 gotoxy(42,10);
		 textcolor(6);
		 cprintf("%c",char(16));
		 gotoxy(41,11);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 11:
		 gotoxy(40,11);
		 textcolor(6);
		 cprintf("%c",char(17));
		 gotoxy(41,11);
		 textcolor(11);
		 cprintf("Ø");
		 gotoxy(42,11);
		 textcolor(6);
		 cprintf("%c",char(16));
		 gotoxy(41,12);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 12:
		 gotoxy(40,12);
		 textcolor(6);
		 cprintf("%c",char(17));
		 gotoxy(41,12);
		 textcolor(11);
		 cprintf("Ø");
		 gotoxy(42,12);
		 textcolor(6);
		 cprintf("%c",char(16));
		 gotoxy(41,13);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 13:
		 gotoxy(40,13);
		 textcolor(6);
		 cprintf("%c",char(17));
		 gotoxy(41,13);
		 textcolor(11);
		 cprintf("Ø");
		 gotoxy(42,13);
		 textcolor(6);
		 cprintf("%c",char(16));
		 gotoxy(41,14);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 14:
		 gotoxy(40,14);
		 textcolor(6);
		 cprintf("%c",char(17));
		 gotoxy(41,14);
		 textcolor(11);
		 cprintf("Ø");
		 gotoxy(42,14);
		 textcolor(6);
		 cprintf("%c",char(16));
		 gotoxy(41,15);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 15:
		 gotoxy(40,15);
		 textcolor(6);
		 cprintf("%c",char(17));
		 gotoxy(41,15);
		 textcolor(11);
		 cprintf("Ø");
		 gotoxy(42,15);
		 textcolor(6);
		 cprintf("%c",char(16));
		 gotoxy(41,16);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 16:
		 gotoxy(40,16);
		 textcolor(6);
		 cprintf("%c",char(17));
		 gotoxy(41,16);
		 textcolor(11);
		 cprintf("Ø");
		 gotoxy(42,16);
		 textcolor(6);
		 cprintf("%c",char(16));
		 gotoxy(41,17);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 17:
		 gotoxy(40,17);
		 textcolor(6);
		 cprintf("%c",char(17));
		 gotoxy(41,17);
		 textcolor(11);
		 cprintf("Ø");
		 gotoxy(42,17);
		 textcolor(6);
		 cprintf("%c",char(16));
		 gotoxy(41,18);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 18:
		 gotoxy(40,18);
		 textcolor(6);
		 cprintf("%c",char(17));
		 gotoxy(41,18);
		 textcolor(11);
		 cprintf("Ø");
		 gotoxy(42,18);
		 textcolor(6);
		 cprintf("%c",char(16));
		 gotoxy(41,19);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 19:
		 gotoxy(40,19);
		 textcolor(6);
		 cprintf("%c",char(17));
		 gotoxy(41,19);
		 textcolor(11);
		 cprintf("Ø");
		 gotoxy(42,19);
		 textcolor(6);
		 cprintf("%c",char(16));
		 gotoxy(41,20);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 20:
		 gotoxy(40,20);
		 textcolor(6);
		 cprintf("%c",char(17));
		 gotoxy(41,20);
		 textcolor(11);
		 cprintf("Ø");
		 gotoxy(42,20);
		 textcolor(6);
		 cprintf("%c",char(16));
		 gotoxy(41,21);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 21:
		 gotoxy(40,21);
		 textcolor(6);
		 cprintf("%c",char(17));
		 gotoxy(41,21);
		 textcolor(11);
		 cprintf("Ø");
		 gotoxy(42,21);
		 textcolor(6);
		 cprintf("%c",char(16));
		 gotoxy(41,22);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 22:
		 gotoxy(40,22);
		 textcolor(6);
		 cprintf("%c",char(17));
		 gotoxy(41,22);
		 textcolor(11);
		 cprintf("Ø");
		 gotoxy(42,22);
		 textcolor(6);
		 cprintf("%c",char(16));
		 gotoxy(41,23);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 23:
		 gotoxy(40,23);
		 textcolor(6);
		 cprintf("%c",char(17));
		 gotoxy(41,23);
		 textcolor(11);
		 cprintf("Ø");
		 gotoxy(42,23);
		 textcolor(6);
		 cprintf("%c",char(16));
		 gotoxy(41,24);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 24:
		 gotoxy(40,24);
		 textcolor(6);
		 cprintf("%c",char(17));
		 gotoxy(41,24);
		 textcolor(11);
		 cprintf("Ø");
		 gotoxy(42,24);
		 textcolor(6);
		 cprintf("%c",char(16));
		 gotoxy(41,25);
		 textcolor(4);
		 cprintf("");
		 break;
		}//switch q[n] case 41 ,case 2(car) end

	break;
	case 55:
		switch(q[n])
		{//switch q[n] case 55 ,case 2(car) start
		 case 2:
		 gotoxy(54,2);
		 textcolor(6);
		 cprintf("%c",char(17));
		 gotoxy(55,2);
		 textcolor(11);
		 cprintf("Ø");
		 gotoxy(56,2);
		 textcolor(6);
		 cprintf("%c",char(16));
		 gotoxy(55,3);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 3:
		 gotoxy(54,3);
		 textcolor(6);
		 cprintf("%c",char(17));
		 gotoxy(55,3);
		 textcolor(11);
		 cprintf("Ø");
		 gotoxy(56,3);
		 textcolor(6);
		 cprintf("%c",char(16));
		 gotoxy(55,4);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 4:
		 gotoxy(54,4);
		 textcolor(6);
		 cprintf("%c",char(17));
		 gotoxy(55,4);
		 textcolor(11);
		 cprintf("Ø");
		 gotoxy(56,4);
		 textcolor(6);
		 cprintf("%c",char(16));
		 gotoxy(55,5);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 5:
		 gotoxy(54,5);
		 textcolor(6);
		 cprintf("%c",char(17));
		 gotoxy(55,5);
		 textcolor(11);
		 cprintf("Ø");
		 gotoxy(56,5);
		 textcolor(6);
		 cprintf("%c",char(16));
		 gotoxy(55,6);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 6:
		 gotoxy(54,6);
		 textcolor(6);
		 cprintf("%c",char(17));
		 gotoxy(55,6);
		 textcolor(11);
		 cprintf("Ø");
		 gotoxy(56,6);
		 textcolor(6);
		 cprintf("%c",char(16));
		 gotoxy(55,7);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 7:
		 gotoxy(54,7);
		 textcolor(6);
		 cprintf("%c",char(17));
		 gotoxy(55,7);
		 textcolor(11);
		 cprintf("Ø");
		 gotoxy(56,7);
		 textcolor(6);
		 cprintf("%c",char(16));
		 gotoxy(55,8);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 8:
		 gotoxy(54,8);
		 textcolor(6);
		 cprintf("%c",char(17));
		 gotoxy(55,8);
		 textcolor(11);
		 cprintf("Ø");
		 gotoxy(56,8);
		 textcolor(6);
		 cprintf("%c",char(16));
		 gotoxy(55,9);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 9:
		 gotoxy(54,9);
		 textcolor(6);
		 cprintf("%c",char(17));
		 gotoxy(55,9);
		 textcolor(11);
		 cprintf("Ø");
		 gotoxy(56,9);
		 textcolor(6);
		 cprintf("%c",char(16));
		 gotoxy(55,10);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 10:
		 gotoxy(54,10);
		 textcolor(6);
		 cprintf("%c",char(17));
		 gotoxy(55,10);
		 textcolor(11);
		 cprintf("Ø");
		 gotoxy(56,10);
		 textcolor(6);
		 cprintf("%c",char(16));
		 gotoxy(55,11);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 11:
		 gotoxy(54,11);
		 textcolor(6);
		 cprintf("%c",char(17));
		 gotoxy(55,11);
		 textcolor(11);
		 cprintf("Ø");
		 gotoxy(56,11);
		 textcolor(6);
		 cprintf("%c",char(16));
		 gotoxy(55,12);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 12:
		 gotoxy(54,12);
		 textcolor(6);
		 cprintf("%c",char(17));
		 gotoxy(55,12);
		 textcolor(11);
		 cprintf("Ø");
		 gotoxy(56,12);
		 textcolor(6);
		 cprintf("%c",char(16));
		 gotoxy(55,13);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 13:
		 gotoxy(54,13);
		 textcolor(6);
		 cprintf("%c",char(17));
		 gotoxy(55,13);
		 textcolor(11);
		 cprintf("Ø");
		 gotoxy(56,13);
		 textcolor(6);
		 cprintf("%c",char(16));
		 gotoxy(55,14);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 14:
		 gotoxy(54,14);
		 textcolor(6);
		 cprintf("%c",char(17));
		 gotoxy(55,14);
		 textcolor(11);
		 cprintf("Ø");
		 gotoxy(56,14);
		 textcolor(6);
		 cprintf("%c",char(16));
		 gotoxy(55,15);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 15:
		 gotoxy(54,15);
		 textcolor(6);
		 cprintf("%c",char(17));
		 gotoxy(55,15);
		 textcolor(11);
		 cprintf("Ø");
		 gotoxy(56,15);
		 textcolor(6);
		 cprintf("%c",char(16));
		 gotoxy(55,16);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 16:
		 gotoxy(54,16);
		 textcolor(6);
		 cprintf("%c",char(17));
		 gotoxy(55,16);
		 textcolor(11);
		 cprintf("Ø");
		 gotoxy(56,16);
		 textcolor(6);
		 cprintf("%c",char(16));
		 gotoxy(55,17);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 17:
		 gotoxy(54,17);
		 textcolor(6);
		 cprintf("%c",char(17));
		 gotoxy(55,17);
		 textcolor(11);
		 cprintf("Ø");
		 gotoxy(56,17);
		 textcolor(6);
		 cprintf("%c",char(16));
		 gotoxy(55,18);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 18:
		 gotoxy(54,18);
		 textcolor(6);
		 cprintf("%c",char(17));
		 gotoxy(55,18);
		 textcolor(11);
		 cprintf("Ø");
		 gotoxy(56,18);
		 textcolor(6);
		 cprintf("%c",char(16));
		 gotoxy(55,19);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 19:
		 gotoxy(54,19);
		 textcolor(6);
		 cprintf("%c",char(17));
		 gotoxy(55,19);
		 textcolor(11);
		 cprintf("Ø");
		 gotoxy(56,19);
		 textcolor(6);
		 cprintf("%c",char(16));
		 gotoxy(55,20);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 20:
		 gotoxy(54,20);
		 textcolor(6);
		 cprintf("%c",char(17));
		 gotoxy(55,20);
		 textcolor(11);
		 cprintf("Ø");
		 gotoxy(56,20);
		 textcolor(6);
		 cprintf("%c",char(16));
		 gotoxy(55,21);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 21:
		 gotoxy(54,21);
		 textcolor(6);
		 cprintf("%c",char(17));
		 gotoxy(55,21);
		 textcolor(11);
		 cprintf("Ø");
		 gotoxy(56,21);
		 textcolor(6);
		 cprintf("%c",char(16));
		 gotoxy(55,22);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 22:
		 gotoxy(54,22);
		 textcolor(6);
		 cprintf("%c",char(17));
		 gotoxy(55,22);
		 textcolor(11);
		 cprintf("Ø");
		 gotoxy(56,22);
		 textcolor(6);
		 cprintf("%c",char(16));
		 gotoxy(55,23);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 23:
		 gotoxy(54,23);
		 textcolor(6);
		 cprintf("%c",char(17));
		 gotoxy(55,23);
		 textcolor(11);
		 cprintf("Ø");
		 gotoxy(56,23);
		 textcolor(6);
		 cprintf("%c",char(16));
		 gotoxy(55,24);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 24:
		 gotoxy(54,24);
		 textcolor(6);
		 cprintf("%c",char(17));
		 gotoxy(55,24);
		 textcolor(11);
		 cprintf("Ø");
		 gotoxy(56,24);
		 textcolor(6);
		 cprintf("%c",char(16));
		 gotoxy(55,25);
		 textcolor(4);
		 cprintf("");
		 break;
		}//switch q[n] case 55 ,case 2(car) end

	break;
	}// switch p[n] case 2 end
break;

case 3:
	switch(p[n])
	{///switch p[n] case 3 start
	case 27:
		switch(q[n])
		{//switch q[n] case 27 ,case 3(car) start
		 case 2:
		 gotoxy(26,2);
		 textcolor(6);
		 cprintf("Ã");
		 gotoxy(27,2);
		 textcolor(10);
		 cprintf("ð");
		 gotoxy(28,2);
		 textcolor(6);
		 cprintf("´");
		 gotoxy(27,3);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 3:
		 gotoxy(26,3);
		 textcolor(6);
		 cprintf("Ã");
		 gotoxy(27,3);
		 textcolor(10);
		 cprintf("ð");
		 gotoxy(28,3);
		 textcolor(6);
		 cprintf("´");
		 gotoxy(27,4);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 4:
		 gotoxy(26,4);
		 textcolor(6);
		 cprintf("Ã");
		 gotoxy(27,4);
		 textcolor(10);
		 cprintf("ð");
		 gotoxy(28,4);
		 textcolor(6);
		 cprintf("´");
		 gotoxy(27,5);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 5:
		 gotoxy(26,5);
		 textcolor(6);
		 cprintf("Ã");
		 gotoxy(27,5);
		 textcolor(10);
		 cprintf("ð");
		 gotoxy(28,5);
		 textcolor(6);
		 cprintf("´");
		 gotoxy(27,6);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 6:
		 gotoxy(26,6);
		 textcolor(6);
		 cprintf("Ã");
		 gotoxy(27,6);
		 textcolor(10);
		 cprintf("ð");
		 gotoxy(28,6);
		 textcolor(6);
		 cprintf("´");
		 gotoxy(27,7);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 7:
		 gotoxy(26,7);
		 textcolor(6);
		 cprintf("Ã");
		 gotoxy(27,7);
		 textcolor(10);
		 cprintf("ð");
		 gotoxy(28,7);
		 textcolor(6);
		 cprintf("´");
		 gotoxy(27,8);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 8:
		 gotoxy(26,8);
		 textcolor(6);
		 cprintf("Ã");
		 gotoxy(27,8);
		 textcolor(10);
		 cprintf("ð");
		 gotoxy(28,8);
		 textcolor(6);
		 cprintf("´");
		 gotoxy(27,9);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 9:
		 gotoxy(26,9);
		 textcolor(6);
		 cprintf("Ã");
		 gotoxy(27,9);
		 textcolor(10);
		 cprintf("ð");
		 gotoxy(28,9);
		 textcolor(6);
		 cprintf("´");
		 gotoxy(27,10);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 10:
		 gotoxy(26,10);
		 textcolor(6);
		 cprintf("Ã");
		 gotoxy(27,10);
		 textcolor(10);
		 cprintf("ð");
		 gotoxy(28,10);
		 textcolor(6);
		 cprintf("´");
		 gotoxy(27,11);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 11:
		 gotoxy(26,11);
		 textcolor(6);
		 cprintf("Ã");
		 gotoxy(27,11);
		 textcolor(10);
		 cprintf("ð");
		 gotoxy(28,11);
		 textcolor(6);
		 cprintf("´");
		 gotoxy(27,12);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 12:
		 gotoxy(26,12);
		 textcolor(6);
		 cprintf("Ã");
		 gotoxy(27,12);
		 textcolor(10);
		 cprintf("ð");
		 gotoxy(28,12);
		 textcolor(6);
		 cprintf("´");
		 gotoxy(27,13);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 13:
		 gotoxy(26,13);
		 textcolor(6);
		 cprintf("Ã");
		 gotoxy(27,13);
		 textcolor(10);
		 cprintf("ð");
		 gotoxy(28,13);
		 textcolor(6);
		 cprintf("´");
		 gotoxy(27,14);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 14:
		 gotoxy(26,14);
		 textcolor(6);
		 cprintf("Ã");
		 gotoxy(27,14);
		 textcolor(10);
		 cprintf("ð");
		 gotoxy(28,14);
		 textcolor(6);
		 cprintf("´");
		 gotoxy(27,15);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 15:
		 gotoxy(26,15);
		 textcolor(6);
		 cprintf("Ã");
		 gotoxy(27,15);
		 textcolor(10);
		 cprintf("ð");
		 gotoxy(28,15);
		 textcolor(6);
		 cprintf("´");
		 gotoxy(27,16);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 16:
		 gotoxy(26,16);
		 textcolor(6);
		 cprintf("Ã");
		 gotoxy(27,16);
		 textcolor(10);
		 cprintf("ð");
		 gotoxy(28,16);
		 textcolor(6);
		 cprintf("´");
		 gotoxy(27,17);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 17:
		 gotoxy(26,17);
		 textcolor(6);
		 cprintf("Ã");
		 gotoxy(27,17);
		 textcolor(10);
		 cprintf("ð");
		 gotoxy(28,17);
		 textcolor(6);
		 cprintf("´");
		 gotoxy(27,18);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 18:
		 gotoxy(26,18);
		 textcolor(6);
		 cprintf("Ã");
		 gotoxy(27,18);
		 textcolor(10);
		 cprintf("ð");
		 gotoxy(28,18);
		 textcolor(6);
		 cprintf("´");
		 gotoxy(27,19);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 19:
		 gotoxy(26,19);
		 textcolor(6);
		 cprintf("Ã");
		 gotoxy(27,19);
		 textcolor(10);
		 cprintf("ð");
		 gotoxy(28,19);
		 textcolor(6);
		 cprintf("´");
		 gotoxy(27,20);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 20:
		 gotoxy(26,20);
		 textcolor(6);
		 cprintf("Ã");
		 gotoxy(27,20);
		 textcolor(10);
		 cprintf("ð");
		 gotoxy(28,20);
		 textcolor(6);
		 cprintf("´");
		 gotoxy(27,21);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 21:
		 gotoxy(26,21);
		 textcolor(6);
		 cprintf("Ã");
		 gotoxy(27,21);
		 textcolor(10);
		 cprintf("ð");
		 gotoxy(28,21);
		 textcolor(6);
		 cprintf("´");
		 gotoxy(27,22);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 22:
		 gotoxy(26,22);
		 textcolor(6);
		 cprintf("Ã");
		 gotoxy(27,22);
		 textcolor(10);
		 cprintf("ð");
		 gotoxy(28,22);
		 textcolor(6);
		 cprintf("´");
		 gotoxy(27,23);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 23:
		 gotoxy(26,23);
		 textcolor(6);
		 cprintf("Ã");
		 gotoxy(27,23);
		 textcolor(10);
		 cprintf("ð");
		 gotoxy(28,23);
		 textcolor(6);
		 cprintf("´");
		 gotoxy(27,24);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 24:
		 gotoxy(26,24);
		 textcolor(6);
		 cprintf("Ã");
		 gotoxy(27,24);
		 textcolor(10);
		 cprintf("ð");
		 gotoxy(28,24);
		 textcolor(6);
		 cprintf("´");
		 gotoxy(27,25);
		 textcolor(4);
		 cprintf("");
		 break;
		}//switch q[n] case 27 ,case 3(car) end
	break;
	case 41:
		switch(q[n])
		{//switch q[n] case 41 ,case 3(car) start
		 case 2:
		 gotoxy(40,2);
		 textcolor(6);
		 cprintf("Ã");
		 gotoxy(41,2);
		 textcolor(10);
		 cprintf("ð");
		 gotoxy(42,2);
		 textcolor(6);
		 cprintf("´");
		 gotoxy(41,3);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 3:
		 gotoxy(40,3);
		 textcolor(6);
		 cprintf("Ã");
		 gotoxy(41,3);
		 textcolor(10);
		 cprintf("ð");
		 gotoxy(42,3);
		 textcolor(6);
		 cprintf("´");
		 gotoxy(41,4);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 4:
		 gotoxy(40,4);
		 textcolor(6);
		 cprintf("Ã");
		 gotoxy(41,4);
		 textcolor(10);
		 cprintf("ð");
		 gotoxy(42,4);
		 textcolor(6);
		 cprintf("´");
		 gotoxy(41,5);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 5:
		 gotoxy(40,5);
		 textcolor(6);
		 cprintf("Ã");
		 gotoxy(41,5);
		 textcolor(10);
		 cprintf("ð");
		 gotoxy(42,5);
		 textcolor(6);
		 cprintf("´");
		 gotoxy(41,6);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 6:
		 gotoxy(40,6);
		 textcolor(6);
		 cprintf("Ã");
		 gotoxy(41,6);
		 textcolor(10);
		 cprintf("ð");
		 gotoxy(42,6);
		 textcolor(6);
		 cprintf("´");
		 gotoxy(41,7);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 7:
		 gotoxy(40,7);
		 textcolor(6);
		 cprintf("Ã");
		 gotoxy(41,7);
		 textcolor(10);
		 cprintf("ð");
		 gotoxy(42,7);
		 textcolor(6);
		 cprintf("´");
		 gotoxy(41,8);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 8:
		 gotoxy(40,8);
		 textcolor(6);
		 cprintf("Ã");
		 gotoxy(41,8);
		 textcolor(10);
		 cprintf("ð");
		 gotoxy(42,8);
		 textcolor(6);
		 cprintf("´");
		 gotoxy(41,9);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 9:
		 gotoxy(40,9);
		 textcolor(6);
		 cprintf("Ã");
		 gotoxy(41,9);
		 textcolor(10);
		 cprintf("ð");
		 gotoxy(42,9);
		 textcolor(6);
		 cprintf("´");
		 gotoxy(41,10);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 10:
		 gotoxy(40,10);
		 textcolor(6);
		 cprintf("Ã");
		 gotoxy(41,10);
		 textcolor(10);
		 cprintf("ð");
		 gotoxy(42,10);
		 textcolor(6);
		 cprintf("´");
		 gotoxy(41,11);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 11:
		 gotoxy(40,11);
		 textcolor(6);
		 cprintf("Ã");
		 gotoxy(41,11);
		 textcolor(10);
		 cprintf("ð");
		 gotoxy(42,11);
		 textcolor(6);
		 cprintf("´");
		 gotoxy(41,12);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 12:
		 gotoxy(40,12);
		 textcolor(6);
		 cprintf("Ã");
		 gotoxy(41,12);
		 textcolor(10);
		 cprintf("ð");
		 gotoxy(42,12);
		 textcolor(6);
		 cprintf("´");
		 gotoxy(41,13);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 13:
		 gotoxy(40,13);
		 textcolor(6);
		 cprintf("Ã");
		 gotoxy(41,13);
		 textcolor(10);
		 cprintf("ð");
		 gotoxy(42,13);
		 textcolor(6);
		 cprintf("´");
		 gotoxy(41,14);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 14:
		 gotoxy(40,14);
		 textcolor(6);
		 cprintf("Ã");
		 gotoxy(41,14);
		 textcolor(10);
		 cprintf("ð");
		 gotoxy(42,14);
		 textcolor(6);
		 cprintf("´");
		 gotoxy(41,15);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 15:
		 gotoxy(40,15);
		 textcolor(6);
		 cprintf("Ã");
		 gotoxy(41,15);
		 textcolor(10);
		 cprintf("ð");
		 gotoxy(42,15);
		 textcolor(6);
		 cprintf("´");
		 gotoxy(41,16);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 16:
		 gotoxy(40,16);
		 textcolor(6);
		 cprintf("Ã");
		 gotoxy(41,16);
		 textcolor(10);
		 cprintf("ð");
		 gotoxy(42,16);
		 textcolor(6);
		 cprintf("´");
		 gotoxy(41,17);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 17:
		 gotoxy(40,17);
		 textcolor(6);
		 cprintf("Ã");
		 gotoxy(41,17);
		 textcolor(10);
		 cprintf("ð");
		 gotoxy(42,17);
		 textcolor(6);
		 cprintf("´");
		 gotoxy(41,18);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 18:
		 gotoxy(40,18);
		 textcolor(6);
		 cprintf("Ã");
		 gotoxy(41,18);
		 textcolor(10);
		 cprintf("ð");
		 gotoxy(42,18);
		 textcolor(6);
		 cprintf("´");
		 gotoxy(41,19);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 19:
		 gotoxy(40,19);
		 textcolor(6);
		 cprintf("Ã");
		 gotoxy(41,19);
		 textcolor(10);
		 cprintf("ð");
		 gotoxy(42,19);
		 textcolor(6);
		 cprintf("´");
		 gotoxy(41,20);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 20:
		 gotoxy(40,20);
		 textcolor(6);
		 cprintf("Ã");
		 gotoxy(41,20);
		 textcolor(10);
		 cprintf("ð");
		 gotoxy(42,20);
		 textcolor(6);
		 cprintf("´");
		 gotoxy(41,21);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 21:
		 gotoxy(40,21);
		 textcolor(6);
		 cprintf("Ã");
		 gotoxy(41,21);
		 textcolor(10);
		 cprintf("ð");
		 gotoxy(42,21);
		 textcolor(6);
		 cprintf("´");
		 gotoxy(41,22);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 22:
		 gotoxy(40,22);
		 textcolor(6);
		 cprintf("Ã");
		 gotoxy(41,22);
		 textcolor(10);
		 cprintf("ð");
		 gotoxy(42,22);
		 textcolor(6);
		 cprintf("´");
		 gotoxy(41,23);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 23:
		 gotoxy(40,23);
		 textcolor(6);
		 cprintf("Ã");
		 gotoxy(41,23);
		 textcolor(10);
		 cprintf("ð");
		 gotoxy(42,23);
		 textcolor(6);
		 cprintf("´");
		 gotoxy(41,24);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 24:
		 gotoxy(40,24);
		 textcolor(6);
		 cprintf("Ã");
		 gotoxy(41,24);
		 textcolor(10);
		 cprintf("ð");
		 gotoxy(42,24);
		 textcolor(6);
		 cprintf("´");
		 gotoxy(41,25);
		 textcolor(4);
		 cprintf("");
		 break;
		}//switch q[n] case 41 ,case 3(car) end
	break;
	case 55:
		switch(q[n])
		{//switch q[n] case 55 ,case 3(car) start
		 case 2:
		 gotoxy(54,2);
		 textcolor(6);
		 cprintf("Ã");
		 gotoxy(55,2);
		 textcolor(10);
		 cprintf("ð");
		 gotoxy(56,2);
		 textcolor(6);
		 cprintf("´");
		 gotoxy(55,3);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 3:
		 gotoxy(54,3);
		 textcolor(6);
		 cprintf("Ã");
		 gotoxy(55,3);
		 textcolor(10);
		 cprintf("ð");
		 gotoxy(56,3);
		 textcolor(6);
		 cprintf("´");
		 gotoxy(55,4);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 4:
		 gotoxy(54,4);
		 textcolor(6);
		 cprintf("Ã");
		 gotoxy(55,4);
		 textcolor(10);
		 cprintf("ð");
		 gotoxy(56,4);
		 textcolor(6);
		 cprintf("´");
		 gotoxy(55,5);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 5:
		 gotoxy(54,5);
		 textcolor(6);
		 cprintf("Ã");
		 gotoxy(55,5);
		 textcolor(10);
		 cprintf("ð");
		 gotoxy(56,5);
		 textcolor(6);
		 cprintf("´");
		 gotoxy(55,6);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 6:
		 gotoxy(54,6);
		 textcolor(6);
		 cprintf("Ã");
		 gotoxy(55,6);
		 textcolor(10);
		 cprintf("ð");
		 gotoxy(56,6);
		 textcolor(6);
		 cprintf("´");
		 gotoxy(55,7);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 7:
		 gotoxy(54,7);
		 textcolor(6);
		 cprintf("Ã");
		 gotoxy(55,7);
		 textcolor(10);
		 cprintf("ð");
		 gotoxy(56,7);
		 textcolor(6);
		 cprintf("´");
		 gotoxy(55,8);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 8:
		 gotoxy(54,8);
		 textcolor(6);
		 cprintf("Ã");
		 gotoxy(55,8);
		 textcolor(10);
		 cprintf("ð");
		 gotoxy(56,8);
		 textcolor(6);
		 cprintf("´");
		 gotoxy(55,9);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 9:
		 gotoxy(54,9);
		 textcolor(6);
		 cprintf("Ã");
		 gotoxy(55,9);
		 textcolor(10);
		 cprintf("ð");
		 gotoxy(56,9);
		 textcolor(6);
		 cprintf("´");
		 gotoxy(55,10);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 10:
		 gotoxy(54,10);
		 textcolor(6);
		 cprintf("Ã");
		 gotoxy(55,10);
		 textcolor(10);
		 cprintf("ð");
		 gotoxy(56,10);
		 textcolor(6);
		 cprintf("´");
		 gotoxy(55,11);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 11:
		 gotoxy(54,11);
		 textcolor(6);
		 cprintf("Ã");
		 gotoxy(55,11);
		 textcolor(10);
		 cprintf("ð");
		 gotoxy(56,11);
		 textcolor(6);
		 cprintf("´");
		 gotoxy(55,12);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 12:
		 gotoxy(54,12);
		 textcolor(6);
		 cprintf("Ã");
		 gotoxy(55,12);
		 textcolor(10);
		 cprintf("ð");
		 gotoxy(56,12);
		 textcolor(6);
		 cprintf("´");
		 gotoxy(55,13);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 13:
		 gotoxy(54,13);
		 textcolor(6);
		 cprintf("Ã");
		 gotoxy(55,13);
		 textcolor(10);
		 cprintf("ð");
		 gotoxy(56,13);
		 textcolor(6);
		 cprintf("´");
		 gotoxy(55,14);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 14:
		 gotoxy(54,14);
		 textcolor(6);
		 cprintf("Ã");
		 gotoxy(55,14);
		 textcolor(10);
		 cprintf("ð");
		 gotoxy(56,14);
		 textcolor(6);
		 cprintf("´");
		 gotoxy(55,15);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 15:
		 gotoxy(54,15);
		 textcolor(6);
		 cprintf("Ã");
		 gotoxy(55,15);
		 textcolor(10);
		 cprintf("ð");
		 gotoxy(56,15);
		 textcolor(6);
		 cprintf("´");
		 gotoxy(55,16);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 16:
		 gotoxy(54,16);
		 textcolor(6);
		 cprintf("Ã");
		 gotoxy(55,16);
		 textcolor(10);
		 cprintf("ð");
		 gotoxy(56,16);
		 textcolor(6);
		 cprintf("´");
		 gotoxy(55,17);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 17:
		 gotoxy(54,17);
		 textcolor(6);
		 cprintf("Ã");
		 gotoxy(55,17);
		 textcolor(10);
		 cprintf("ð");
		 gotoxy(56,17);
		 textcolor(6);
		 cprintf("´");
		 gotoxy(55,18);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 18:
		 gotoxy(54,18);
		 textcolor(6);
		 cprintf("Ã");
		 gotoxy(55,18);
		 textcolor(10);
		 cprintf("ð");
		 gotoxy(56,18);
		 textcolor(6);
		 cprintf("´");
		 gotoxy(55,19);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 19:
		 gotoxy(54,19);
		 textcolor(6);
		 cprintf("Ã");
		 gotoxy(55,19);
		 textcolor(10);
		 cprintf("ð");
		 gotoxy(56,19);
		 textcolor(6);
		 cprintf("´");
		 gotoxy(55,20);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 20:
		 gotoxy(54,20);
		 textcolor(6);
		 cprintf("Ã");
		 gotoxy(55,20);
		 textcolor(10);
		 cprintf("ð");
		 gotoxy(56,20);
		 textcolor(6);
		 cprintf("´");
		 gotoxy(55,21);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 21:
		 gotoxy(54,21);
		 textcolor(6);
		 cprintf("Ã");
		 gotoxy(55,21);
		 textcolor(10);
		 cprintf("ð");
		 gotoxy(56,21);
		 textcolor(6);
		 cprintf("´");
		 gotoxy(55,22);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 22:
		 gotoxy(54,22);
		 textcolor(6);
		 cprintf("Ã");
		 gotoxy(55,22);
		 textcolor(10);
		 cprintf("ð");
		 gotoxy(56,22);
		 textcolor(6);
		 cprintf("´");
		 gotoxy(55,23);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 23:
		 gotoxy(54,23);
		 textcolor(6);
		 cprintf("Ã");
		 gotoxy(55,23);
		 textcolor(10);
		 cprintf("ð");
		 gotoxy(56,23);
		 textcolor(6);
		 cprintf("´");
		 gotoxy(55,24);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 24:
		 gotoxy(54,24);
		 textcolor(6);
		 cprintf("Ã");
		 gotoxy(55,24);
		 textcolor(10);
		 cprintf("ð");
		 gotoxy(56,24);
		 textcolor(6);
		 cprintf("´");
		 gotoxy(55,25);
		 textcolor(4);
		 cprintf("");
		 break;
		}//switch q[n] case 55 ,case 3(car) end
	break;
	}// switch p[n] case 3 end
break;

case 4:
	switch(p[n])
	{///switch p[n] case 4 start
	case 27:
		switch(q[n])
		{//switch q[n] case 27 ,case 4(car) start
		 case 2:
		 gotoxy(26,2);
		 textcolor(11);
		 cprintf("(");
		 gotoxy(27,2);
		 textcolor(9);
		 cprintf("Ë");
		 gotoxy(28,2);
		 textcolor(11);
		 cprintf(")");
		 gotoxy(27,3);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 3:
		 gotoxy(26,3);
		 textcolor(11);
		 cprintf("(");
		 gotoxy(27,3);
		 textcolor(9);
		 cprintf("Ë");
		 gotoxy(28,3);
		 textcolor(11);
		 cprintf(")");
		 gotoxy(27,4);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 4:
		 gotoxy(26,4);
		 textcolor(11);
		 cprintf("(");
		 gotoxy(27,4);
		 textcolor(9);
		 cprintf("Ë");
		 gotoxy(28,4);
		 textcolor(11);
		 cprintf(")");
		 gotoxy(27,5);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 5:
		 gotoxy(26,5);
		 textcolor(11);
		 cprintf("(");
		 gotoxy(27,5);
		 textcolor(9);
		 cprintf("Ë");
		 gotoxy(28,5);
		 textcolor(11);
		 cprintf(")");
		 gotoxy(27,6);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 6:
		 gotoxy(26,6);
		 textcolor(11);
		 cprintf("(");
		 gotoxy(27,6);
		 textcolor(9);
		 cprintf("Ë");
		 gotoxy(28,6);
		 textcolor(11);
		 cprintf(")");
		 gotoxy(27,7);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 7:
		 gotoxy(26,7);
		 textcolor(11);
		 cprintf("(");
		 gotoxy(27,7);
		 textcolor(9);
		 cprintf("Ë");
		 gotoxy(28,7);
		 textcolor(11);
		 cprintf(")");
		 gotoxy(27,8);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 8:
		 gotoxy(26,8);
		 textcolor(11);
		 cprintf("(");
		 gotoxy(27,8);
		 textcolor(9);
		 cprintf("Ë");
		 gotoxy(28,8);
		 textcolor(11);
		 cprintf(")");
		 gotoxy(27,9);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 9:
		 gotoxy(26,9);
		 textcolor(11);
		 cprintf("(");
		 gotoxy(27,9);
		 textcolor(9);
		 cprintf("Ë");
		 gotoxy(28,9);
		 textcolor(11);
		 cprintf(")");
		 gotoxy(27,10);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 10:
		 gotoxy(26,10);
		 textcolor(11);
		 cprintf("(");
		 gotoxy(27,10);
		 textcolor(9);
		 cprintf("Ë");
		 gotoxy(28,10);
		 textcolor(11);
		 cprintf(")");
		 gotoxy(27,11);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 11:
		 gotoxy(26,11);
		 textcolor(11);
		 cprintf("(");
		 gotoxy(27,11);
		 textcolor(9);
		 cprintf("Ë");
		 gotoxy(28,11);
		 textcolor(11);
		 cprintf(")");
		 gotoxy(27,12);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 12:
		 gotoxy(26,12);
		 textcolor(11);
		 cprintf("(");
		 gotoxy(27,12);
		 textcolor(9);
		 cprintf("Ë");
		 gotoxy(28,12);
		 textcolor(11);
		 cprintf(")");
		 gotoxy(27,13);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 13:
		 gotoxy(26,13);
		 textcolor(11);
		 cprintf("(");
		 gotoxy(27,13);
		 textcolor(9);
		 cprintf("Ë");
		 gotoxy(28,13);
		 textcolor(11);
		 cprintf(")");
		 gotoxy(27,14);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 14:
		 gotoxy(26,14);
		 textcolor(11);
		 cprintf("(");
		 gotoxy(27,14);
		 textcolor(9);
		 cprintf("Ë");
		 gotoxy(28,14);
		 textcolor(11);
		 cprintf(")");
		 gotoxy(27,15);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 15:
		 gotoxy(26,15);
		 textcolor(11);
		 cprintf("(");
		 gotoxy(27,15);
		 textcolor(9);
		 cprintf("Ë");
		 gotoxy(28,15);
		 textcolor(11);
		 cprintf(")");
		 gotoxy(27,16);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 16:
		 gotoxy(26,16);
		 textcolor(11);
		 cprintf("(");
		 gotoxy(27,16);
		 textcolor(9);
		 cprintf("Ë");
		 gotoxy(28,16);
		 textcolor(11);
		 cprintf(")");
		 gotoxy(27,17);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 17:
		 gotoxy(26,17);
		 textcolor(11);
		 cprintf("(");
		 gotoxy(27,17);
		 textcolor(9);
		 cprintf("Ë");
		 gotoxy(28,17);
		 textcolor(11);
		 cprintf(")");
		 gotoxy(27,18);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 18:
		 gotoxy(26,18);
		 textcolor(11);
		 cprintf("(");
		 gotoxy(27,18);
		 textcolor(9);
		 cprintf("Ë");
		 gotoxy(28,18);
		 textcolor(11);
		 cprintf(")");
		 gotoxy(27,19);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 19:
		 gotoxy(26,19);
		 textcolor(11);
		 cprintf("(");
		 gotoxy(27,19);
		 textcolor(9);
		 cprintf("Ë");
		 gotoxy(28,19);
		 textcolor(11);
		 cprintf(")");
		 gotoxy(27,20);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 20:
		 gotoxy(26,20);
		 textcolor(11);
		 cprintf("(");
		 gotoxy(27,20);
		 textcolor(9);
		 cprintf("Ë");
		 gotoxy(28,20);
		 textcolor(11);
		 cprintf(")");
		 gotoxy(27,21);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 21:
		 gotoxy(26,21);
		 textcolor(11);
		 cprintf("(");
		 gotoxy(27,21);
		 textcolor(9);
		 cprintf("Ë");
		 gotoxy(28,21);
		 textcolor(11);
		 cprintf(")");
		 gotoxy(27,22);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 22:
		 gotoxy(26,22);
		 textcolor(11);
		 cprintf("(");
		 gotoxy(27,22);
		 textcolor(9);
		 cprintf("Ë");
		 gotoxy(28,22);
		 textcolor(11);
		 cprintf(")");
		 gotoxy(27,23);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 23:
		 gotoxy(26,23);
		 textcolor(11);
		 cprintf("(");
		 gotoxy(27,23);
		 textcolor(9);
		 cprintf("Ë");
		 gotoxy(28,23);
		 textcolor(11);
		 cprintf(")");
		 gotoxy(27,24);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 24:
		 gotoxy(26,24);
		 textcolor(11);
		 cprintf("(");
		 gotoxy(27,24);
		 textcolor(9);
		 cprintf("Ë");
		 gotoxy(28,24);
		 textcolor(11);
		 cprintf(")");
		 gotoxy(27,25);
		 textcolor(4);
		 cprintf("");
		 break;
		}//switch q[n] case 27 ,case 4(car) end
	break;
	case 41:
		switch(q[n])
		{//switch q[n] case 41 ,case 4(car) start
		 case 2:
		 gotoxy(40,2);
		 textcolor(11);
		 cprintf("(");
		 gotoxy(41,2);
		 textcolor(9);
		 cprintf("Ë");
		 gotoxy(42,2);
		 textcolor(11);
		 cprintf(")");
		 gotoxy(41,3);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 3:
		 gotoxy(40,3);
		 textcolor(11);
		 cprintf("(");
		 gotoxy(41,3);
		 textcolor(9);
		 cprintf("Ë");
		 gotoxy(42,3);
		 textcolor(11);
		 cprintf(")");
		 gotoxy(41,4);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 4:
		 gotoxy(40,4);
		 textcolor(11);
		 cprintf("(");
		 gotoxy(41,4);
		 textcolor(9);
		 cprintf("Ë");
		 gotoxy(42,4);
		 textcolor(11);
		 cprintf(")");
		 gotoxy(41,5);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 5:
		 gotoxy(40,5);
		 textcolor(11);
		 cprintf("(");
		 gotoxy(41,5);
		 textcolor(9);
		 cprintf("Ë");
		 gotoxy(42,5);
		 textcolor(11);
		 cprintf(")");
		 gotoxy(41,6);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 6:
		 gotoxy(40,6);
		 textcolor(11);
		 cprintf("(");
		 gotoxy(41,6);
		 textcolor(9);
		 cprintf("Ë");
		 gotoxy(42,6);
		 textcolor(11);
		 cprintf(")");
		 gotoxy(41,7);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 7:
		 gotoxy(40,7);
		 textcolor(11);
		 cprintf("(");
		 gotoxy(41,7);
		 textcolor(9);
		 cprintf("Ë");
		 gotoxy(42,7);
		 textcolor(11);
		 cprintf(")");
		 gotoxy(41,8);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 8:
		 gotoxy(40,8);
		 textcolor(11);
		 cprintf("(");
		 gotoxy(41,8);
		 textcolor(9);
		 cprintf("Ë");
		 gotoxy(42,8);
		 textcolor(11);
		 cprintf(")");
		 gotoxy(41,9);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 9:
		 gotoxy(40,9);
		 textcolor(11);
		 cprintf("(");
		 gotoxy(41,9);
		 textcolor(9);
		 cprintf("Ë");
		 gotoxy(42,9);
		 textcolor(11);
		 cprintf(")");
		 gotoxy(41,10);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 10:
		 gotoxy(40,10);
		 textcolor(11);
		 cprintf("(");
		 gotoxy(41,10);
		 textcolor(9);
		 cprintf("Ë");
		 gotoxy(42,10);
		 textcolor(11);
		 cprintf(")");
		 gotoxy(41,11);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 11:
		 gotoxy(40,11);
		 textcolor(11);
		 cprintf("(");
		 gotoxy(41,11);
		 textcolor(9);
		 cprintf("Ë");
		 gotoxy(42,11);
		 textcolor(11);
		 cprintf(")");
		 gotoxy(41,12);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 12:
		 gotoxy(40,12);
		 textcolor(11);
		 cprintf("(");
		 gotoxy(41,12);
		 textcolor(9);
		 cprintf("Ë");
		 gotoxy(42,12);
		 textcolor(11);
		 cprintf(")");
		 gotoxy(41,13);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 13:
		 gotoxy(40,13);
		 textcolor(11);
		 cprintf("(");
		 gotoxy(41,13);
		 textcolor(9);
		 cprintf("Ë");
		 gotoxy(42,13);
		 textcolor(11);
		 cprintf(")");
		 gotoxy(41,14);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 14:
		 gotoxy(40,14);
		 textcolor(11);
		 cprintf("(");
		 gotoxy(41,14);
		 textcolor(9);
		 cprintf("Ë");
		 gotoxy(42,14);
		 textcolor(11);
		 cprintf(")");
		 gotoxy(41,15);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 15:
		 gotoxy(40,15);
		 textcolor(11);
		 cprintf("(");
		 gotoxy(41,15);
		 textcolor(9);
		 cprintf("Ë");
		 gotoxy(42,15);
		 textcolor(11);
		 cprintf(")");
		 gotoxy(41,16);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 16:
		 gotoxy(40,16);
		 textcolor(11);
		 cprintf("(");
		 gotoxy(41,16);
		 textcolor(9);
		 cprintf("Ë");
		 gotoxy(42,16);
		 textcolor(11);
		 cprintf(")");
		 gotoxy(41,17);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 17:
		 gotoxy(40,17);
		 textcolor(11);
		 cprintf("(");
		 gotoxy(41,17);
		 textcolor(9);
		 cprintf("Ë");
		 gotoxy(42,17);
		 textcolor(11);
		 cprintf(")");
		 gotoxy(41,18);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 18:
		 gotoxy(40,18);
		 textcolor(11);
		 cprintf("(");
		 gotoxy(41,18);
		 textcolor(9);
		 cprintf("Ë");
		 gotoxy(42,18);
		 textcolor(11);
		 cprintf(")");
		 gotoxy(41,19);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 19:
		 gotoxy(40,19);
		 textcolor(11);
		 cprintf("(");
		 gotoxy(41,19);
		 textcolor(9);
		 cprintf("Ë");
		 gotoxy(42,19);
		 textcolor(11);
		 cprintf(")");
		 gotoxy(41,20);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 20:
		 gotoxy(40,20);
		 textcolor(11);
		 cprintf("(");
		 gotoxy(41,20);
		 textcolor(9);
		 cprintf("Ë");
		 gotoxy(42,20);
		 textcolor(11);
		 cprintf(")");
		 gotoxy(41,21);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 21:
		 gotoxy(40,21);
		 textcolor(11);
		 cprintf("(");
		 gotoxy(41,21);
		 textcolor(9);
		 cprintf("Ë");
		 gotoxy(42,21);
		 textcolor(11);
		 cprintf(")");
		 gotoxy(41,22);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 22:
		 gotoxy(40,22);
		 textcolor(11);
		 cprintf("(");
		 gotoxy(41,22);
		 textcolor(9);
		 cprintf("Ë");
		 gotoxy(42,22);
		 textcolor(11);
		 cprintf(")");
		 gotoxy(41,23);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 23:
		 gotoxy(40,23);
		 textcolor(11);
		 cprintf("(");
		 gotoxy(41,23);
		 textcolor(9);
		 cprintf("Ë");
		 gotoxy(42,23);
		 textcolor(11);
		 cprintf(")");
		 gotoxy(41,24);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 24:
		 gotoxy(40,24);
		 textcolor(11);
		 cprintf("(");
		 gotoxy(41,24);
		 textcolor(9);
		 cprintf("Ë");
		 gotoxy(42,24);
		 textcolor(11);
		 cprintf(")");
		 gotoxy(41,25);
		 textcolor(4);
		 cprintf("");
		 break;
		}//switch q[n] case 41 ,case 4(car) end
	break;
	case 55:
		switch(q[n])
		{//switch q[n] case 55 ,case 4(car) start
		 case 2:
		 gotoxy(54,2);
		 textcolor(11);
		 cprintf("(");
		 gotoxy(55,2);
		 textcolor(9);
		 cprintf("Ë");
		 gotoxy(56,2);
		 textcolor(11);
		 cprintf(")");
		 gotoxy(55,3);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 3:
		 gotoxy(54,3);
		 textcolor(11);
		 cprintf("(");
		 gotoxy(55,3);
		 textcolor(9);
		 cprintf("Ë");
		 gotoxy(56,3);
		 textcolor(11);
		 cprintf(")");
		 gotoxy(55,4);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 4:
		 gotoxy(54,4);
		 textcolor(11);
		 cprintf("(");
		 gotoxy(55,4);
		 textcolor(9);
		 cprintf("Ë");
		 gotoxy(56,4);
		 textcolor(11);
		 cprintf(")");
		 gotoxy(55,5);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 5:
		 gotoxy(54,5);
		 textcolor(11);
		 cprintf("(");
		 gotoxy(55,5);
		 textcolor(9);
		 cprintf("Ë");
		 gotoxy(56,5);
		 textcolor(11);
		 cprintf(")");
		 gotoxy(55,6);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 6:
		 gotoxy(54,6);
		 textcolor(11);
		 cprintf("(");
		 gotoxy(55,6);
		 textcolor(9);
		 cprintf("Ë");
		 gotoxy(56,6);
		 textcolor(11);
		 cprintf(")");
		 gotoxy(55,7);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 7:
		 gotoxy(54,7);
		 textcolor(11);
		 cprintf("(");
		 gotoxy(55,7);
		 textcolor(9);
		 cprintf("Ë");
		 gotoxy(56,7);
		 textcolor(11);
		 cprintf(")");
		 gotoxy(55,8);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 8:
		 gotoxy(54,8);
		 textcolor(11);
		 cprintf("(");
		 gotoxy(55,8);
		 textcolor(9);
		 cprintf("Ë");
		 gotoxy(56,8);
		 textcolor(11);
		 cprintf(")");
		 gotoxy(55,9);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 9:
		 gotoxy(54,9);
		 textcolor(11);
		 cprintf("(");
		 gotoxy(55,9);
		 textcolor(9);
		 cprintf("Ë");
		 gotoxy(56,9);
		 textcolor(11);
		 cprintf(")");
		 gotoxy(55,10);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 10:
		 gotoxy(54,10);
		 textcolor(11);
		 cprintf("(");
		 gotoxy(55,10);
		 textcolor(9);
		 cprintf("Ë");
		 gotoxy(56,10);
		 textcolor(11);
		 cprintf(")");
		 gotoxy(55,11);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 11:
		 gotoxy(54,11);
		 textcolor(11);
		 cprintf("(");
		 gotoxy(55,11);
		 textcolor(9);
		 cprintf("Ë");
		 gotoxy(56,11);
		 textcolor(11);
		 cprintf(")");
		 gotoxy(55,12);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 12:
		 gotoxy(54,12);
		 textcolor(11);
		 cprintf("(");
		 gotoxy(55,12);
		 textcolor(9);
		 cprintf("Ë");
		 gotoxy(56,12);
		 textcolor(11);
		 cprintf(")");
		 gotoxy(55,13);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 13:
		 gotoxy(54,13);
		 textcolor(11);
		 cprintf("(");
		 gotoxy(55,13);
		 textcolor(9);
		 cprintf("Ë");
		 gotoxy(56,13);
		 textcolor(11);
		 cprintf(")");
		 gotoxy(55,14);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 14:
		 gotoxy(54,14);
		 textcolor(11);
		 cprintf("(");
		 gotoxy(55,14);
		 textcolor(9);
		 cprintf("Ë");
		 gotoxy(56,14);
		 textcolor(11);
		 cprintf(")");
		 gotoxy(55,15);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 15:
		 gotoxy(54,15);
		 textcolor(11);
		 cprintf("(");
		 gotoxy(55,15);
		 textcolor(9);
		 cprintf("Ë");
		 gotoxy(56,15);
		 textcolor(11);
		 cprintf(")");
		 gotoxy(55,16);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 16:
		 gotoxy(54,16);
		 textcolor(11);
		 cprintf("(");
		 gotoxy(55,16);
		 textcolor(9);
		 cprintf("Ë");
		 gotoxy(56,16);
		 textcolor(11);
		 cprintf(")");
		 gotoxy(55,17);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 17:
		 gotoxy(54,17);
		 textcolor(11);
		 cprintf("(");
		 gotoxy(55,17);
		 textcolor(9);
		 cprintf("Ë");
		 gotoxy(56,17);
		 textcolor(11);
		 cprintf(")");
		 gotoxy(55,18);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 18:
		 gotoxy(54,18);
		 textcolor(11);
		 cprintf("(");
		 gotoxy(55,18);
		 textcolor(9);
		 cprintf("Ë");
		 gotoxy(56,18);
		 textcolor(11);
		 cprintf(")");
		 gotoxy(55,19);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 19:
		 gotoxy(54,19);
		 textcolor(11);
		 cprintf("(");
		 gotoxy(55,19);
		 textcolor(9);
		 cprintf("Ë");
		 gotoxy(56,19);
		 textcolor(11);
		 cprintf(")");
		 gotoxy(55,20);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 20:
		 gotoxy(54,20);
		 textcolor(11);
		 cprintf("(");
		 gotoxy(55,20);
		 textcolor(9);
		 cprintf("Ë");
		 gotoxy(56,20);
		 textcolor(11);
		 cprintf(")");
		 gotoxy(55,21);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 21:
		 gotoxy(54,21);
		 textcolor(11);
		 cprintf("(");
		 gotoxy(55,21);
		 textcolor(9);
		 cprintf("Ë");
		 gotoxy(56,21);
		 textcolor(11);
		 cprintf(")");
		 gotoxy(55,22);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 22:
		 gotoxy(54,22);
		 textcolor(11);
		 cprintf("(");
		 gotoxy(55,22);
		 textcolor(9);
		 cprintf("Ë");
		 gotoxy(56,22);
		 textcolor(11);
		 cprintf(")");
		 gotoxy(55,23);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 23:
		 gotoxy(54,23);
		 textcolor(11);
		 cprintf("(");
		 gotoxy(55,23);
		 textcolor(9);
		 cprintf("Ë");
		 gotoxy(56,23);
		 textcolor(11);
		 cprintf(")");
		 gotoxy(55,24);
		 textcolor(4);
		 cprintf("");
		 break;
		 case 24:
		 gotoxy(54,24);
		 textcolor(11);
		 cprintf("(");
		 gotoxy(55,24);
		 textcolor(9);
		 cprintf("Ë");
		 gotoxy(56,24);
		 textcolor(11);
		 cprintf(")");
		 gotoxy(55,25);
		 textcolor(4);
		 cprintf("");
		 break;
		}//switch q[n] case 27 ,case 4(car) end
	break;
	}// switch p[n] case 4 end
break;

      }///car part end

//////////////score part START
if(q[n]==24)
{
score+=1;
gotoxy(69,17);
textcolor(14);
cprintf("%d",score);
}
///////////// score part END
}//main for loop end
m++;
///////distance calculating part start
distance=distance+0.001;
gotoxy(69,5);
textcolor(14);
cprintf("%f",distance);
////////distance calculating part end

 ////////////time calculating part start
 second = time(NULL); /* Gets system time again */
	  gotoxy(69,9);
	  textcolor(14);
	  cprintf("%f",difftime(second,first));
	  diff=difftime(second,first) ;
/////          time calculating part end

/////speed calculating part start
speed=(distance/(diff/3600));
gotoxy(69,13);
textcolor(14);
cprintf("%f",speed);
////speed calculating part END
	//////////////main logic part  END
	      nosound();
	      }//while !kbhit end

	  ii.h.ah = 0; //service number

	  int86(22,&ii, &oo); //issue interrupt

	  scan = oo.h.ah;

	  ascii = oo.h.al;

	  }

