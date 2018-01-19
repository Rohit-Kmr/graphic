#include<iostream.h>
#include<conio.h>
#include<math.h>
#include<graphics.h>
#include<dos.h>

int round( float a)
{
 float b=(int)a;
 b+=0.5;
 if(a<b)
  b-=0.5;
 else
  b+=0.5;
 return b;
}

void main()
{
 clrscr();
 int gdriver = DETECT, gmode, errorcode;
 initgraph(&gdriver,&gmode,"C:\\TURBOC3\\BGI");
 int x1,x2,y1,y2,dx,dy,f;
 float x,y;
 float pk;
 cout<<"enter x1 and y1";
 cin>>x1>>y1;
 cout<<"enter x2 and y2";
 cin>>x2>>y2;
 x=x1;
 y=y1;
 dx=x2-x1;
 dy=y2-y1;
 if(dy>dx)
 {
	f=dx;
	dx=dy;
	dy=f;
	f=0;
 }
 else
 {
	f=1;
 }
 pk=2*dy-dx;
 clrscr();
 for(int i=0;i<=dx;i++)
 {
  putpixel(x,y,RED);
  delay(10);
  if(pk<0)
  {
	pk=pk+2*dy;
	if(f==1)
		x+=1;
	else
		y+=1;
  }
  else
  {
	pk=pk+2*dy-2*dx;
	x+=1;
	y+=1;
  }
 }
 getch();
 cin.ignore();
}