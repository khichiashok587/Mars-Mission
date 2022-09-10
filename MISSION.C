#include<graphics.h>
#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<stdlib.h>
void main()
{
	int gd=0,gm,b=1,c=1,d=1,e=100,f=450,g=450,h,i,j,k,l,m=360,n=0,o=0,p=360,q,x=1,y=90,s,t,x_axis=370,y_axis=390,x_r=50,y_r=50;
	float z=0.3;
	int rocket[12]={350,405,370,375,390,405};//,340,435,320,435,300,415};
	clrscr();
	initgraph(&gd,&gm,"");
	for(i=0;i<20;i++)
	{
		cleardevice();
		setcolor(6);
		setfillstyle(1,6);
		fillpoly(3,&rocket);
		for(j=0;j<3;j++)
		{
			line(350+i,425+j*(20-i),390-i,425+j*(20-i));
		}
		line(350+i,405+i,350+i,465-i*2);
		line(390-i,405+i,390-i,465-i*2);
		rocket[0]++;
		rocket[1]++;
		rocket[3]+=2;
		rocket[4]--;
		rocket[5]++;
//		rocket[6]++;
  //		rocket[7]++;
		if(i<19)
		{
			floodfill(370,424,6);
			setfillstyle(1,15);
			floodfill(370,426,6);
			setfillstyle(1,2);
			floodfill(370,446-i,6);
		}
		setcolor(1);
		circle(370,435-i*.5,10-i*.5);
		setcolor(3);
		setfillstyle(1,3);
		fillellipse(370,915-i,f,g+i);		//earth
		delay(e*5);
	}
	for(i=0;i<500;i++)
	{
		cleardevice();
		setcolor(6);
		line(369,428-i,369,436-i);
		line(371,428-i,371,436-i);
		line(370,423-i,370,436-i);
		setcolor(3);
		setfillstyle(1,3);
		fillellipse(370,885-i,f,g);		//earth
		if(i%4==0)
		{	f--;
			g--;
		}
		setcolor(0);
		outtextxy(351,885-i,"EARTH");
		setcolor(15);
		outtextxy(55,10,"The Setelite Is Being Lounched By ASHOK KHICHI Form INDIA (EARTH)");
		setcolor(1);
		line(320,20,415,20);   //underline
		setcolor(2);
		line(320,22,415,22);  //underline
		delay(e+d);
	}
	for(i=0;i<600;i++)
	{
		cleardevice();
		if(i%2==0)
		{
			f--;
			g--;
		}
		setfillstyle(1,3);
		fillellipse(370,y_axis,f,g);
		setcolor(0);
		outtextxy(351,387,"EARTH");
		delay(e+d);
	}
///////////////////////////////////////////////////////////////////////////////////////////////////
	setcolor(1);
	line(320,28,415,28);   //underline
	setcolor(2);
	line(320,30,415,30);  //underline
	setcolor(3);
	circle(370,y_axis,25);         // earth
	setfillstyle(1,3);
	floodfill(350,y_axis-5,3);
	setcolor(4);
	outtextxy(351,y_axis-3,"EARTH");
	setcolor(15);
	outtextxy(50,18,"The Setelite Is Being Lounched By ASHOK KHICHI Form INDIA (EARTH)");
	delay(100);
	printf("\n\n");
	for(h=0;h<90;h++)
	{
		arc(x_axis,y_axis,90-h,94-h,25+h*.3);
		delay(e);
	}
	for(i=0;i<6;i++)
	{
		if(i==0)
		{
			setcolor(15);
			for(j=90;j>=0;j--)
			{
				ellipse(x_axis,y_axis,j-90,j+2-90,x_r+i,y_r+i);
				ellipse(x_axis,y_axis,j-90,j+2-90,x_r+i+1,y_r+i+1);
				delay(e);
			}
			m-=90;
			n-=90;
		}
		for(j=m;j>=n;j--)
		{
			setcolor(c);
			ellipse(x_axis,y_axis,j,j+2,x_r+i,y_r+i);
			ellipse(x_axis,y_axis,j,j+2,x_r+i+1,y_r+i+1);
			delay(e);
		}
		if(i==0)
		{       continue;	}
		printf("%d Day After Lunching AND Fire\n",(i)*(i));
		if(i==5)
		{
			printf("AFTER 25 DAYS High Speed\n\tThen\n     Setelight \n\tIs \nOut-Side of Grevity\n");
			for(j=360;j>=270;j--)
			{
				setcolor(c);
				ellipse(x_axis,y_axis-150,j-90,j+2-90,x_r+155,y_r+155);
				ellipse(x_axis,y_axis-150,j-90,j+2-90,x_r+157,y_r+156);
				x+=z;
				delay(e);
			}
		}
		y_axis-=41;
		x_r=x_r+35;
		y_r=y_r+40;
		c++;
		e--;
	}
	for(i=0;i<100;i++)
	{
		circle(24,75-i,1);
		delay(e/2);
	}
//////////////////////////////////////////////////////////////////////////////
	for(i=0;i<500;i++)
	{
		cleardevice();
		if(i<240)
		{	delay(e+i);	}
		else
		{	printf("\n\t\tSetelight Is Successfully Out-Side of Grevity");	}
		setcolor(6);
		circle(24,480-i,6);         //mangal yaan
		circle(24,480-i,5);         //mangal yaan
		setcolor(15);
		circle(24,480-i,4);         //mangal yaan
		setcolor(2);                //mangal yaan
		circle(24,480-i,3);         //mangal yaan
		circle(24,480-i,2);         //mangal yaan
		circle(24,480-i,1);         //mangal yaan
		line(0,0+i,640,0+i);        //grevity lines
		line(0,1+i,640,1+i);        //grevity lines
		outtextxy(200,-10+i,"GREVITATIONAl LINES OF EARTH");
		setcolor(15);
		line(150,480-i,200,480-i);
		outtextxy(250,478-i,"INDIAN MANGAL YAAN");
		delay(e);
	}
///////////////////////////////////////////////////////////////////////////////
	for(i=520;i>=0;i--)
	{
		setcolor(5);
if(i>7){	printf("\n\t\t%d  Lakh KMs to MARS ",i/5);	}
		setcolor(6);
		circle(24,i,6);         //mangal yaan
		circle(24,i,5);         //mangal yaan
		setcolor(15);
		circle(24,i,4);         //mangal yaan
		setcolor(2);                //mangal yaan
		circle(24,i,3);         //mangal yaan
		circle(24,i,2);         //mangal yaan
		circle(24,i,1);         //mangal yaan
		delay(e);
		cleardevice();
	}
///////////////////////////////////////////////////////////////////////////////////////////
	setcolor(6);
	circle(400,240,100);
	setfillstyle(1,6);
	floodfill(400,240,6);
	setcolor(1);
	outtextxy(385,235,"MARS");
	for(i=100;i<=300;i++)
	{
		arc(410,330,10-i,12-i,590-i);
		delay(e*2);
	}
	for(i=100;i<=500;i++)
	{
		setcolor(7);
		arc(400,240,160-i,163-i,212);
		arc(400,240,160-i,163-i,213);
		delay(e*2);
	}
	setcolor(0);
	outtextxy(315,210,"MISSION IS SUCCESSFULL");
	s=getmaxx();
	t=getmaxy();
	for(j=0;j<10;j++)
	{
		for(i=0;i<100;i++)
		{
			setcolor(i);
			outtextxy(random(s),random(t),"*");
		}
		delay(300);
	}
	getch();
}


/*	for(h=0;h<90;h++)
  //	{
    //		arc(370,y_axis,90-h,94-h,24+h*.3);
      //		delay(e);
       //	}
/*		if(i==4 )
		{
			y=190;
			z=.7;
		}
				  */